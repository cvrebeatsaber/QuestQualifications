// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/forwarding_packet.proto

#include "protobuf/Models/Packets/forwarding_packet.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
constexpr ForwardingPacket::ForwardingPacket(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : forward_to_()
  , specific_packet_(nullptr)
  , type_(0)
{}
struct ForwardingPacketDefaultTypeInternal {
  constexpr ForwardingPacketDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ForwardingPacketDefaultTypeInternal() {}
  union {
    ForwardingPacket _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ForwardingPacketDefaultTypeInternal _ForwardingPacket_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ForwardingPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ForwardingPacket, forward_to_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ForwardingPacket, type_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ForwardingPacket, specific_packet_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Packets::ForwardingPacket)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Packets::_ForwardingPacket_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n/protobuf/Models/Packets/forwarding_pac"
  "ket.proto\022(TournamentAssistantShared.Mod"
  "els.Packets\032!protobuf/Models/packet_type"
  ".proto\032\031google/protobuf/any.proto\"\221\001\n\020Fo"
  "rwardingPacket\022\022\n\nforward_to\030\001 \003(\t\022:\n\004ty"
  "pe\030\002 \001(\0162,.TournamentAssistantShared.Mod"
  "els.PacketType\022-\n\017specific_packet\030\003 \001(\0132"
  "\024.google.protobuf.AnyB+\252\002(TournamentAssi"
  "stantShared.Models.Packetsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
  &::descriptor_table_protobuf_2fModels_2fpacket_5ftype_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto = {
  false, false, 354, descriptor_table_protodef_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto, "protobuf/Models/Packets/forwarding_packet.proto", 
  &descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_once, descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto, file_level_service_descriptors_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto);
  return descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto(&descriptor_table_protobuf_2fModels_2fPackets_2fforwarding_5fpacket_2eproto);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class ForwardingPacket::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Any& specific_packet(const ForwardingPacket* msg);
};

const PROTOBUF_NAMESPACE_ID::Any&
ForwardingPacket::_Internal::specific_packet(const ForwardingPacket* msg) {
  return *msg->specific_packet_;
}
void ForwardingPacket::clear_specific_packet() {
  if (GetArena() == nullptr && specific_packet_ != nullptr) {
    delete specific_packet_;
  }
  specific_packet_ = nullptr;
}
ForwardingPacket::ForwardingPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  forward_to_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Packets.ForwardingPacket)
}
ForwardingPacket::ForwardingPacket(const ForwardingPacket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      forward_to_(from.forward_to_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_specific_packet()) {
    specific_packet_ = new PROTOBUF_NAMESPACE_ID::Any(*from.specific_packet_);
  } else {
    specific_packet_ = nullptr;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Packets.ForwardingPacket)
}

void ForwardingPacket::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&specific_packet_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&specific_packet_)) + sizeof(type_));
}

ForwardingPacket::~ForwardingPacket() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ForwardingPacket::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete specific_packet_;
}

void ForwardingPacket::ArenaDtor(void* object) {
  ForwardingPacket* _this = reinterpret_cast< ForwardingPacket* >(object);
  (void)_this;
}
void ForwardingPacket::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ForwardingPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ForwardingPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  forward_to_.Clear();
  if (GetArena() == nullptr && specific_packet_ != nullptr) {
    delete specific_packet_;
  }
  specific_packet_ = nullptr;
  type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ForwardingPacket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string forward_to = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_forward_to();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.PacketType type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::TournamentAssistantShared::Models::PacketType>(val));
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Any specific_packet = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_specific_packet(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ForwardingPacket::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string forward_to = 1;
  for (int i = 0, n = this->_internal_forward_to_size(); i < n; i++) {
    const auto& s = this->_internal_forward_to(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Packets.ForwardingPacket.forward_to");
    target = stream->WriteString(1, s, target);
  }

  // .TournamentAssistantShared.Models.PacketType type = 2;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  // .google.protobuf.Any specific_packet = 3;
  if (this->has_specific_packet()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::specific_packet(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  return target;
}

size_t ForwardingPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string forward_to = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(forward_to_.size());
  for (int i = 0, n = forward_to_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      forward_to_.Get(i));
  }

  // .google.protobuf.Any specific_packet = 3;
  if (this->has_specific_packet()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *specific_packet_);
  }

  // .TournamentAssistantShared.Models.PacketType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ForwardingPacket::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const ForwardingPacket* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ForwardingPacket>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Packets.ForwardingPacket)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Packets.ForwardingPacket)
    MergeFrom(*source);
  }
}

void ForwardingPacket::MergeFrom(const ForwardingPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  forward_to_.MergeFrom(from.forward_to_);
  if (from.has_specific_packet()) {
    _internal_mutable_specific_packet()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_specific_packet());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
}

void ForwardingPacket::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ForwardingPacket::CopyFrom(const ForwardingPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Packets.ForwardingPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ForwardingPacket::IsInitialized() const {
  return true;
}

void ForwardingPacket::InternalSwap(ForwardingPacket* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  forward_to_.InternalSwap(&other->forward_to_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ForwardingPacket, type_)
      + sizeof(ForwardingPacket::type_)
      - PROTOBUF_FIELD_OFFSET(ForwardingPacket, specific_packet_)>(
          reinterpret_cast<char*>(&specific_packet_),
          reinterpret_cast<char*>(&other->specific_packet_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ForwardingPacket::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Packets::ForwardingPacket* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Packets::ForwardingPacket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Packets::ForwardingPacket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
