// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/forwarding_packet.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto

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
#include "protobuf/Models/packet_type.pb.h"
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class ForwardingPacket;
struct ForwardingPacketDefaultTypeInternal;
extern ForwardingPacketDefaultTypeInternal _ForwardingPacket_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::ForwardingPacket* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::ForwardingPacket>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class ForwardingPacket PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.ForwardingPacket) */ {
 public:
  inline ForwardingPacket() : ForwardingPacket(nullptr) {}
  virtual ~ForwardingPacket();
  explicit constexpr ForwardingPacket(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ForwardingPacket(const ForwardingPacket& from);
  ForwardingPacket(ForwardingPacket&& from) noexcept
    : ForwardingPacket() {
    *this = ::std::move(from);
  }

  inline ForwardingPacket& operator=(const ForwardingPacket& from) {
    CopyFrom(from);
    return *this;
  }
  inline ForwardingPacket& operator=(ForwardingPacket&& from) noexcept {
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
  static const ForwardingPacket& default_instance() {
    return *internal_default_instance();
  }
  static inline const ForwardingPacket* internal_default_instance() {
    return reinterpret_cast<const ForwardingPacket*>(
               &_ForwardingPacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ForwardingPacket& a, ForwardingPacket& b) {
    a.Swap(&b);
  }
  inline void Swap(ForwardingPacket* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ForwardingPacket* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ForwardingPacket* New() const final {
    return CreateMaybeMessage<ForwardingPacket>(nullptr);
  }

  ForwardingPacket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ForwardingPacket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ForwardingPacket& from);
  void MergeFrom(const ForwardingPacket& from);
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
  void InternalSwap(ForwardingPacket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.ForwardingPacket";
  }
  protected:
  explicit ForwardingPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kForwardToFieldNumber = 1,
    kSpecificPacketFieldNumber = 3,
    kTypeFieldNumber = 2,
  };
  // repeated string forward_to = 1;
  int forward_to_size() const;
  private:
  int _internal_forward_to_size() const;
  public:
  void clear_forward_to();
  const std::string& forward_to(int index) const;
  std::string* mutable_forward_to(int index);
  void set_forward_to(int index, const std::string& value);
  void set_forward_to(int index, std::string&& value);
  void set_forward_to(int index, const char* value);
  void set_forward_to(int index, const char* value, size_t size);
  std::string* add_forward_to();
  void add_forward_to(const std::string& value);
  void add_forward_to(std::string&& value);
  void add_forward_to(const char* value);
  void add_forward_to(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& forward_to() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_forward_to();
  private:
  const std::string& _internal_forward_to(int index) const;
  std::string* _internal_add_forward_to();
  public:

  // .google.protobuf.Any specific_packet = 3;
  bool has_specific_packet() const;
  private:
  bool _internal_has_specific_packet() const;
  public:
  void clear_specific_packet();
  const PROTOBUF_NAMESPACE_ID::Any& specific_packet() const;
  PROTOBUF_NAMESPACE_ID::Any* release_specific_packet();
  PROTOBUF_NAMESPACE_ID::Any* mutable_specific_packet();
  void set_allocated_specific_packet(PROTOBUF_NAMESPACE_ID::Any* specific_packet);
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_specific_packet() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_specific_packet();
  public:
  void unsafe_arena_set_allocated_specific_packet(
      PROTOBUF_NAMESPACE_ID::Any* specific_packet);
  PROTOBUF_NAMESPACE_ID::Any* unsafe_arena_release_specific_packet();

  // .TournamentAssistantShared.Models.PacketType type = 2;
  void clear_type();
  ::TournamentAssistantShared::Models::PacketType type() const;
  void set_type(::TournamentAssistantShared::Models::PacketType value);
  private:
  ::TournamentAssistantShared::Models::PacketType _internal_type() const;
  void _internal_set_type(::TournamentAssistantShared::Models::PacketType value);
  public:

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.ForwardingPacket)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> forward_to_;
  PROTOBUF_NAMESPACE_ID::Any* specific_packet_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ForwardingPacket

// repeated string forward_to = 1;
inline int ForwardingPacket::_internal_forward_to_size() const {
  return forward_to_.size();
}
inline int ForwardingPacket::forward_to_size() const {
  return _internal_forward_to_size();
}
inline void ForwardingPacket::clear_forward_to() {
  forward_to_.Clear();
}
inline std::string* ForwardingPacket::add_forward_to() {
  // @@protoc_insertion_point(field_add_mutable:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  return _internal_add_forward_to();
}
inline const std::string& ForwardingPacket::_internal_forward_to(int index) const {
  return forward_to_.Get(index);
}
inline const std::string& ForwardingPacket::forward_to(int index) const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  return _internal_forward_to(index);
}
inline std::string* ForwardingPacket::mutable_forward_to(int index) {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  return forward_to_.Mutable(index);
}
inline void ForwardingPacket::set_forward_to(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  forward_to_.Mutable(index)->assign(value);
}
inline void ForwardingPacket::set_forward_to(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  forward_to_.Mutable(index)->assign(std::move(value));
}
inline void ForwardingPacket::set_forward_to(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  forward_to_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
}
inline void ForwardingPacket::set_forward_to(int index, const char* value, size_t size) {
  forward_to_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
}
inline std::string* ForwardingPacket::_internal_add_forward_to() {
  return forward_to_.Add();
}
inline void ForwardingPacket::add_forward_to(const std::string& value) {
  forward_to_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
}
inline void ForwardingPacket::add_forward_to(std::string&& value) {
  forward_to_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
}
inline void ForwardingPacket::add_forward_to(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  forward_to_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
}
inline void ForwardingPacket::add_forward_to(const char* value, size_t size) {
  forward_to_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ForwardingPacket::forward_to() const {
  // @@protoc_insertion_point(field_list:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  return forward_to_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ForwardingPacket::mutable_forward_to() {
  // @@protoc_insertion_point(field_mutable_list:TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to)
  return &forward_to_;
}

// .TournamentAssistantShared.Models.PacketType type = 2;
inline void ForwardingPacket::clear_type() {
  type_ = 0;
}
inline ::TournamentAssistantShared::Models::PacketType ForwardingPacket::_internal_type() const {
  return static_cast< ::TournamentAssistantShared::Models::PacketType >(type_);
}
inline ::TournamentAssistantShared::Models::PacketType ForwardingPacket::type() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ForwardingPacket.type)
  return _internal_type();
}
inline void ForwardingPacket::_internal_set_type(::TournamentAssistantShared::Models::PacketType value) {
  
  type_ = value;
}
inline void ForwardingPacket::set_type(::TournamentAssistantShared::Models::PacketType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:TournamentAssistantShared.Models.Packets.ForwardingPacket.type)
}

// .google.protobuf.Any specific_packet = 3;
inline bool ForwardingPacket::_internal_has_specific_packet() const {
  return this != internal_default_instance() && specific_packet_ != nullptr;
}
inline bool ForwardingPacket::has_specific_packet() const {
  return _internal_has_specific_packet();
}
inline const PROTOBUF_NAMESPACE_ID::Any& ForwardingPacket::_internal_specific_packet() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = specific_packet_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any&>(
      PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& ForwardingPacket::specific_packet() const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ForwardingPacket.specific_packet)
  return _internal_specific_packet();
}
inline void ForwardingPacket::unsafe_arena_set_allocated_specific_packet(
    PROTOBUF_NAMESPACE_ID::Any* specific_packet) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(specific_packet_);
  }
  specific_packet_ = specific_packet;
  if (specific_packet) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:TournamentAssistantShared.Models.Packets.ForwardingPacket.specific_packet)
}
inline PROTOBUF_NAMESPACE_ID::Any* ForwardingPacket::release_specific_packet() {
  
  PROTOBUF_NAMESPACE_ID::Any* temp = specific_packet_;
  specific_packet_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* ForwardingPacket::unsafe_arena_release_specific_packet() {
  // @@protoc_insertion_point(field_release:TournamentAssistantShared.Models.Packets.ForwardingPacket.specific_packet)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = specific_packet_;
  specific_packet_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* ForwardingPacket::_internal_mutable_specific_packet() {
  
  if (specific_packet_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArena());
    specific_packet_ = p;
  }
  return specific_packet_;
}
inline PROTOBUF_NAMESPACE_ID::Any* ForwardingPacket::mutable_specific_packet() {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ForwardingPacket.specific_packet)
  return _internal_mutable_specific_packet();
}
inline void ForwardingPacket::set_allocated_specific_packet(PROTOBUF_NAMESPACE_ID::Any* specific_packet) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(specific_packet_);
  }
  if (specific_packet) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(specific_packet)->GetArena();
    if (message_arena != submessage_arena) {
      specific_packet = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, specific_packet, submessage_arena);
    }
    
  } else {
    
  }
  specific_packet_ = specific_packet;
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Packets.ForwardingPacket.specific_packet)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto
