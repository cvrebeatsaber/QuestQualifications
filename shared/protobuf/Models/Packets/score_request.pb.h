// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/score_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class ScoreRequest;
struct ScoreRequestDefaultTypeInternal;
extern ScoreRequestDefaultTypeInternal _ScoreRequest_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::ScoreRequest* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::ScoreRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class ScoreRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.ScoreRequest) */ {
 public:
  inline ScoreRequest() : ScoreRequest(nullptr) {}
  virtual ~ScoreRequest();
  explicit constexpr ScoreRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ScoreRequest(const ScoreRequest& from);
  ScoreRequest(ScoreRequest&& from) noexcept
    : ScoreRequest() {
    *this = ::std::move(from);
  }

  inline ScoreRequest& operator=(const ScoreRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScoreRequest& operator=(ScoreRequest&& from) noexcept {
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
  static const ScoreRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ScoreRequest* internal_default_instance() {
    return reinterpret_cast<const ScoreRequest*>(
               &_ScoreRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ScoreRequest& a, ScoreRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ScoreRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ScoreRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ScoreRequest* New() const final {
    return CreateMaybeMessage<ScoreRequest>(nullptr);
  }

  ScoreRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ScoreRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ScoreRequest& from);
  void MergeFrom(const ScoreRequest& from);
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
  void InternalSwap(ScoreRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.ScoreRequest";
  }
  protected:
  explicit ScoreRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEventIdFieldNumber = 1,
    kParametersFieldNumber = 2,
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

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.ScoreRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr event_id_;
  ::TournamentAssistantShared::Models::GameplayParameters* parameters_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScoreRequest

// string event_id = 1;
inline void ScoreRequest::clear_event_id() {
  event_id_.ClearToEmpty();
}
inline const std::string& ScoreRequest::event_id() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
  return _internal_event_id();
}
inline void ScoreRequest::set_event_id(const std::string& value) {
  _internal_set_event_id(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
}
inline std::string* ScoreRequest::mutable_event_id() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
  return _internal_mutable_event_id();
}
inline const std::string& ScoreRequest::_internal_event_id() const {
  return event_id_.Get();
}
inline void ScoreRequest::_internal_set_event_id(const std::string& value) {
  
  event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ScoreRequest::set_event_id(std::string&& value) {
  
  event_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
}
inline void ScoreRequest::set_event_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
}
inline void ScoreRequest::set_event_id(const char* value,
    size_t size) {
  
  event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
}
inline std::string* ScoreRequest::_internal_mutable_event_id() {
  
  return event_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ScoreRequest::release_event_id() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
  return event_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ScoreRequest::set_allocated_event_id(std::string* event_id) {
  if (event_id != nullptr) {
    
  } else {
    
  }
  event_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), event_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.ScoreRequest.event_id)
}

// .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
inline bool ScoreRequest::_internal_has_parameters() const {
  return this != internal_default_instance() && parameters_ != nullptr;
}
inline bool ScoreRequest::has_parameters() const {
  return _internal_has_parameters();
}
inline const ::TournamentAssistantShared::Models::GameplayParameters& ScoreRequest::_internal_parameters() const {
  const ::TournamentAssistantShared::Models::GameplayParameters* p = parameters_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::GameplayParameters&>(
      ::TournamentAssistantShared::Models::_GameplayParameters_default_instance_);
}
inline const ::TournamentAssistantShared::Models::GameplayParameters& ScoreRequest::parameters() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ScoreRequest.parameters)
  return _internal_parameters();
}
inline void ScoreRequest::unsafe_arena_set_allocated_parameters(
    ::TournamentAssistantShared::Models::GameplayParameters* parameters) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(parameters_);
  }
  parameters_ = parameters;
  if (parameters) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.ScoreRequest.parameters)
}
inline ::TournamentAssistantShared::Models::GameplayParameters* ScoreRequest::release_parameters() {
  
  ::TournamentAssistantShared::Models::GameplayParameters* temp = parameters_;
  parameters_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* ScoreRequest::unsafe_arena_release_parameters() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ScoreRequest.parameters)
  
  ::TournamentAssistantShared::Models::GameplayParameters* temp = parameters_;
  parameters_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* ScoreRequest::_internal_mutable_parameters() {
  
  if (parameters_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::GameplayParameters>(GetArena());
    parameters_ = p;
  }
  return parameters_;
}
inline ::TournamentAssistantShared::Models::GameplayParameters* ScoreRequest::mutable_parameters() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ScoreRequest.parameters)
  return _internal_mutable_parameters();
}
inline void ScoreRequest::set_allocated_parameters(::TournamentAssistantShared::Models::GameplayParameters* parameters) {
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
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.ScoreRequest.parameters)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto
