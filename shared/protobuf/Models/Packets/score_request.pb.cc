// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/score_request.proto

#include "protobuf/Models/Packets/score_request.pb.h"

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
constexpr ScoreRequest::ScoreRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : event_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , parameters_(nullptr){}
struct ScoreRequestDefaultTypeInternal {
  constexpr ScoreRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ScoreRequestDefaultTypeInternal() {}
  union {
    ScoreRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ScoreRequestDefaultTypeInternal _ScoreRequest_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ScoreRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ScoreRequest, event_id_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::ScoreRequest, parameters_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Packets::ScoreRequest)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Packets::_ScoreRequest_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+protobuf/Models/Packets/score_request."
  "proto\022(TournamentAssistantShared.Models."
  "Packets\032)protobuf/Models/gameplay_parame"
  "ters.proto\"j\n\014ScoreRequest\022\020\n\010event_id\030\001"
  " \001(\t\022H\n\nparameters\030\002 \001(\01324.TournamentAss"
  "istantShared.Models.GameplayParametersB+"
  "\252\002(TournamentAssistantShared.Models.Pack"
  "etsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_deps[1] = {
  &::descriptor_table_protobuf_2fModels_2fgameplay_5fparameters_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto = {
  false, false, 291, descriptor_table_protodef_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto, "protobuf/Models/Packets/score_request.proto", 
  &descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_once, descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto, file_level_service_descriptors_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto);
  return descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto(&descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_2eproto);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class ScoreRequest::_Internal {
 public:
  static const ::TournamentAssistantShared::Models::GameplayParameters& parameters(const ScoreRequest* msg);
};

const ::TournamentAssistantShared::Models::GameplayParameters&
ScoreRequest::_Internal::parameters(const ScoreRequest* msg) {
  return *msg->parameters_;
}
void ScoreRequest::clear_parameters() {
  if (GetArena() == nullptr && parameters_ != nullptr) {
    delete parameters_;
  }
  parameters_ = nullptr;
}
ScoreRequest::ScoreRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Packets.ScoreRequest)
}
ScoreRequest::ScoreRequest(const ScoreRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  event_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_event_id().empty()) {
    event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_event_id(), 
      GetArena());
  }
  if (from._internal_has_parameters()) {
    parameters_ = new ::TournamentAssistantShared::Models::GameplayParameters(*from.parameters_);
  } else {
    parameters_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Packets.ScoreRequest)
}

void ScoreRequest::SharedCtor() {
event_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
parameters_ = nullptr;
}

ScoreRequest::~ScoreRequest() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Packets.ScoreRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ScoreRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  event_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete parameters_;
}

void ScoreRequest::ArenaDtor(void* object) {
  ScoreRequest* _this = reinterpret_cast< ScoreRequest* >(object);
  (void)_this;
}
void ScoreRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ScoreRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ScoreRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  event_id_.ClearToEmpty();
  if (GetArena() == nullptr && parameters_ != nullptr) {
    delete parameters_;
  }
  parameters_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ScoreRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string event_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_event_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Packets.ScoreRequest.event_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_parameters(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ScoreRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event_id = 1;
  if (this->event_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_event_id().data(), static_cast<int>(this->_internal_event_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Packets.ScoreRequest.event_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_event_id(), target);
  }

  // .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
  if (this->has_parameters()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::parameters(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Packets.ScoreRequest)
  return target;
}

size_t ScoreRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string event_id = 1;
  if (this->event_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_event_id());
  }

  // .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
  if (this->has_parameters()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *parameters_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ScoreRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ScoreRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ScoreRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Packets.ScoreRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Packets.ScoreRequest)
    MergeFrom(*source);
  }
}

void ScoreRequest::MergeFrom(const ScoreRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.event_id().size() > 0) {
    _internal_set_event_id(from._internal_event_id());
  }
  if (from.has_parameters()) {
    _internal_mutable_parameters()->::TournamentAssistantShared::Models::GameplayParameters::MergeFrom(from._internal_parameters());
  }
}

void ScoreRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ScoreRequest::CopyFrom(const ScoreRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Packets.ScoreRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScoreRequest::IsInitialized() const {
  return true;
}

void ScoreRequest::InternalSwap(ScoreRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  event_id_.Swap(&other->event_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(parameters_, other->parameters_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ScoreRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Packets::ScoreRequest* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Packets::ScoreRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Packets::ScoreRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
