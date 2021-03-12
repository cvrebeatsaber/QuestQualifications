// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/connect_response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto

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
#include "protobuf/Models/Packets/response.pb.h"
#include "protobuf/Models/coordinator.pb.h"
#include "protobuf/Models/player.pb.h"
#include "protobuf/Models/state.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class ConnectResponse;
struct ConnectResponseDefaultTypeInternal;
extern ConnectResponseDefaultTypeInternal _ConnectResponse_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::ConnectResponse* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::ConnectResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class ConnectResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.ConnectResponse) */ {
 public:
  inline ConnectResponse() : ConnectResponse(nullptr) {}
  virtual ~ConnectResponse();
  explicit constexpr ConnectResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConnectResponse(const ConnectResponse& from);
  ConnectResponse(ConnectResponse&& from) noexcept
    : ConnectResponse() {
    *this = ::std::move(from);
  }

  inline ConnectResponse& operator=(const ConnectResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConnectResponse& operator=(ConnectResponse&& from) noexcept {
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
  static const ConnectResponse& default_instance() {
    return *internal_default_instance();
  }
  enum UserCase {
    kCoordinator = 2,
    kPlayer = 3,
    USER_NOT_SET = 0,
  };

  static inline const ConnectResponse* internal_default_instance() {
    return reinterpret_cast<const ConnectResponse*>(
               &_ConnectResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConnectResponse& a, ConnectResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ConnectResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConnectResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConnectResponse* New() const final {
    return CreateMaybeMessage<ConnectResponse>(nullptr);
  }

  ConnectResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConnectResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ConnectResponse& from);
  void MergeFrom(const ConnectResponse& from);
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
  void InternalSwap(ConnectResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.ConnectResponse";
  }
  protected:
  explicit ConnectResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseFieldNumber = 1,
    kStateFieldNumber = 4,
    kServerVersionFieldNumber = 5,
    kCoordinatorFieldNumber = 2,
    kPlayerFieldNumber = 3,
  };
  // .TournamentAssistantShared.Models.Packets.Response response = 1;
  bool has_response() const;
  private:
  bool _internal_has_response() const;
  public:
  void clear_response();
  const ::TournamentAssistantShared::Models::Packets::Response& response() const;
  ::TournamentAssistantShared::Models::Packets::Response* release_response();
  ::TournamentAssistantShared::Models::Packets::Response* mutable_response();
  void set_allocated_response(::TournamentAssistantShared::Models::Packets::Response* response);
  private:
  const ::TournamentAssistantShared::Models::Packets::Response& _internal_response() const;
  ::TournamentAssistantShared::Models::Packets::Response* _internal_mutable_response();
  public:
  void unsafe_arena_set_allocated_response(
      ::TournamentAssistantShared::Models::Packets::Response* response);
  ::TournamentAssistantShared::Models::Packets::Response* unsafe_arena_release_response();

  // .TournamentAssistantShared.Models.State state = 4;
  bool has_state() const;
  private:
  bool _internal_has_state() const;
  public:
  void clear_state();
  const ::TournamentAssistantShared::Models::State& state() const;
  ::TournamentAssistantShared::Models::State* release_state();
  ::TournamentAssistantShared::Models::State* mutable_state();
  void set_allocated_state(::TournamentAssistantShared::Models::State* state);
  private:
  const ::TournamentAssistantShared::Models::State& _internal_state() const;
  ::TournamentAssistantShared::Models::State* _internal_mutable_state();
  public:
  void unsafe_arena_set_allocated_state(
      ::TournamentAssistantShared::Models::State* state);
  ::TournamentAssistantShared::Models::State* unsafe_arena_release_state();

  // int32 server_version = 5;
  void clear_server_version();
  ::PROTOBUF_NAMESPACE_ID::int32 server_version() const;
  void set_server_version(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_server_version() const;
  void _internal_set_server_version(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // .TournamentAssistantShared.Models.Coordinator coordinator = 2;
  bool has_coordinator() const;
  private:
  bool _internal_has_coordinator() const;
  public:
  void clear_coordinator();
  const ::TournamentAssistantShared::Models::Coordinator& coordinator() const;
  ::TournamentAssistantShared::Models::Coordinator* release_coordinator();
  ::TournamentAssistantShared::Models::Coordinator* mutable_coordinator();
  void set_allocated_coordinator(::TournamentAssistantShared::Models::Coordinator* coordinator);
  private:
  const ::TournamentAssistantShared::Models::Coordinator& _internal_coordinator() const;
  ::TournamentAssistantShared::Models::Coordinator* _internal_mutable_coordinator();
  public:
  void unsafe_arena_set_allocated_coordinator(
      ::TournamentAssistantShared::Models::Coordinator* coordinator);
  ::TournamentAssistantShared::Models::Coordinator* unsafe_arena_release_coordinator();

  // .TournamentAssistantShared.Models.Player player = 3;
  bool has_player() const;
  private:
  bool _internal_has_player() const;
  public:
  void clear_player();
  const ::TournamentAssistantShared::Models::Player& player() const;
  ::TournamentAssistantShared::Models::Player* release_player();
  ::TournamentAssistantShared::Models::Player* mutable_player();
  void set_allocated_player(::TournamentAssistantShared::Models::Player* player);
  private:
  const ::TournamentAssistantShared::Models::Player& _internal_player() const;
  ::TournamentAssistantShared::Models::Player* _internal_mutable_player();
  public:
  void unsafe_arena_set_allocated_player(
      ::TournamentAssistantShared::Models::Player* player);
  ::TournamentAssistantShared::Models::Player* unsafe_arena_release_player();

  void clear_user();
  UserCase user_case() const;
  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.ConnectResponse)
 private:
  class _Internal;
  void set_has_coordinator();
  void set_has_player();

  inline bool has_user() const;
  inline void clear_has_user();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::TournamentAssistantShared::Models::Packets::Response* response_;
  ::TournamentAssistantShared::Models::State* state_;
  ::PROTOBUF_NAMESPACE_ID::int32 server_version_;
  union UserUnion {
    constexpr UserUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::TournamentAssistantShared::Models::Coordinator* coordinator_;
    ::TournamentAssistantShared::Models::Player* player_;
  } user_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConnectResponse

// .TournamentAssistantShared.Models.Packets.Response response = 1;
inline bool ConnectResponse::_internal_has_response() const {
  return this != internal_default_instance() && response_ != nullptr;
}
inline bool ConnectResponse::has_response() const {
  return _internal_has_response();
}
inline const ::TournamentAssistantShared::Models::Packets::Response& ConnectResponse::_internal_response() const {
  const ::TournamentAssistantShared::Models::Packets::Response* p = response_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::Packets::Response&>(
      ::TournamentAssistantShared::Models::Packets::_Response_default_instance_);
}
inline const ::TournamentAssistantShared::Models::Packets::Response& ConnectResponse::response() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ConnectResponse.response)
  return _internal_response();
}
inline void ConnectResponse::unsafe_arena_set_allocated_response(
    ::TournamentAssistantShared::Models::Packets::Response* response) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(response_);
  }
  response_ = response;
  if (response) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.ConnectResponse.response)
}
inline ::TournamentAssistantShared::Models::Packets::Response* ConnectResponse::release_response() {
  
  ::TournamentAssistantShared::Models::Packets::Response* temp = response_;
  response_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::Packets::Response* ConnectResponse::unsafe_arena_release_response() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ConnectResponse.response)
  
  ::TournamentAssistantShared::Models::Packets::Response* temp = response_;
  response_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::Packets::Response* ConnectResponse::_internal_mutable_response() {
  
  if (response_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::Response>(GetArena());
    response_ = p;
  }
  return response_;
}
inline ::TournamentAssistantShared::Models::Packets::Response* ConnectResponse::mutable_response() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ConnectResponse.response)
  return _internal_mutable_response();
}
inline void ConnectResponse::set_allocated_response(::TournamentAssistantShared::Models::Packets::Response* response) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(response_);
  }
  if (response) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(response)->GetArena();
    if (message_arena != submessage_arena) {
      response = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, response, submessage_arena);
    }
    
  } else {
    
  }
  response_ = response;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.ConnectResponse.response)
}

// .TournamentAssistantShared.Models.Coordinator coordinator = 2;
inline bool ConnectResponse::_internal_has_coordinator() const {
  return user_case() == kCoordinator;
}
inline bool ConnectResponse::has_coordinator() const {
  return _internal_has_coordinator();
}
inline void ConnectResponse::set_has_coordinator() {
  _oneof_case_[0] = kCoordinator;
}
inline ::TournamentAssistantShared::Models::Coordinator* ConnectResponse::release_coordinator() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ConnectResponse.coordinator)
  if (_internal_has_coordinator()) {
    clear_has_user();
      ::TournamentAssistantShared::Models::Coordinator* temp = user_.coordinator_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    user_.coordinator_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::TournamentAssistantShared::Models::Coordinator& ConnectResponse::_internal_coordinator() const {
  return _internal_has_coordinator()
      ? *user_.coordinator_
      : reinterpret_cast< ::TournamentAssistantShared::Models::Coordinator&>(::TournamentAssistantShared::Models::_Coordinator_default_instance_);
}
inline const ::TournamentAssistantShared::Models::Coordinator& ConnectResponse::coordinator() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ConnectResponse.coordinator)
  return _internal_coordinator();
}
inline ::TournamentAssistantShared::Models::Coordinator* ConnectResponse::unsafe_arena_release_coordinator() {
  // @@protoc_insertion_point(field_unsafe_arena_release:TournamentAssistantShared.Models.Packets.ConnectResponse.coordinator)
  if (_internal_has_coordinator()) {
    clear_has_user();
    ::TournamentAssistantShared::Models::Coordinator* temp = user_.coordinator_;
    user_.coordinator_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void ConnectResponse::unsafe_arena_set_allocated_coordinator(::TournamentAssistantShared::Models::Coordinator* coordinator) {
  clear_user();
  if (coordinator) {
    set_has_coordinator();
    user_.coordinator_ = coordinator;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.ConnectResponse.coordinator)
}
inline ::TournamentAssistantShared::Models::Coordinator* ConnectResponse::_internal_mutable_coordinator() {
  if (!_internal_has_coordinator()) {
    clear_user();
    set_has_coordinator();
    user_.coordinator_ = CreateMaybeMessage< ::TournamentAssistantShared::Models::Coordinator >(GetArena());
  }
  return user_.coordinator_;
}
inline ::TournamentAssistantShared::Models::Coordinator* ConnectResponse::mutable_coordinator() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ConnectResponse.coordinator)
  return _internal_mutable_coordinator();
}

// .TournamentAssistantShared.Models.Player player = 3;
inline bool ConnectResponse::_internal_has_player() const {
  return user_case() == kPlayer;
}
inline bool ConnectResponse::has_player() const {
  return _internal_has_player();
}
inline void ConnectResponse::set_has_player() {
  _oneof_case_[0] = kPlayer;
}
inline ::TournamentAssistantShared::Models::Player* ConnectResponse::release_player() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ConnectResponse.player)
  if (_internal_has_player()) {
    clear_has_user();
      ::TournamentAssistantShared::Models::Player* temp = user_.player_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    user_.player_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::TournamentAssistantShared::Models::Player& ConnectResponse::_internal_player() const {
  return _internal_has_player()
      ? *user_.player_
      : reinterpret_cast< ::TournamentAssistantShared::Models::Player&>(::TournamentAssistantShared::Models::_Player_default_instance_);
}
inline const ::TournamentAssistantShared::Models::Player& ConnectResponse::player() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ConnectResponse.player)
  return _internal_player();
}
inline ::TournamentAssistantShared::Models::Player* ConnectResponse::unsafe_arena_release_player() {
  // @@protoc_insertion_point(field_unsafe_arena_release:TournamentAssistantShared.Models.Packets.ConnectResponse.player)
  if (_internal_has_player()) {
    clear_has_user();
    ::TournamentAssistantShared::Models::Player* temp = user_.player_;
    user_.player_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void ConnectResponse::unsafe_arena_set_allocated_player(::TournamentAssistantShared::Models::Player* player) {
  clear_user();
  if (player) {
    set_has_player();
    user_.player_ = player;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.ConnectResponse.player)
}
inline ::TournamentAssistantShared::Models::Player* ConnectResponse::_internal_mutable_player() {
  if (!_internal_has_player()) {
    clear_user();
    set_has_player();
    user_.player_ = CreateMaybeMessage< ::TournamentAssistantShared::Models::Player >(GetArena());
  }
  return user_.player_;
}
inline ::TournamentAssistantShared::Models::Player* ConnectResponse::mutable_player() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ConnectResponse.player)
  return _internal_mutable_player();
}

// .TournamentAssistantShared.Models.State state = 4;
inline bool ConnectResponse::_internal_has_state() const {
  return this != internal_default_instance() && state_ != nullptr;
}
inline bool ConnectResponse::has_state() const {
  return _internal_has_state();
}
inline const ::TournamentAssistantShared::Models::State& ConnectResponse::_internal_state() const {
  const ::TournamentAssistantShared::Models::State* p = state_;
  return p != nullptr ? *p : reinterpret_cast<const ::TournamentAssistantShared::Models::State&>(
      ::TournamentAssistantShared::Models::_State_default_instance_);
}
inline const ::TournamentAssistantShared::Models::State& ConnectResponse::state() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ConnectResponse.state)
  return _internal_state();
}
inline void ConnectResponse::unsafe_arena_set_allocated_state(
    ::TournamentAssistantShared::Models::State* state) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(state_);
  }
  state_ = state;
  if (state) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.ConnectResponse.state)
}
inline ::TournamentAssistantShared::Models::State* ConnectResponse::release_state() {
  
  ::TournamentAssistantShared::Models::State* temp = state_;
  state_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::TournamentAssistantShared::Models::State* ConnectResponse::unsafe_arena_release_state() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ConnectResponse.state)
  
  ::TournamentAssistantShared::Models::State* temp = state_;
  state_ = nullptr;
  return temp;
}
inline ::TournamentAssistantShared::Models::State* ConnectResponse::_internal_mutable_state() {
  
  if (state_ == nullptr) {
    auto* p = CreateMaybeMessage<::TournamentAssistantShared::Models::State>(GetArena());
    state_ = p;
  }
  return state_;
}
inline ::TournamentAssistantShared::Models::State* ConnectResponse::mutable_state() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ConnectResponse.state)
  return _internal_mutable_state();
}
inline void ConnectResponse::set_allocated_state(::TournamentAssistantShared::Models::State* state) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(state_);
  }
  if (state) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(state)->GetArena();
    if (message_arena != submessage_arena) {
      state = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, state, submessage_arena);
    }
    
  } else {
    
  }
  state_ = state;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.ConnectResponse.state)
}

// int32 server_version = 5;
inline void ConnectResponse::clear_server_version() {
  server_version_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectResponse::_internal_server_version() const {
  return server_version_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectResponse::server_version() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ConnectResponse.server_version)
  return _internal_server_version();
}
inline void ConnectResponse::_internal_set_server_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  server_version_ = value;
}
inline void ConnectResponse::set_server_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_server_version(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.ConnectResponse.server_version)
}

inline bool ConnectResponse::has_user() const {
  return user_case() != USER_NOT_SET;
}
inline void ConnectResponse::clear_has_user() {
  _oneof_case_[0] = USER_NOT_SET;
}
inline ConnectResponse::UserCase ConnectResponse::user_case() const {
  return ConnectResponse::UserCase(_oneof_case_[0]);
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fconnect_5fresponse_2eproto
