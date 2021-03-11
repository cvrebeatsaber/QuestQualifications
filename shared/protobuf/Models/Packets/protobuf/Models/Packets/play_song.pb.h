// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/play_song.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto

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
#include "protobuf/Models/gameplay_parameters.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto;
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class PlaySong;
class PlaySongDefaultTypeInternal;
extern PlaySongDefaultTypeInternal _PlaySong_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::PlaySong* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::PlaySong>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class PlaySong PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.PlaySong) */ {
 public:
  inline PlaySong() : PlaySong(nullptr) {}
  virtual ~PlaySong();

  PlaySong(const PlaySong& from);
  PlaySong(PlaySong&& from) noexcept
    : PlaySong() {
    *this = ::std::move(from);
  }

  inline PlaySong& operator=(const PlaySong& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlaySong& operator=(PlaySong&& from) noexcept {
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
  static const PlaySong& default_instance();

  static inline const PlaySong* internal_default_instance() {
    return reinterpret_cast<const PlaySong*>(
               &_PlaySong_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PlaySong& a, PlaySong& b) {
    a.Swap(&b);
  }
  inline void Swap(PlaySong* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PlaySong* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlaySong* New() const final {
    return CreateMaybeMessage<PlaySong>(nullptr);
  }

  PlaySong* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlaySong>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlaySong& from);
  void MergeFrom(const PlaySong& from);
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
  void InternalSwap(PlaySong* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.PlaySong";
  }
  protected:
  explicit PlaySong(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto);
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGameplayParametersFieldNumber = 1,
    kFloatingScoreboardFieldNumber = 2,
    kStreamSyncFieldNumber = 3,
    kDisablePauseFieldNumber = 4,
    kDisableFailFieldNumber = 5,
    kDisableScoresaberSubmissionFieldNumber = 6,
    kShowNormalNotesOnStreamFieldNumber = 7,
  };
  // .TournamentAssistantShared.Models.GameplayParameters gameplay_parameters = 1;
  bool has_gameplay_parameters() const;
  private:
  bool _internal_has_gameplay_parameters() const;
  public:
  void clear_gameplay_parameters();
  const ::TournamentAssistantShared::Models::GameplayParameters& gameplay_parameters() const;
  ::TournamentAssistantShared::Models::GameplayParameters* release_gameplay_parameters();
  ::TournamentAssistantShared::Models::GameplayParameters* mutable_gameplay_parameters();
  void set_allocated_gameplay_parameters(::TournamentAssistantShared::Models::GameplayParameters* gameplay_parameters);
  private:
  const ::TournamentAssistantShared::Models::GameplayParameters& _internal_gameplay_parameters() const;
  ::TournamentAssistantShared::Models::GameplayParameters* _internal_mutable_gameplay_parameters();
  public:
  void unsafe_arena_set_allocated_gameplay_parameters(
      ::TournamentAssistantShared::Models::GameplayParameters* gameplay_parameters);
  ::TournamentAssistantShared::Models::GameplayParameters* unsafe_arena_release_gameplay_parameters();

  // bool floating_scoreboard = 2;
  void clear_floating_scoreboard();
  bool floating_scoreboard() const;
  void set_floating_scoreboard(bool value);
  private:
  bool _internal_floating_scoreboard() const;
  void _internal_set_floating_scoreboard(bool value);
  public:

  // bool stream_sync = 3;
  void clear_stream_sync();
  bool stream_sync() const;
  void set_stream_sync(bool value);
  private:
  bool _internal_stream_sync() const;
  void _internal_set_stream_sync(bool value);
  public:

  // bool disable_pause = 4;
  void clear_disable_pause();
  bool disable_pause() const;
  void set_disable_pause(bool value);
  private:
  bool _internal_disable_pause() const;
  void _internal_set_disable_pause(bool value);
  public:

  // bool disable_fail = 5;
  void clear_disable_fail();
  bool disable_fail() const;
  void set_disable_fail(bool value);
  private:
  bool _internal_disable_fail() const;
  void _internal_set_disable_fail(bool value);
  public:

  // bool disable_scoresaber_submission = 6;
  void clear_disable_scoresaber_submission();
  bool disable_scoresaber_submission() const;
  void set_disable_scoresaber_submission(bool value);
  private:
  bool _internal_disable_scoresaber_submission() const;
  void _internal_set_disable_scoresaber_submission(bool value);
  public:

  // bool show_normal_notes_on_stream = 7;
  void clear_show_normal_notes_on_stream();
  bool show_normal_notes_on_stream() const;
  void set_show_normal_notes_on_stream(bool value);
  private:
  bool _internal_show_normal_notes_on_stream() const;
  void _internal_set_show_normal_notes_on_stream(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.PlaySong)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::TournamentAssistantShared::Models::GameplayParameters* gameplay_parameters_;
  bool floating_scoreboard_;
  bool stream_sync_;
  bool disable_pause_;
  bool disable_fail_;
  bool disable_scoresaber_submission_;
  bool show_normal_notes_on_stream_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlaySong

// .TournamentAssistantShared.Models.GameplayParameters gameplay_parameters = 1;
inline bool PlaySong::_internal_has_gameplay_parameters() const {
  return this != internal_default_instance() && gameplay_parameters_ != nullptr;
}
inline bool PlaySong::has_gameplay_parameters() const {
  return _internal_has_gameplay_parameters();
}
inline const ::TournamentAssistantShared::Models::GameplayParameters& PlaySong::_internal_gameplay_parameters() const {
  const ::TournamentAssistantShared::Models::GameplayParameters* p = gameplay_parameters_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::GameplayParameters&>(
      ::TournamentAssistantShared::Models::_GameplayParameters_default_instance_);
}
inline const ::TournamentAssistantShared::Models::GameplayParameters& PlaySong::gameplay_parameters() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.gameplay_parameters)
  return _internal_gameplay_parameters();
}
inline void PlaySong::unsafe_arena_set_allocated_gameplay_parameters(
    ::TournamentAssistantShared::Models::GameplayParameters* gameplay_parameters) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(gameplay_parameters_);
  }
  gameplay_parameters_ = gameplay_parameters;
  if (gameplay_parameters) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.PlaySong.gameplay_parameters)
}
inline ::TournamentAssistantShared::Models::GameplayParameters* PlaySong::release_gameplay_parameters() {
  
  ::TournamentAssistantShared::Models::GameplayParameters* temp = gameplay_parameters_;
  gameplay_parameters_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* PlaySong::unsafe_arena_release_gameplay_parameters() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.PlaySong.gameplay_parameters)
  
  ::TournamentAssistantShared::Models::GameplayParameters* temp = gameplay_parameters_;
  gameplay_parameters_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* PlaySong::_internal_mutable_gameplay_parameters() {
  
  if (gameplay_parameters_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::GameplayParameters>(GetArena());
    gameplay_parameters_ = p;
  }
  return gameplay_parameters_;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* PlaySong::mutable_gameplay_parameters() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.PlaySong.gameplay_parameters)
  return _internal_mutable_gameplay_parameters();
}
inline void PlaySong::set_allocated_gameplay_parameters(::TournamentAssistantShared::Models::GameplayParameters* gameplay_parameters) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(gameplay_parameters_);
  }
  if (gameplay_parameters) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(gameplay_parameters)->GetArena();
    if (message_arena != submessage_arena) {
      gameplay_parameters = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, gameplay_parameters, submessage_arena);
    }
    
  } else {
    
  }
  gameplay_parameters_ = gameplay_parameters;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.PlaySong.gameplay_parameters)
}

// bool floating_scoreboard = 2;
inline void PlaySong::clear_floating_scoreboard() {
  floating_scoreboard_ = false;
}
inline bool PlaySong::_internal_floating_scoreboard() const {
  return floating_scoreboard_;
}
inline bool PlaySong::floating_scoreboard() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.floating_scoreboard)
  return _internal_floating_scoreboard();
}
inline void PlaySong::_internal_set_floating_scoreboard(bool value) {
  
  floating_scoreboard_ = value;
}
inline void PlaySong::set_floating_scoreboard(bool value) {
  _internal_set_floating_scoreboard(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.PlaySong.floating_scoreboard)
}

// bool stream_sync = 3;
inline void PlaySong::clear_stream_sync() {
  stream_sync_ = false;
}
inline bool PlaySong::_internal_stream_sync() const {
  return stream_sync_;
}
inline bool PlaySong::stream_sync() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.stream_sync)
  return _internal_stream_sync();
}
inline void PlaySong::_internal_set_stream_sync(bool value) {
  
  stream_sync_ = value;
}
inline void PlaySong::set_stream_sync(bool value) {
  _internal_set_stream_sync(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.PlaySong.stream_sync)
}

// bool disable_pause = 4;
inline void PlaySong::clear_disable_pause() {
  disable_pause_ = false;
}
inline bool PlaySong::_internal_disable_pause() const {
  return disable_pause_;
}
inline bool PlaySong::disable_pause() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.disable_pause)
  return _internal_disable_pause();
}
inline void PlaySong::_internal_set_disable_pause(bool value) {
  
  disable_pause_ = value;
}
inline void PlaySong::set_disable_pause(bool value) {
  _internal_set_disable_pause(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.PlaySong.disable_pause)
}

// bool disable_fail = 5;
inline void PlaySong::clear_disable_fail() {
  disable_fail_ = false;
}
inline bool PlaySong::_internal_disable_fail() const {
  return disable_fail_;
}
inline bool PlaySong::disable_fail() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.disable_fail)
  return _internal_disable_fail();
}
inline void PlaySong::_internal_set_disable_fail(bool value) {
  
  disable_fail_ = value;
}
inline void PlaySong::set_disable_fail(bool value) {
  _internal_set_disable_fail(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.PlaySong.disable_fail)
}

// bool disable_scoresaber_submission = 6;
inline void PlaySong::clear_disable_scoresaber_submission() {
  disable_scoresaber_submission_ = false;
}
inline bool PlaySong::_internal_disable_scoresaber_submission() const {
  return disable_scoresaber_submission_;
}
inline bool PlaySong::disable_scoresaber_submission() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.disable_scoresaber_submission)
  return _internal_disable_scoresaber_submission();
}
inline void PlaySong::_internal_set_disable_scoresaber_submission(bool value) {
  
  disable_scoresaber_submission_ = value;
}
inline void PlaySong::set_disable_scoresaber_submission(bool value) {
  _internal_set_disable_scoresaber_submission(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.PlaySong.disable_scoresaber_submission)
}

// bool show_normal_notes_on_stream = 7;
inline void PlaySong::clear_show_normal_notes_on_stream() {
  show_normal_notes_on_stream_ = false;
}
inline bool PlaySong::_internal_show_normal_notes_on_stream() const {
  return show_normal_notes_on_stream_;
}
inline bool PlaySong::show_normal_notes_on_stream() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.PlaySong.show_normal_notes_on_stream)
  return _internal_show_normal_notes_on_stream();
}
inline void PlaySong::_internal_set_show_normal_notes_on_stream(bool value) {
  
  show_normal_notes_on_stream_ = value;
}
inline void PlaySong::set_show_normal_notes_on_stream(bool value) {
  _internal_set_show_normal_notes_on_stream(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.PlaySong.show_normal_notes_on_stream)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fplay_5fsong_2eproto
