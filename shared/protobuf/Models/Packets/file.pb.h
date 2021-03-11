// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/file.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2ffile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2ffile_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015005 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2ffile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2ffile_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class File;
struct FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::File* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::File>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

enum File_Intentions : int {
  File_Intentions_None = 0,
  File_Intentions_SetPngToShowWhenTriggered = 1,
  File_Intentions_ShowPngImmediately = 2,
  File_Intentions_File_Intentions_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  File_Intentions_File_Intentions_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool File_Intentions_IsValid(int value);
constexpr File_Intentions File_Intentions_Intentions_MIN = File_Intentions_None;
constexpr File_Intentions File_Intentions_Intentions_MAX = File_Intentions_ShowPngImmediately;
constexpr int File_Intentions_Intentions_ARRAYSIZE = File_Intentions_Intentions_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* File_Intentions_descriptor();
template<typename T>
inline const std::string& File_Intentions_Name(T enum_t_value) {
  static_assert(::std::is_same<T, File_Intentions>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function File_Intentions_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    File_Intentions_descriptor(), enum_t_value);
}
inline bool File_Intentions_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, File_Intentions* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<File_Intentions>(
    File_Intentions_descriptor(), name, value);
}
// ===================================================================

class File PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.File) */ {
 public:
  inline File() : File(nullptr) {}
  virtual ~File();
  explicit constexpr File(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  File(const File& from);
  File(File&& from) noexcept
    : File() {
    *this = ::std::move(from);
  }

  inline File& operator=(const File& from) {
    CopyFrom(from);
    return *this;
  }
  inline File& operator=(File&& from) noexcept {
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
  static const File& default_instance() {
    return *internal_default_instance();
  }
  static inline const File* internal_default_instance() {
    return reinterpret_cast<const File*>(
               &_File_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(File& a, File& b) {
    a.Swap(&b);
  }
  inline void Swap(File* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(File* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline File* New() const final {
    return CreateMaybeMessage<File>(nullptr);
  }

  File* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<File>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const File& from);
  void MergeFrom(const File& from);
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
  void InternalSwap(File* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.File";
  }
  protected:
  explicit File(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  typedef File_Intentions Intentions;
  static constexpr Intentions None =
    File_Intentions_None;
  static constexpr Intentions SetPngToShowWhenTriggered =
    File_Intentions_SetPngToShowWhenTriggered;
  static constexpr Intentions ShowPngImmediately =
    File_Intentions_ShowPngImmediately;
  static inline bool Intentions_IsValid(int value) {
    return File_Intentions_IsValid(value);
  }
  static constexpr Intentions Intentions_MIN =
    File_Intentions_Intentions_MIN;
  static constexpr Intentions Intentions_MAX =
    File_Intentions_Intentions_MAX;
  static constexpr int Intentions_ARRAYSIZE =
    File_Intentions_Intentions_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Intentions_descriptor() {
    return File_Intentions_descriptor();
  }
  template<typename T>
  static inline const std::string& Intentions_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Intentions>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Intentions_Name.");
    return File_Intentions_Name(enum_t_value);
  }
  static inline bool Intentions_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Intentions* value) {
    return File_Intentions_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kFileIdFieldNumber = 1,
    kDataFieldNumber = 4,
    kIntentFieldNumber = 2,
    kCompressedFieldNumber = 3,
  };
  // string file_id = 1;
  void clear_file_id();
  const std::string& file_id() const;
  void set_file_id(const std::string& value);
  void set_file_id(std::string&& value);
  void set_file_id(const char* value);
  void set_file_id(const char* value, size_t size);
  std::string* mutable_file_id();
  std::string* release_file_id();
  void set_allocated_file_id(std::string* file_id);
  private:
  const std::string& _internal_file_id() const;
  void _internal_set_file_id(const std::string& value);
  std::string* _internal_mutable_file_id();
  public:

  // bytes data = 4;
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // .TournamentAssistantShared.Models.Packets.File.Intentions intent = 2;
  void clear_intent();
  ::TournamentAssistantShared::Models::Packets::File_Intentions intent() const;
  void set_intent(::TournamentAssistantShared::Models::Packets::File_Intentions value);
  private:
  ::TournamentAssistantShared::Models::Packets::File_Intentions _internal_intent() const;
  void _internal_set_intent(::TournamentAssistantShared::Models::Packets::File_Intentions value);
  public:

  // bool compressed = 3;
  void clear_compressed();
  bool compressed() const;
  void set_compressed(bool value);
  private:
  bool _internal_compressed() const;
  void _internal_set_compressed(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.File)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  int intent_;
  bool compressed_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2ffile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// File

// string file_id = 1;
inline void File::clear_file_id() {
  file_id_.ClearToEmpty();
}
inline const std::string& File::file_id() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.File.file_id)
  return _internal_file_id();
}
inline void File::set_file_id(const std::string& value) {
  _internal_set_file_id(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.File.file_id)
}
inline std::string* File::mutable_file_id() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.File.file_id)
  return _internal_mutable_file_id();
}
inline const std::string& File::_internal_file_id() const {
  return file_id_.Get();
}
inline void File::_internal_set_file_id(const std::string& value) {
  
  file_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void File::set_file_id(std::string&& value) {
  
  file_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Packets.File.file_id)
}
inline void File::set_file_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  file_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Packets.File.file_id)
}
inline void File::set_file_id(const char* value,
    size_t size) {
  
  file_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Packets.File.file_id)
}
inline std::string* File::_internal_mutable_file_id() {
  
  return file_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* File::release_file_id() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.File.file_id)
  return file_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void File::set_allocated_file_id(std::string* file_id) {
  if (file_id != nullptr) {
    
  } else {
    
  }
  file_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), file_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.File.file_id)
}

// .TournamentAssistantShared.Models.Packets.File.Intentions intent = 2;
inline void File::clear_intent() {
  intent_ = 0;
}
inline ::TournamentAssistantShared::Models::Packets::File_Intentions File::_internal_intent() const {
  return static_cast< ::TournamentAssistantShared::Models::Packets::File_Intentions >(intent_);
}
inline ::TournamentAssistantShared::Models::Packets::File_Intentions File::intent() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.File.intent)
  return _internal_intent();
}
inline void File::_internal_set_intent(::TournamentAssistantShared::Models::Packets::File_Intentions value) {
  
  intent_ = value;
}
inline void File::set_intent(::TournamentAssistantShared::Models::Packets::File_Intentions value) {
  _internal_set_intent(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.File.intent)
}

// bool compressed = 3;
inline void File::clear_compressed() {
  compressed_ = false;
}
inline bool File::_internal_compressed() const {
  return compressed_;
}
inline bool File::compressed() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.File.compressed)
  return _internal_compressed();
}
inline void File::_internal_set_compressed(bool value) {
  
  compressed_ = value;
}
inline void File::set_compressed(bool value) {
  _internal_set_compressed(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.File.compressed)
}

// bytes data = 4;
inline void File::clear_data() {
  data_.ClearToEmpty();
}
inline const std::string& File::data() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.File.data)
  return _internal_data();
}
inline void File::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.File.data)
}
inline std::string* File::mutable_data() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.File.data)
  return _internal_mutable_data();
}
inline const std::string& File::_internal_data() const {
  return data_.Get();
}
inline void File::_internal_set_data(const std::string& value) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void File::set_data(std::string&& value) {
  
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Packets.File.data)
}
inline void File::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Packets.File.data)
}
inline void File::set_data(const void* value,
    size_t size) {
  
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Packets.File.data)
}
inline std::string* File::_internal_mutable_data() {
  
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* File::release_data() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.File.data)
  return data_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void File::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.File.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::TournamentAssistantShared::Models::Packets::File_Intentions> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TournamentAssistantShared::Models::Packets::File_Intentions>() {
  return ::TournamentAssistantShared::Models::Packets::File_Intentions_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2ffile_2eproto
