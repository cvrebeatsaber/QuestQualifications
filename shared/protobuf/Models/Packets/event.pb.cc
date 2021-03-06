// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/event.proto

#include "protobuf/Models/Packets/event.pb.h"

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
constexpr Event::Event(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : changed_object_(nullptr)
  , type_(0)
{}
struct EventDefaultTypeInternal {
  constexpr EventDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~EventDefaultTypeInternal() {}
  union {
    Event _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT EventDefaultTypeInternal _Event_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fPackets_2fevent_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fevent_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fPackets_2fevent_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fPackets_2fevent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::Event, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::Event, type_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::Event, changed_object_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Packets::Event)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Packets::_Event_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fPackets_2fevent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#protobuf/Models/Packets/event.proto\022(T"
  "ournamentAssistantShared.Models.Packets\032"
  "\031google/protobuf/any.proto\"\234\003\n\005Event\022G\n\004"
  "type\030\001 \001(\01629.TournamentAssistantShared.M"
  "odels.Packets.Event.EventType\022,\n\016changed"
  "_object\030\002 \001(\0132\024.google.protobuf.Any\"\233\002\n\t"
  "EventType\022\010\n\004None\020\000\022\017\n\013PlayerAdded\020\001\022\021\n\r"
  "PlayerUpdated\020\002\022\016\n\nPlayerLeft\020\003\022\024\n\020Coord"
  "inatorAdded\020\004\022\023\n\017CoordinatorLeft\020\005\022\020\n\014Ma"
  "tchCreated\020\006\022\020\n\014MatchUpdated\020\007\022\020\n\014MatchD"
  "eleted\020\010\022\031\n\025QualifierEventCreated\020\t\022\031\n\025Q"
  "ualifierEventUpdated\020\n\022\031\n\025QualifierEvent"
  "Deleted\020\013\022\r\n\tHostAdded\020\014\022\017\n\013HostRemoved\020"
  "\rB+\252\002(TournamentAssistantShared.Models.P"
  "acketsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto = {
  false, false, 574, descriptor_table_protodef_protobuf_2fModels_2fPackets_2fevent_2eproto, "protobuf/Models/Packets/event.proto", 
  &descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto_once, descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fPackets_2fevent_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fPackets_2fevent_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fevent_2eproto, file_level_service_descriptors_protobuf_2fModels_2fPackets_2fevent_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto);
  return descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fPackets_2fevent_2eproto(&descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Event_EventType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2fevent_2eproto);
  return file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fevent_2eproto[0];
}
bool Event_EventType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Event_EventType Event::None;
constexpr Event_EventType Event::PlayerAdded;
constexpr Event_EventType Event::PlayerUpdated;
constexpr Event_EventType Event::PlayerLeft;
constexpr Event_EventType Event::CoordinatorAdded;
constexpr Event_EventType Event::CoordinatorLeft;
constexpr Event_EventType Event::MatchCreated;
constexpr Event_EventType Event::MatchUpdated;
constexpr Event_EventType Event::MatchDeleted;
constexpr Event_EventType Event::QualifierEventCreated;
constexpr Event_EventType Event::QualifierEventUpdated;
constexpr Event_EventType Event::QualifierEventDeleted;
constexpr Event_EventType Event::HostAdded;
constexpr Event_EventType Event::HostRemoved;
constexpr Event_EventType Event::EventType_MIN;
constexpr Event_EventType Event::EventType_MAX;
constexpr int Event::EventType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class Event::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Any& changed_object(const Event* msg);
};

const PROTOBUF_NAMESPACE_ID::Any&
Event::_Internal::changed_object(const Event* msg) {
  return *msg->changed_object_;
}
void Event::clear_changed_object() {
  if (GetArena() == nullptr && changed_object_ != nullptr) {
    delete changed_object_;
  }
  changed_object_ = nullptr;
}
Event::Event(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Packets.Event)
}
Event::Event(const Event& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_changed_object()) {
    changed_object_ = new PROTOBUF_NAMESPACE_ID::Any(*from.changed_object_);
  } else {
    changed_object_ = nullptr;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Packets.Event)
}

void Event::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&changed_object_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&changed_object_)) + sizeof(type_));
}

Event::~Event() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Packets.Event)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Event::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete changed_object_;
}

void Event::ArenaDtor(void* object) {
  Event* _this = reinterpret_cast< Event* >(object);
  (void)_this;
}
void Event::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Event::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Event::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Packets.Event)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && changed_object_ != nullptr) {
    delete changed_object_;
  }
  changed_object_ = nullptr;
  type_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Event::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .TournamentAssistantShared.Models.Packets.Event.EventType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::TournamentAssistantShared::Models::Packets::Event_EventType>(val));
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Any changed_object = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_changed_object(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Event::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Packets.Event)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TournamentAssistantShared.Models.Packets.Event.EventType type = 1;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // .google.protobuf.Any changed_object = 2;
  if (this->has_changed_object()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::changed_object(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Packets.Event)
  return target;
}

size_t Event::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Packets.Event)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.protobuf.Any changed_object = 2;
  if (this->has_changed_object()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *changed_object_);
  }

  // .TournamentAssistantShared.Models.Packets.Event.EventType type = 1;
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

void Event::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Packets.Event)
  GOOGLE_DCHECK_NE(&from, this);
  const Event* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Event>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Packets.Event)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Packets.Event)
    MergeFrom(*source);
  }
}

void Event::MergeFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Packets.Event)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_changed_object()) {
    _internal_mutable_changed_object()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_changed_object());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
}

void Event::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Packets.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event::CopyFrom(const Event& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Packets.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event::IsInitialized() const {
  return true;
}

void Event::InternalSwap(Event* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Event, type_)
      + sizeof(Event::type_)
      - PROTOBUF_FIELD_OFFSET(Event, changed_object_)>(
          reinterpret_cast<char*>(&changed_object_),
          reinterpret_cast<char*>(&other->changed_object_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Event::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Packets::Event* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Packets::Event >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Packets::Event >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
