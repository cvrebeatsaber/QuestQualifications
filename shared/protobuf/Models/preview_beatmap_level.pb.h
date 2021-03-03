// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/preview_beatmap_level.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
#include "protobuf/Models/characteristic.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto;
namespace TournamentAssistantShared {
namespace Models {
class PreviewBeatmapLevel;
class PreviewBeatmapLevelDefaultTypeInternal;
extern PreviewBeatmapLevelDefaultTypeInternal _PreviewBeatmapLevel_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::PreviewBeatmapLevel* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::PreviewBeatmapLevel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {

// ===================================================================

class PreviewBeatmapLevel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.PreviewBeatmapLevel) */ {
 public:
  inline PreviewBeatmapLevel() : PreviewBeatmapLevel(nullptr) {}
  virtual ~PreviewBeatmapLevel();

  PreviewBeatmapLevel(const PreviewBeatmapLevel& from);
  PreviewBeatmapLevel(PreviewBeatmapLevel&& from) noexcept
    : PreviewBeatmapLevel() {
    *this = ::std::move(from);
  }

  inline PreviewBeatmapLevel& operator=(const PreviewBeatmapLevel& from) {
    CopyFrom(from);
    return *this;
  }
  inline PreviewBeatmapLevel& operator=(PreviewBeatmapLevel&& from) noexcept {
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
  static const PreviewBeatmapLevel& default_instance();

  static inline const PreviewBeatmapLevel* internal_default_instance() {
    return reinterpret_cast<const PreviewBeatmapLevel*>(
               &_PreviewBeatmapLevel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PreviewBeatmapLevel& a, PreviewBeatmapLevel& b) {
    a.Swap(&b);
  }
  inline void Swap(PreviewBeatmapLevel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PreviewBeatmapLevel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PreviewBeatmapLevel* New() const final {
    return CreateMaybeMessage<PreviewBeatmapLevel>(nullptr);
  }

  PreviewBeatmapLevel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PreviewBeatmapLevel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PreviewBeatmapLevel& from);
  void MergeFrom(const PreviewBeatmapLevel& from);
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
  void InternalSwap(PreviewBeatmapLevel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.PreviewBeatmapLevel";
  }
  protected:
  explicit PreviewBeatmapLevel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto);
    return ::descriptor_table_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCharacteristicsFieldNumber = 3,
    kLevelIdFieldNumber = 1,
    kNameFieldNumber = 2,
    kLoadedFieldNumber = 4,
  };
  // repeated .TournamentAssistantShared.Models.Characteristic characteristics = 3;
  int characteristics_size() const;
  private:
  int _internal_characteristics_size() const;
  public:
  void clear_characteristics();
  ::TournamentAssistantShared::Models::Characteristic* mutable_characteristics(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Characteristic >*
      mutable_characteristics();
  private:
  const ::TournamentAssistantShared::Models::Characteristic& _internal_characteristics(int index) const;
  ::TournamentAssistantShared::Models::Characteristic* _internal_add_characteristics();
  public:
  const ::TournamentAssistantShared::Models::Characteristic& characteristics(int index) const;
  ::TournamentAssistantShared::Models::Characteristic* add_characteristics();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Characteristic >&
      characteristics() const;

  // string level_id = 1;
  void clear_level_id();
  const std::string& level_id() const;
  void set_level_id(const std::string& value);
  void set_level_id(std::string&& value);
  void set_level_id(const char* value);
  void set_level_id(const char* value, size_t size);
  std::string* mutable_level_id();
  std::string* release_level_id();
  void set_allocated_level_id(std::string* level_id);
  private:
  const std::string& _internal_level_id() const;
  void _internal_set_level_id(const std::string& value);
  std::string* _internal_mutable_level_id();
  public:

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // bool loaded = 4;
  void clear_loaded();
  bool loaded() const;
  void set_loaded(bool value);
  private:
  bool _internal_loaded() const;
  void _internal_set_loaded(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.PreviewBeatmapLevel)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Characteristic > characteristics_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr level_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  bool loaded_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PreviewBeatmapLevel

// string level_id = 1;
inline void PreviewBeatmapLevel::clear_level_id() {
  level_id_.ClearToEmpty();
}
inline const std::string& PreviewBeatmapLevel::level_id() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
  return _internal_level_id();
}
inline void PreviewBeatmapLevel::set_level_id(const std::string& value) {
  _internal_set_level_id(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
}
inline std::string* PreviewBeatmapLevel::mutable_level_id() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
  return _internal_mutable_level_id();
}
inline const std::string& PreviewBeatmapLevel::_internal_level_id() const {
  return level_id_.Get();
}
inline void PreviewBeatmapLevel::_internal_set_level_id(const std::string& value) {
  
  level_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PreviewBeatmapLevel::set_level_id(std::string&& value) {
  
  level_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
}
inline void PreviewBeatmapLevel::set_level_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  level_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
}
inline void PreviewBeatmapLevel::set_level_id(const char* value,
    size_t size) {
  
  level_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
}
inline std::string* PreviewBeatmapLevel::_internal_mutable_level_id() {
  
  return level_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PreviewBeatmapLevel::release_level_id() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
  return level_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PreviewBeatmapLevel::set_allocated_level_id(std::string* level_id) {
  if (level_id != nullptr) {
    
  } else {
    
  }
  level_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), level_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.PreviewBeatmapLevel.level_id)
}

// string name = 2;
inline void PreviewBeatmapLevel::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& PreviewBeatmapLevel::name() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
  return _internal_name();
}
inline void PreviewBeatmapLevel::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
}
inline std::string* PreviewBeatmapLevel::mutable_name() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
  return _internal_mutable_name();
}
inline const std::string& PreviewBeatmapLevel::_internal_name() const {
  return name_.Get();
}
inline void PreviewBeatmapLevel::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void PreviewBeatmapLevel::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
}
inline void PreviewBeatmapLevel::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
}
inline void PreviewBeatmapLevel::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
}
inline std::string* PreviewBeatmapLevel::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* PreviewBeatmapLevel::release_name() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PreviewBeatmapLevel::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.PreviewBeatmapLevel.name)
}

// repeated .TournamentAssistantShared.Models.Characteristic characteristics = 3;
inline int PreviewBeatmapLevel::_internal_characteristics_size() const {
  return characteristics_.size();
}
inline int PreviewBeatmapLevel::characteristics_size() const {
  return _internal_characteristics_size();
}
inline ::TournamentAssistantShared::Models::Characteristic* PreviewBeatmapLevel::mutable_characteristics(int index) {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.PreviewBeatmapLevel.characteristics)
  return characteristics_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Characteristic >*
PreviewBeatmapLevel::mutable_characteristics() {
  // @@protoc_insertion_point(field_mutable_list:TournamentAssistantShared.Models.PreviewBeatmapLevel.characteristics)
  return &characteristics_;
}
inline const ::TournamentAssistantShared::Models::Characteristic& PreviewBeatmapLevel::_internal_characteristics(int index) const {
  return characteristics_.Get(index);
}
inline const ::TournamentAssistantShared::Models::Characteristic& PreviewBeatmapLevel::characteristics(int index) const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.PreviewBeatmapLevel.characteristics)
  return _internal_characteristics(index);
}
inline ::TournamentAssistantShared::Models::Characteristic* PreviewBeatmapLevel::_internal_add_characteristics() {
  return characteristics_.Add();
}
inline ::TournamentAssistantShared::Models::Characteristic* PreviewBeatmapLevel::add_characteristics() {
  // @@protoc_insertion_point(field_add:TournamentAssistantShared.Models.PreviewBeatmapLevel.characteristics)
  return _internal_add_characteristics();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Characteristic >&
PreviewBeatmapLevel::characteristics() const {
  // @@protoc_insertion_point(field_list:TournamentAssistantShared.Models.PreviewBeatmapLevel.characteristics)
  return characteristics_;
}

// bool loaded = 4;
inline void PreviewBeatmapLevel::clear_loaded() {
  loaded_ = false;
}
inline bool PreviewBeatmapLevel::_internal_loaded() const {
  return loaded_;
}
inline bool PreviewBeatmapLevel::loaded() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.PreviewBeatmapLevel.loaded)
  return _internal_loaded();
}
inline void PreviewBeatmapLevel::_internal_set_loaded(bool value) {
  
  loaded_ = value;
}
inline void PreviewBeatmapLevel::set_loaded(bool value) {
  _internal_set_loaded(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.PreviewBeatmapLevel.loaded)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace TournamentAssistantShared

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto
