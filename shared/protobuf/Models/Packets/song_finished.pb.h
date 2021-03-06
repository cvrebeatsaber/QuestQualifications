// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/song_finished.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto

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
#include "protobuf/Models/player.pb.h"
#include "protobuf/Models/beatmap.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class SongFinished;
struct SongFinishedDefaultTypeInternal;
extern SongFinishedDefaultTypeInternal _SongFinished_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::SongFinished* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::SongFinished>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

enum SongFinished_CompletionType : int {
  SongFinished_CompletionType_Failed = 0,
  SongFinished_CompletionType_Passed = 1,
  SongFinished_CompletionType_Quit = 2,
  SongFinished_CompletionType_SongFinished_CompletionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SongFinished_CompletionType_SongFinished_CompletionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SongFinished_CompletionType_IsValid(int value);
constexpr SongFinished_CompletionType SongFinished_CompletionType_CompletionType_MIN = SongFinished_CompletionType_Failed;
constexpr SongFinished_CompletionType SongFinished_CompletionType_CompletionType_MAX = SongFinished_CompletionType_Quit;
constexpr int SongFinished_CompletionType_CompletionType_ARRAYSIZE = SongFinished_CompletionType_CompletionType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SongFinished_CompletionType_descriptor();
template<typename T>
inline const std::string& SongFinished_CompletionType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SongFinished_CompletionType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SongFinished_CompletionType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SongFinished_CompletionType_descriptor(), enum_t_value);
}
inline bool SongFinished_CompletionType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SongFinished_CompletionType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SongFinished_CompletionType>(
    SongFinished_CompletionType_descriptor(), name, value);
}
// ===================================================================

class SongFinished PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.SongFinished) */ {
 public:
  inline SongFinished() : SongFinished(nullptr) {}
  virtual ~SongFinished();
  explicit constexpr SongFinished(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SongFinished(const SongFinished& from);
  SongFinished(SongFinished&& from) noexcept
    : SongFinished() {
    *this = ::std::move(from);
  }

  inline SongFinished& operator=(const SongFinished& from) {
    CopyFrom(from);
    return *this;
  }
  inline SongFinished& operator=(SongFinished&& from) noexcept {
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
  static const SongFinished& default_instance() {
    return *internal_default_instance();
  }
  static inline const SongFinished* internal_default_instance() {
    return reinterpret_cast<const SongFinished*>(
               &_SongFinished_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SongFinished& a, SongFinished& b) {
    a.Swap(&b);
  }
  inline void Swap(SongFinished* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SongFinished* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SongFinished* New() const final {
    return CreateMaybeMessage<SongFinished>(nullptr);
  }

  SongFinished* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SongFinished>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SongFinished& from);
  void MergeFrom(const SongFinished& from);
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
  void InternalSwap(SongFinished* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.SongFinished";
  }
  protected:
  explicit SongFinished(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  typedef SongFinished_CompletionType CompletionType;
  static constexpr CompletionType Failed =
    SongFinished_CompletionType_Failed;
  static constexpr CompletionType Passed =
    SongFinished_CompletionType_Passed;
  static constexpr CompletionType Quit =
    SongFinished_CompletionType_Quit;
  static inline bool CompletionType_IsValid(int value) {
    return SongFinished_CompletionType_IsValid(value);
  }
  static constexpr CompletionType CompletionType_MIN =
    SongFinished_CompletionType_CompletionType_MIN;
  static constexpr CompletionType CompletionType_MAX =
    SongFinished_CompletionType_CompletionType_MAX;
  static constexpr int CompletionType_ARRAYSIZE =
    SongFinished_CompletionType_CompletionType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompletionType_descriptor() {
    return SongFinished_CompletionType_descriptor();
  }
  template<typename T>
  static inline const std::string& CompletionType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompletionType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompletionType_Name.");
    return SongFinished_CompletionType_Name(enum_t_value);
  }
  static inline bool CompletionType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CompletionType* value) {
    return SongFinished_CompletionType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kUserFieldNumber = 1,
    kBeatmapFieldNumber = 2,
    kTypeFieldNumber = 3,
    kScoreFieldNumber = 4,
  };
  // .TournamentAssistantShared.Models.Player user = 1;
  bool has_user() const;
  private:
  bool _internal_has_user() const;
  public:
  void clear_user();
  const ::TournamentAssistantShared::Models::Player& user() const;
  ::TournamentAssistantShared::Models::Player* release_user();
  ::TournamentAssistantShared::Models::Player* mutable_user();
  void set_allocated_user(::TournamentAssistantShared::Models::Player* user);
  private:
  const ::TournamentAssistantShared::Models::Player& _internal_user() const;
  ::TournamentAssistantShared::Models::Player* _internal_mutable_user();
  public:
  void unsafe_arena_set_allocated_user(
      ::TournamentAssistantShared::Models::Player* user);
  ::TournamentAssistantShared::Models::Player* unsafe_arena_release_user();

  // .TournamentAssistantShared.Models.Beatmap beatmap = 2;
  bool has_beatmap() const;
  private:
  bool _internal_has_beatmap() const;
  public:
  void clear_beatmap();
  const ::TournamentAssistantShared::Models::Beatmap& beatmap() const;
  ::TournamentAssistantShared::Models::Beatmap* release_beatmap();
  ::TournamentAssistantShared::Models::Beatmap* mutable_beatmap();
  void set_allocated_beatmap(::TournamentAssistantShared::Models::Beatmap* beatmap);
  private:
  const ::TournamentAssistantShared::Models::Beatmap& _internal_beatmap() const;
  ::TournamentAssistantShared::Models::Beatmap* _internal_mutable_beatmap();
  public:
  void unsafe_arena_set_allocated_beatmap(
      ::TournamentAssistantShared::Models::Beatmap* beatmap);
  ::TournamentAssistantShared::Models::Beatmap* unsafe_arena_release_beatmap();

  // .TournamentAssistantShared.Models.Packets.SongFinished.CompletionType type = 3;
  void clear_type();
  ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType type() const;
  void set_type(::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType value);
  private:
  ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType _internal_type() const;
  void _internal_set_type(::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType value);
  public:

  // int32 score = 4;
  void clear_score();
  ::PROTOBUF_NAMESPACE_ID::int32 score() const;
  void set_score(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_score() const;
  void _internal_set_score(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.SongFinished)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::TournamentAssistantShared::Models::Player* user_;
  ::TournamentAssistantShared::Models::Beatmap* beatmap_;
  int type_;
  ::PROTOBUF_NAMESPACE_ID::int32 score_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SongFinished

// .TournamentAssistantShared.Models.Player user = 1;
inline bool SongFinished::_internal_has_user() const {
  return this != internal_default_instance() && user_ != nullptr;
}
inline bool SongFinished::has_user() const {
  return _internal_has_user();
}
inline const ::TournamentAssistantShared::Models::Player& SongFinished::_internal_user() const {
  const ::TournamentAssistantShared::Models::Player* p = user_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::Player&>(
      ::TournamentAssistantShared::Models::_Player_default_instance_);
}
inline const ::TournamentAssistantShared::Models::Player& SongFinished::user() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.SongFinished.user)
  return _internal_user();
}
inline void SongFinished::unsafe_arena_set_allocated_user(
    ::TournamentAssistantShared::Models::Player* user) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(user_);
  }
  user_ = user;
  if (user) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.SongFinished.user)
}
inline ::TournamentAssistantShared::Models::Player* SongFinished::release_user() {
  
  ::TournamentAssistantShared::Models::Player* temp = user_;
  user_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::Player* SongFinished::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.SongFinished.user)
  
  ::TournamentAssistantShared::Models::Player* temp = user_;
  user_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::Player* SongFinished::_internal_mutable_user() {
  
  if (user_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::Player>(GetArena());
    user_ = p;
  }
  return user_;
}
inline ::TournamentAssistantShared::Models::Player* SongFinished::mutable_user() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.SongFinished.user)
  return _internal_mutable_user();
}
inline void SongFinished::set_allocated_user(::TournamentAssistantShared::Models::Player* user) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(user_);
  }
  if (user) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(user)->GetArena();
    if (message_arena != submessage_arena) {
      user = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    
  } else {
    
  }
  user_ = user;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.SongFinished.user)
}

// .TournamentAssistantShared.Models.Beatmap beatmap = 2;
inline bool SongFinished::_internal_has_beatmap() const {
  return this != internal_default_instance() && beatmap_ != nullptr;
}
inline bool SongFinished::has_beatmap() const {
  return _internal_has_beatmap();
}
inline const ::TournamentAssistantShared::Models::Beatmap& SongFinished::_internal_beatmap() const {
  const ::TournamentAssistantShared::Models::Beatmap* p = beatmap_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::Beatmap&>(
      ::TournamentAssistantShared::Models::_Beatmap_default_instance_);
}
inline const ::TournamentAssistantShared::Models::Beatmap& SongFinished::beatmap() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.SongFinished.beatmap)
  return _internal_beatmap();
}
inline void SongFinished::unsafe_arena_set_allocated_beatmap(
    ::TournamentAssistantShared::Models::Beatmap* beatmap) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(beatmap_);
  }
  beatmap_ = beatmap;
  if (beatmap) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.SongFinished.beatmap)
}
inline ::TournamentAssistantShared::Models::Beatmap* SongFinished::release_beatmap() {
  
  ::TournamentAssistantShared::Models::Beatmap* temp = beatmap_;
  beatmap_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::Beatmap* SongFinished::unsafe_arena_release_beatmap() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.SongFinished.beatmap)
  
  ::TournamentAssistantShared::Models::Beatmap* temp = beatmap_;
  beatmap_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::Beatmap* SongFinished::_internal_mutable_beatmap() {
  
  if (beatmap_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::Beatmap>(GetArena());
    beatmap_ = p;
  }
  return beatmap_;
}
inline ::TournamentAssistantShared::Models::Beatmap* SongFinished::mutable_beatmap() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.SongFinished.beatmap)
  return _internal_mutable_beatmap();
}
inline void SongFinished::set_allocated_beatmap(::TournamentAssistantShared::Models::Beatmap* beatmap) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(beatmap_);
  }
  if (beatmap) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(beatmap)->GetArena();
    if (message_arena != submessage_arena) {
      beatmap = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, beatmap, submessage_arena);
    }
    
  } else {
    
  }
  beatmap_ = beatmap;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.SongFinished.beatmap)
}

// .TournamentAssistantShared.Models.Packets.SongFinished.CompletionType type = 3;
inline void SongFinished::clear_type() {
  type_ = 0;
}
inline ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType SongFinished::_internal_type() const {
  return static_cast< ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType >(type_);
}
inline ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType SongFinished::type() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.SongFinished.type)
  return _internal_type();
}
inline void SongFinished::_internal_set_type(::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType value) {
  
  type_ = value;
}
inline void SongFinished::set_type(::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.SongFinished.type)
}

// int32 score = 4;
inline void SongFinished::clear_score() {
  score_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SongFinished::_internal_score() const {
  return score_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SongFinished::score() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.SongFinished.score)
  return _internal_score();
}
inline void SongFinished::_internal_set_score(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  score_ = value;
}
inline void SongFinished::set_score(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_score(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.SongFinished.score)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType>() {
  return ::TournamentAssistantShared::Models::Packets::SongFinished_CompletionType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fsong_5ffinished_2eproto
