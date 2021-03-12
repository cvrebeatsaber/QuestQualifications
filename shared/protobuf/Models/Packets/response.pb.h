// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fresponse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fresponse_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fresponse_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2fresponse_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class Response;
struct ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::Response* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

enum Response_ResponseType : int {
  Response_ResponseType_Fail = 0,
  Response_ResponseType_Success = 1,
  Response_ResponseType_Response_ResponseType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Response_ResponseType_Response_ResponseType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Response_ResponseType_IsValid(int value);
constexpr Response_ResponseType Response_ResponseType_ResponseType_MIN = Response_ResponseType_Fail;
constexpr Response_ResponseType Response_ResponseType_ResponseType_MAX = Response_ResponseType_Success;
constexpr int Response_ResponseType_ResponseType_ARRAYSIZE = Response_ResponseType_ResponseType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Response_ResponseType_descriptor();
template<typename T>
inline const std::string& Response_ResponseType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Response_ResponseType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Response_ResponseType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Response_ResponseType_descriptor(), enum_t_value);
}
inline bool Response_ResponseType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Response_ResponseType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Response_ResponseType>(
    Response_ResponseType_descriptor(), name, value);
}
// ===================================================================

class Response PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.Response) */ {
 public:
  inline Response() : Response(nullptr) {}
  virtual ~Response();
  explicit constexpr Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Response(const Response& from);
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline Response& operator=(Response&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }
  inline void Swap(Response* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(nullptr);
  }

  Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.Response";
  }
  protected:
  explicit Response(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fresponse_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  typedef Response_ResponseType ResponseType;
  static constexpr ResponseType Fail =
    Response_ResponseType_Fail;
  static constexpr ResponseType Success =
    Response_ResponseType_Success;
  static inline bool ResponseType_IsValid(int value) {
    return Response_ResponseType_IsValid(value);
  }
  static constexpr ResponseType ResponseType_MIN =
    Response_ResponseType_ResponseType_MIN;
  static constexpr ResponseType ResponseType_MAX =
    Response_ResponseType_ResponseType_MAX;
  static constexpr int ResponseType_ARRAYSIZE =
    Response_ResponseType_ResponseType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ResponseType_descriptor() {
    return Response_ResponseType_descriptor();
  }
  template<typename T>
  static inline const std::string& ResponseType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ResponseType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ResponseType_Name.");
    return Response_ResponseType_Name(enum_t_value);
  }
  static inline bool ResponseType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ResponseType* value) {
    return Response_ResponseType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // .TournamentAssistantShared.Models.Packets.Response.ResponseType type = 1;
  void clear_type();
  ::TournamentAssistantShared::Models::Packets::Response_ResponseType type() const;
  void set_type(::TournamentAssistantShared::Models::Packets::Response_ResponseType value);
  private:
  ::TournamentAssistantShared::Models::Packets::Response_ResponseType _internal_type() const;
  void _internal_set_type(::TournamentAssistantShared::Models::Packets::Response_ResponseType value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Response

// .TournamentAssistantShared.Models.Packets.Response.ResponseType type = 1;
inline void Response::clear_type() {
  type_ = 0;
}
inline ::TournamentAssistantShared::Models::Packets::Response_ResponseType Response::_internal_type() const {
  return static_cast< ::TournamentAssistantShared::Models::Packets::Response_ResponseType >(type_);
}
inline ::TournamentAssistantShared::Models::Packets::Response_ResponseType Response::type() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.Response.type)
  return _internal_type();
}
inline void Response::_internal_set_type(::TournamentAssistantShared::Models::Packets::Response_ResponseType value) {
  
  type_ = value;
}
inline void Response::set_type(::TournamentAssistantShared::Models::Packets::Response_ResponseType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.Response.type)
}

// string message = 2;
inline void Response::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& Response::message() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.Response.message)
  return _internal_message();
}
inline void Response::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.Response.message)
}
inline std::string* Response::mutable_message() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.Response.message)
  return _internal_mutable_message();
}
inline const std::string& Response::_internal_message() const {
  return message_.Get();
}
inline void Response::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Response::set_message(std::string&& value) {
  
  message_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Packets.Response.message)
}
inline void Response::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Packets.Response.message)
}
inline void Response::set_message(const char* value,
    size_t size) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Packets.Response.message)
}
inline std::string* Response::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Response::release_message() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.Response.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Response::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.Response.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::TournamentAssistantShared::Models::Packets::Response_ResponseType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TournamentAssistantShared::Models::Packets::Response_ResponseType>() {
  return ::TournamentAssistantShared::Models::Packets::Response_ResponseType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fresponse_2eproto
