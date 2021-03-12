// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/score.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fscore_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fscore_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "protobuf/Models/gameplay_parameters.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fscore_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fscore_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fscore_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fscore_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
class Score;
struct ScoreDefaultTypeInternal;
extern ScoreDefaultTypeInternal _Score_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Score* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Score>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {

// ===================================================================

class Score PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Score) */ {
 public:
  inline Score() : Score(nullptr) {}
  virtual ~Score();
  explicit constexpr Score(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Score(const Score& from);
  Score(Score&& from) noexcept
    : Score() {
    *this = ::std::move(from);
  }

  inline Score& operator=(const Score& from) {
    CopyFrom(from);
    return *this;
  }
  inline Score& operator=(Score&& from) noexcept {
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
  static const Score& default_instance() {
    return *internal_default_instance();
  }
  static inline const Score* internal_default_instance() {
    return reinterpret_cast<const Score*>(
               &_Score_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Score& a, Score& b) {
    a.Swap(&b);
  }
  inline void Swap(Score* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Score* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Score* New() const final {
    return CreateMaybeMessage<Score>(nullptr);
  }

  Score* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Score>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Score& from);
  void MergeFrom(const Score& from);
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
  void InternalSwap(Score* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Score";
  }
  protected:
  explicit Score(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fscore_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEventIdFieldNumber = 1,
    kUserIdFieldNumber = 3,
    kUsernameFieldNumber = 4,
    kColorFieldNumber = 7,
    kParametersFieldNumber = 2,
    kScoreFieldNumber = 5,
    kFullComboFieldNumber = 6,
  };
  // string event_id = 1;
  void clear_event_id();
  const std::string& event_id() const;
  void set_event_id(const std::string& value);
  void set_event_id(std::string&& value);
  void set_event_id(const char* value);
  void set_event_id(const char* value, size_t size);
  std::string* mutable_event_id();
  std::string* release_event_id();
  void set_allocated_event_id(std::string* event_id);
  private:
  const std::string& _internal_event_id() const;
  void _internal_set_event_id(const std::string& value);
  std::string* _internal_mutable_event_id();
  public:

  // string user_id = 3;
  void clear_user_id();
  const std::string& user_id() const;
  void set_user_id(const std::string& value);
  void set_user_id(std::string&& value);
  void set_user_id(const char* value);
  void set_user_id(const char* value, size_t size);
  std::string* mutable_user_id();
  std::string* release_user_id();
  void set_allocated_user_id(std::string* user_id);
  private:
  const std::string& _internal_user_id() const;
  void _internal_set_user_id(const std::string& value);
  std::string* _internal_mutable_user_id();
  public:

  // string username = 4;
  void clear_username();
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // string color = 7;
  void clear_color();
  const std::string& color() const;
  void set_color(const std::string& value);
  void set_color(std::string&& value);
  void set_color(const char* value);
  void set_color(const char* value, size_t size);
  std::string* mutable_color();
  std::string* release_color();
  void set_allocated_color(std::string* color);
  private:
  const std::string& _internal_color() const;
  void _internal_set_color(const std::string& value);
  std::string* _internal_mutable_color();
  public:

  // .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
  bool has_parameters() const;
  private:
  bool _internal_has_parameters() const;
  public:
  void clear_parameters();
  const ::TournamentAssistantShared::Models::GameplayParameters& parameters() const;
  ::TournamentAssistantShared::Models::GameplayParameters* release_parameters();
  ::TournamentAssistantShared::Models::GameplayParameters* mutable_parameters();
  void set_allocated_parameters(::TournamentAssistantShared::Models::GameplayParameters* parameters);
  private:
  const ::TournamentAssistantShared::Models::GameplayParameters& _internal_parameters() const;
  ::TournamentAssistantShared::Models::GameplayParameters* _internal_mutable_parameters();
  public:
  void unsafe_arena_set_allocated_parameters(
      ::TournamentAssistantShared::Models::GameplayParameters* parameters);
  ::TournamentAssistantShared::Models::GameplayParameters* unsafe_arena_release_parameters();

  // int32 score = 5;
  void clear_score();
  ::PROTOBUF_NAMESPACE_ID::int32 score() const;
  void set_score(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_score() const;
  void _internal_set_score(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool full_combo = 6;
  void clear_full_combo();
  bool full_combo() const;
  void set_full_combo(bool value);
  private:
  bool _internal_full_combo() const;
  void _internal_set_full_combo(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Score)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr event_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr color_;
  ::TournamentAssistantShared::Models::GameplayParameters* parameters_;
  ::PROTOBUF_NAMESPACE_ID::int32 score_;
  bool full_combo_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fscore_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Score

// string event_id = 1;
inline void Score::clear_event_id() {
  event_id_.ClearToEmpty();
}
inline const std::string& Score::event_id() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.event_id)
  return _internal_event_id();
}
inline void Score::set_event_id(const std::string& value) {
  _internal_set_event_id(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Score.event_id)
}
inline std::string* Score::mutable_event_id() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Score.event_id)
  return _internal_mutable_event_id();
}
inline const std::string& Score::_internal_event_id() const {
  return event_id_.Get();
}
inline void Score::_internal_set_event_id(const std::string& value) {
  
  event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Score::set_event_id(std::string&& value) {
  
  event_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Score.event_id)
}
inline void Score::set_event_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Score.event_id)
}
inline void Score::set_event_id(const char* value,
    size_t size) {
  
  event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Score.event_id)
}
inline std::string* Score::_internal_mutable_event_id() {
  
  return event_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Score::release_event_id() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Score.event_id)
  return event_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Score::set_allocated_event_id(std::string* event_id) {
  if (event_id != nullptr) {
    
  } else {
    
  }
  event_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), event_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Score.event_id)
}

// .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
inline bool Score::_internal_has_parameters() const {
  return this != internal_default_instance() && parameters_ != nullptr;
}
inline bool Score::has_parameters() const {
  return _internal_has_parameters();
}
inline const ::TournamentAssistantShared::Models::GameplayParameters& Score::_internal_parameters() const {
  const ::TournamentAssistantShared::Models::GameplayParameters* p = parameters_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::GameplayParameters&>(
      ::TournamentAssistantShared::Models::_GameplayParameters_default_instance_);
}
inline const ::TournamentAssistantShared::Models::GameplayParameters& Score::parameters() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.parameters)
  return _internal_parameters();
}
inline void Score::unsafe_arena_set_allocated_parameters(
    ::TournamentAssistantShared::Models::GameplayParameters* parameters) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(parameters_);
  }
  parameters_ = parameters;
  if (parameters) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Score.parameters)
}
inline ::TournamentAssistantShared::Models::GameplayParameters* Score::release_parameters() {
  
  ::TournamentAssistantShared::Models::GameplayParameters* temp = parameters_;
  parameters_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* Score::unsafe_arena_release_parameters() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Score.parameters)
  
  ::TournamentAssistantShared::Models::GameplayParameters* temp = parameters_;
  parameters_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* Score::_internal_mutable_parameters() {
  
  if (parameters_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::GameplayParameters>(GetArena());
    parameters_ = p;
  }
  return parameters_;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* Score::mutable_parameters() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Score.parameters)
  return _internal_mutable_parameters();
}
inline void Score::set_allocated_parameters(::TournamentAssistantShared::Models::GameplayParameters* parameters) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(parameters_);
  }
  if (parameters) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(parameters)->GetArena();
    if (message_arena != submessage_arena) {
      parameters = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, parameters, submessage_arena);
    }
    
  } else {
    
  }
  parameters_ = parameters;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Score.parameters)
}

// string user_id = 3;
inline void Score::clear_user_id() {
  user_id_.ClearToEmpty();
}
inline const std::string& Score::user_id() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.user_id)
  return _internal_user_id();
}
inline void Score::set_user_id(const std::string& value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Score.user_id)
}
inline std::string* Score::mutable_user_id() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Score.user_id)
  return _internal_mutable_user_id();
}
inline const std::string& Score::_internal_user_id() const {
  return user_id_.Get();
}
inline void Score::_internal_set_user_id(const std::string& value) {
  
  user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Score::set_user_id(std::string&& value) {
  
  user_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Score.user_id)
}
inline void Score::set_user_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Score.user_id)
}
inline void Score::set_user_id(const char* value,
    size_t size) {
  
  user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Score.user_id)
}
inline std::string* Score::_internal_mutable_user_id() {
  
  return user_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Score::release_user_id() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Score.user_id)
  return user_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Score::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Score.user_id)
}

// string username = 4;
inline void Score::clear_username() {
  username_.ClearToEmpty();
}
inline const std::string& Score::username() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.username)
  return _internal_username();
}
inline void Score::set_username(const std::string& value) {
  _internal_set_username(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Score.username)
}
inline std::string* Score::mutable_username() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Score.username)
  return _internal_mutable_username();
}
inline const std::string& Score::_internal_username() const {
  return username_.Get();
}
inline void Score::_internal_set_username(const std::string& value) {
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Score::set_username(std::string&& value) {
  
  username_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Score.username)
}
inline void Score::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Score.username)
}
inline void Score::set_username(const char* value,
    size_t size) {
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Score.username)
}
inline std::string* Score::_internal_mutable_username() {
  
  return username_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Score::release_username() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Score.username)
  return username_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Score::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Score.username)
}

// int32 score = 5;
inline void Score::clear_score() {
  score_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Score::_internal_score() const {
  return score_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Score::score() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.score)
  return _internal_score();
}
inline void Score::_internal_set_score(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  score_ = value;
}
inline void Score::set_score(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_score(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Score.score)
}

// bool full_combo = 6;
inline void Score::clear_full_combo() {
  full_combo_ = false;
}
inline bool Score::_internal_full_combo() const {
  return full_combo_;
}
inline bool Score::full_combo() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.full_combo)
  return _internal_full_combo();
}
inline void Score::_internal_set_full_combo(bool value) {
  
  full_combo_ = value;
}
inline void Score::set_full_combo(bool value) {
  _internal_set_full_combo(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Score.full_combo)
}

// string color = 7;
inline void Score::clear_color() {
  color_.ClearToEmpty();
}
inline const std::string& Score::color() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Score.color)
  return _internal_color();
}
inline void Score::set_color(const std::string& value) {
  _internal_set_color(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Score.color)
}
inline std::string* Score::mutable_color() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Score.color)
  return _internal_mutable_color();
}
inline const std::string& Score::_internal_color() const {
  return color_.Get();
}
inline void Score::_internal_set_color(const std::string& value) {
  
  color_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Score::set_color(std::string&& value) {
  
  color_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Score.color)
}
inline void Score::set_color(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  color_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Score.color)
}
inline void Score::set_color(const char* value,
    size_t size) {
  
  color_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Score.color)
}
inline std::string* Score::_internal_mutable_color() {
  
  return color_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Score::release_color() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Score.color)
  return color_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Score::set_allocated_color(std::string* color) {
  if (color != nullptr) {
    
  } else {
    
  }
  color_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), color,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Score.color)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace TournamentAssistantShared

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fscore_2eproto
