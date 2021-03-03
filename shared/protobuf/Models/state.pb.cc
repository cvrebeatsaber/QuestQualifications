// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/state.proto

#include "protobuf/Models/state.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fcoordinator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Coordinator_protobuf_2fModels_2fcoordinator_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fcore_5fserver_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CoreServer_protobuf_2fModels_2fcore_5fserver_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fmatch_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_Match_protobuf_2fModels_2fmatch_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fplayer_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Player_protobuf_2fModels_2fplayer_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fqualifier_5fevent_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_QualifierEvent_protobuf_2fModels_2fqualifier_5fevent_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fserver_5fsettings_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto;
namespace TournamentAssistantShared {
namespace Models {
class StateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<State> _instance;
} _State_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
static void InitDefaultsscc_info_State_protobuf_2fModels_2fstate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::TournamentAssistantShared::Models::_State_default_instance_;
    new (ptr) ::TournamentAssistantShared::Models::State();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_State_protobuf_2fModels_2fstate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 6, 0, InitDefaultsscc_info_State_protobuf_2fModels_2fstate_2eproto}, {
      &scc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto.base,
      &scc_info_Player_protobuf_2fModels_2fplayer_2eproto.base,
      &scc_info_Coordinator_protobuf_2fModels_2fcoordinator_2eproto.base,
      &scc_info_Match_protobuf_2fModels_2fmatch_2eproto.base,
      &scc_info_QualifierEvent_protobuf_2fModels_2fqualifier_5fevent_2eproto.base,
      &scc_info_CoreServer_protobuf_2fModels_2fcore_5fserver_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fstate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fstate_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fstate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fstate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, server_settings_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, players_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, coordinators_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, matches_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, events_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::State, known_hosts_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::State)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::_State_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fstate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033protobuf/Models/state.proto\022 Tournamen"
  "tAssistantShared.Models\032%protobuf/Models"
  "/server_settings.proto\032\034protobuf/Models/"
  "player.proto\032!protobuf/Models/coordinato"
  "r.proto\032\033protobuf/Models/match.proto\032%pr"
  "otobuf/Models/qualifier_event.proto\032!pro"
  "tobuf/Models/core_server.proto\"\221\003\n\005State"
  "\022I\n\017server_settings\030\001 \001(\01320.TournamentAs"
  "sistantShared.Models.ServerSettings\0229\n\007p"
  "layers\030\002 \003(\0132(.TournamentAssistantShared"
  ".Models.Player\022C\n\014coordinators\030\003 \003(\0132-.T"
  "ournamentAssistantShared.Models.Coordina"
  "tor\0228\n\007matches\030\004 \003(\0132\'.TournamentAssista"
  "ntShared.Models.Match\022@\n\006events\030\005 \003(\01320."
  "TournamentAssistantShared.Models.Qualifi"
  "erEvent\022A\n\013known_hosts\030\006 \003(\0132,.Tournamen"
  "tAssistantShared.Models.CoreServerB#\252\002 T"
  "ournamentAssistantShared.Modelsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fstate_2eproto_deps[6] = {
  &::descriptor_table_protobuf_2fModels_2fcoordinator_2eproto,
  &::descriptor_table_protobuf_2fModels_2fcore_5fserver_2eproto,
  &::descriptor_table_protobuf_2fModels_2fmatch_2eproto,
  &::descriptor_table_protobuf_2fModels_2fplayer_2eproto,
  &::descriptor_table_protobuf_2fModels_2fqualifier_5fevent_2eproto,
  &::descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protobuf_2fModels_2fstate_2eproto_sccs[1] = {
  &scc_info_State_protobuf_2fModels_2fstate_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fstate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fstate_2eproto = {
  false, false, descriptor_table_protodef_protobuf_2fModels_2fstate_2eproto, "protobuf/Models/state.proto", 719,
  &descriptor_table_protobuf_2fModels_2fstate_2eproto_once, descriptor_table_protobuf_2fModels_2fstate_2eproto_sccs, descriptor_table_protobuf_2fModels_2fstate_2eproto_deps, 1, 6,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fstate_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fstate_2eproto, 1, file_level_enum_descriptors_protobuf_2fModels_2fstate_2eproto, file_level_service_descriptors_protobuf_2fModels_2fstate_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protobuf_2fModels_2fstate_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protobuf_2fModels_2fstate_2eproto)), true);
namespace TournamentAssistantShared {
namespace Models {

// ===================================================================

class State::_Internal {
 public:
  static const ::TournamentAssistantShared::Models::ServerSettings& server_settings(const State* msg);
};

const ::TournamentAssistantShared::Models::ServerSettings&
State::_Internal::server_settings(const State* msg) {
  return *msg->server_settings_;
}
void State::clear_server_settings() {
  if (GetArena() == nullptr && server_settings_ != nullptr) {
    delete server_settings_;
  }
  server_settings_ = nullptr;
}
void State::clear_players() {
  players_.Clear();
}
void State::clear_coordinators() {
  coordinators_.Clear();
}
void State::clear_matches() {
  matches_.Clear();
}
void State::clear_events() {
  events_.Clear();
}
void State::clear_known_hosts() {
  known_hosts_.Clear();
}
State::State(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  players_(arena),
  coordinators_(arena),
  matches_(arena),
  events_(arena),
  known_hosts_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.State)
}
State::State(const State& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      players_(from.players_),
      coordinators_(from.coordinators_),
      matches_(from.matches_),
      events_(from.events_),
      known_hosts_(from.known_hosts_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_server_settings()) {
    server_settings_ = new ::TournamentAssistantShared::Models::ServerSettings(*from.server_settings_);
  } else {
    server_settings_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.State)
}

void State::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_State_protobuf_2fModels_2fstate_2eproto.base);
  server_settings_ = nullptr;
}

State::~State() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.State)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void State::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete server_settings_;
}

void State::ArenaDtor(void* object) {
  State* _this = reinterpret_cast< State* >(object);
  (void)_this;
}
void State::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void State::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const State& State::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_State_protobuf_2fModels_2fstate_2eproto.base);
  return *internal_default_instance();
}


void State::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.State)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  players_.Clear();
  coordinators_.Clear();
  matches_.Clear();
  events_.Clear();
  known_hosts_.Clear();
  if (GetArena() == nullptr && server_settings_ != nullptr) {
    delete server_settings_;
  }
  server_settings_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* State::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .TournamentAssistantShared.Models.ServerSettings server_settings = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_server_settings(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .TournamentAssistantShared.Models.Player players = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_players(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .TournamentAssistantShared.Models.Coordinator coordinators = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_coordinators(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .TournamentAssistantShared.Models.Match matches = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_matches(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .TournamentAssistantShared.Models.QualifierEvent events = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_events(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .TournamentAssistantShared.Models.CoreServer known_hosts = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_known_hosts(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* State::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.State)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TournamentAssistantShared.Models.ServerSettings server_settings = 1;
  if (this->has_server_settings()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::server_settings(this), target, stream);
  }

  // repeated .TournamentAssistantShared.Models.Player players = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_players_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_players(i), target, stream);
  }

  // repeated .TournamentAssistantShared.Models.Coordinator coordinators = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_coordinators_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_coordinators(i), target, stream);
  }

  // repeated .TournamentAssistantShared.Models.Match matches = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_matches_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_matches(i), target, stream);
  }

  // repeated .TournamentAssistantShared.Models.QualifierEvent events = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_events_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, this->_internal_events(i), target, stream);
  }

  // repeated .TournamentAssistantShared.Models.CoreServer known_hosts = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_known_hosts_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, this->_internal_known_hosts(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.State)
  return target;
}

size_t State::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.State)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .TournamentAssistantShared.Models.Player players = 2;
  total_size += 1UL * this->_internal_players_size();
  for (const auto& msg : this->players_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .TournamentAssistantShared.Models.Coordinator coordinators = 3;
  total_size += 1UL * this->_internal_coordinators_size();
  for (const auto& msg : this->coordinators_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .TournamentAssistantShared.Models.Match matches = 4;
  total_size += 1UL * this->_internal_matches_size();
  for (const auto& msg : this->matches_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .TournamentAssistantShared.Models.QualifierEvent events = 5;
  total_size += 1UL * this->_internal_events_size();
  for (const auto& msg : this->events_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .TournamentAssistantShared.Models.CoreServer known_hosts = 6;
  total_size += 1UL * this->_internal_known_hosts_size();
  for (const auto& msg : this->known_hosts_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .TournamentAssistantShared.Models.ServerSettings server_settings = 1;
  if (this->has_server_settings()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *server_settings_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void State::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.State)
  GOOGLE_DCHECK_NE(&from, this);
  const State* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<State>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.State)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.State)
    MergeFrom(*source);
  }
}

void State::MergeFrom(const State& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.State)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  players_.MergeFrom(from.players_);
  coordinators_.MergeFrom(from.coordinators_);
  matches_.MergeFrom(from.matches_);
  events_.MergeFrom(from.events_);
  known_hosts_.MergeFrom(from.known_hosts_);
  if (from.has_server_settings()) {
    _internal_mutable_server_settings()->::TournamentAssistantShared::Models::ServerSettings::MergeFrom(from._internal_server_settings());
  }
}

void State::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.State)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void State::CopyFrom(const State& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.State)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool State::IsInitialized() const {
  return true;
}

void State::InternalSwap(State* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  players_.InternalSwap(&other->players_);
  coordinators_.InternalSwap(&other->coordinators_);
  matches_.InternalSwap(&other->matches_);
  events_.InternalSwap(&other->events_);
  known_hosts_.InternalSwap(&other->known_hosts_);
  swap(server_settings_, other->server_settings_);
}

::PROTOBUF_NAMESPACE_ID::Metadata State::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::State* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::State >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::State >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>