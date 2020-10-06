#pragma once
#include <string>
#include <string_view>

namespace WebUtil {
    long Get(std::string_view url, std::string& val);
    long Post(std::string_view url, std::string_view data, std::string& resp);
}