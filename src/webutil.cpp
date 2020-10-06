#include "webutil.hpp"
#include "include/libcurl/include/curl.h"
#include "include/libcurl/include/easy.h"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "logging.hpp"

#ifndef TIMEOUT
#define TIMEOUT 10
#endif

std::size_t CurlWrite_CallbackFunc_StdString(void *contents, std::size_t size, std::size_t nmemb, std::string *s)
{
    std::size_t newLength = size * nmemb;
    try {
        s->append((char*)contents, newLength);
        getLogger().debug("Appending contents, string is now: %s", s->c_str());
    }
    catch(std::bad_alloc &e) {
        //handle memory problem
        getLogger().critical("Failed to allocate string of size: %u", size);
        return 0;
    }
    return newLength;
}

long WebUtil::Get(std::string_view url, std::string& val) {
    // Init curl
    auto* curl = curl_easy_init();
    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "Accept: application/json");
    headers = curl_slist_append(headers, "Content-Type: application/json");
    // Set headers
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers); 

    curl_easy_setopt(curl, CURLOPT_URL, url.data());

    // Don't wait forever, time out after TIMEOUT seconds.
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, TIMEOUT);

    // Follow HTTP redirects if necessary.
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CurlWrite_CallbackFunc_StdString);

    long httpCode(0);

    curl_easy_setopt(curl, CURLOPT_WRITEDATA, reinterpret_cast<void*>(&val));
    curl_easy_setopt(curl, CURLOPT_USERAGENT, "QuestCVRE/0.1.0");
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false);

    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
 
    auto res = curl_easy_perform(curl);
    /* Check for errors */ 
    if (res != CURLE_OK) {
        getLogger().critical("curl_easy_perform() failed: %u: %s", res, curl_easy_strerror(res));
    }
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
    curl_easy_cleanup(curl);

    getLogger().debug("Completed curl request to url: %s with response: %u response: %s", url.data(), httpCode, val.c_str());

    return httpCode;
}

long WebUtil::Post(std::string_view url, std::string_view data, std::string& resp) {
    // Init curl
    auto* curl = curl_easy_init();
    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "Accept: application/json");
    headers = curl_slist_append(headers, "Content-Type: application/json");
    headers = curl_slist_append(headers, "charset: utf-8");
    // Set headers
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers); 

    curl_easy_setopt(curl, CURLOPT_URL, url.data());

    // Don't bother trying IPv6, which would increase DNS resolution time.
    curl_easy_setopt(curl, CURLOPT_IPRESOLVE, CURL_IPRESOLVE_V4);

    // Don't wait forever, time out after TIMEOUT seconds.
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, TIMEOUT);

    // Follow HTTP redirects if necessary.
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.data());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, CurlWrite_CallbackFunc_StdString);

    long httpCode(0);

    curl_easy_setopt(curl, CURLOPT_WRITEDATA, reinterpret_cast<void*>(&resp));
    curl_easy_setopt(curl, CURLOPT_USERAGENT, "QuestCVRE/0.1.0");
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false);

    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
 
    auto res = curl_easy_perform(curl);
    /* Check for errors */ 
    if (res != CURLE_OK) {
        getLogger().critical("curl_easy_perform() failed: %u: %s", res, curl_easy_strerror(res));
    }
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
    curl_easy_cleanup(curl);

    getLogger().debug("Completed curl request to url: %s with request: %s and response code: %u response: %s", url.data(), data.data(), httpCode, resp.c_str());

    return httpCode;
}