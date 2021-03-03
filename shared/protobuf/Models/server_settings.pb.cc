// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/server_settings.proto

#include "protobuf/Models/server_settings.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fteam_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Team_protobuf_2fModels_2fteam_2eproto;
namespace TournamentAssistantShared {
namespace Models {
class ServerSettingsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerSettings> _instance;
} _ServerSettings_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
static void InitDefaultsscc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::TournamentAssistantShared::Models::_ServerSettings_default_instance_;
    new (ptr) ::TournamentAssistantShared::Models::ServerSettings();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto}, {
      &scc_info_Team_protobuf_2fModels_2fteam_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fserver_5fsettings_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fserver_5fsettings_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fserver_5fsettings_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fserver_5fsettings_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, server_name_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, password_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, enable_teams_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, teams_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, score_update_frequency_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::ServerSettings, banned_mods_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::ServerSettings)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::_ServerSettings_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fserver_5fsettings_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%protobuf/Models/server_settings.proto\022"
  " TournamentAssistantShared.Models\032\032proto"
  "buf/Models/team.proto\"\271\001\n\016ServerSettings"
  "\022\023\n\013server_name\030\001 \001(\t\022\020\n\010password\030\002 \001(\t\022"
  "\024\n\014enable_teams\030\003 \001(\010\0225\n\005teams\030\004 \003(\0132&.T"
  "ournamentAssistantShared.Models.Team\022\036\n\026"
  "score_update_frequency\030\005 \001(\005\022\023\n\013banned_m"
  "ods\030\006 \003(\tB#\252\002 TournamentAssistantShared."
  "Modelsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto_deps[1] = {
  &::descriptor_table_protobuf_2fModels_2fteam_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto_sccs[1] = {
  &scc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto = {
  false, false, descriptor_table_protodef_protobuf_2fModels_2fserver_5fsettings_2eproto, "protobuf/Models/server_settings.proto", 334,
  &descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto_once, descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto_sccs, descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fserver_5fsettings_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fserver_5fsettings_2eproto, 1, file_level_enum_descriptors_protobuf_2fModels_2fserver_5fsettings_2eproto, file_level_service_descriptors_protobuf_2fModels_2fserver_5fsettings_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protobuf_2fModels_2fserver_5fsettings_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protobuf_2fModels_2fserver_5fsettings_2eproto)), true);
namespace TournamentAssistantShared {
namespace Models {

// ===================================================================

class ServerSettings::_Internal {
 public:
};

void ServerSettings::clear_teams() {
  teams_.Clear();
}
ServerSettings::ServerSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  teams_(arena),
  banned_mods_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.ServerSettings)
}
ServerSettings::ServerSettings(const ServerSettings& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      teams_(from.teams_),
      banned_mods_(from.banned_mods_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  server_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_server_name().empty()) {
    server_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_server_name(), 
      GetArena());
  }
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_password().empty()) {
    password_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_password(), 
      GetArena());
  }
  ::memcpy(&enable_teams_, &from.enable_teams_,
    static_cast<size_t>(reinterpret_cast<char*>(&score_update_frequency_) -
    reinterpret_cast<char*>(&enable_teams_)) + sizeof(score_update_frequency_));
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.ServerSettings)
}

void ServerSettings::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto.base);
  server_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&enable_teams_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&score_update_frequency_) -
      reinterpret_cast<char*>(&enable_teams_)) + sizeof(score_update_frequency_));
}

ServerSettings::~ServerSettings() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.ServerSettings)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ServerSettings::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  server_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ServerSettings::ArenaDtor(void* object) {
  ServerSettings* _this = reinterpret_cast< ServerSettings* >(object);
  (void)_this;
}
void ServerSettings::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ServerSettings::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerSettings& ServerSettings::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServerSettings_protobuf_2fModels_2fserver_5fsettings_2eproto.base);
  return *internal_default_instance();
}


void ServerSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.ServerSettings)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  teams_.Clear();
  banned_mods_.Clear();
  server_name_.ClearToEmpty();
  password_.ClearToEmpty();
  ::memset(&enable_teams_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&score_update_frequency_) -
      reinterpret_cast<char*>(&enable_teams_)) + sizeof(score_update_frequency_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ServerSettings::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string server_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_server_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.ServerSettings.server_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string password = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_password();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.ServerSettings.password"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool enable_teams = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          enable_teams_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .TournamentAssistantShared.Models.Team teams = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_teams(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // int32 score_update_frequency = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          score_update_frequency_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string banned_mods = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_banned_mods();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.ServerSettings.banned_mods"));
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

::PROTOBUF_NAMESPACE_ID::uint8* ServerSettings::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.ServerSettings)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string server_name = 1;
  if (this->server_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_server_name().data(), static_cast<int>(this->_internal_server_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.ServerSettings.server_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_server_name(), target);
  }

  // string password = 2;
  if (this->password().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_password().data(), static_cast<int>(this->_internal_password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.ServerSettings.password");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_password(), target);
  }

  // bool enable_teams = 3;
  if (this->enable_teams() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_enable_teams(), target);
  }

  // repeated .TournamentAssistantShared.Models.Team teams = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_teams_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_teams(i), target, stream);
  }

  // int32 score_update_frequency = 5;
  if (this->score_update_frequency() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_score_update_frequency(), target);
  }

  // repeated string banned_mods = 6;
  for (int i = 0, n = this->_internal_banned_mods_size(); i < n; i++) {
    const auto& s = this->_internal_banned_mods(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.ServerSettings.banned_mods");
    target = stream->WriteString(6, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.ServerSettings)
  return target;
}

size_t ServerSettings::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.ServerSettings)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .TournamentAssistantShared.Models.Team teams = 4;
  total_size += 1UL * this->_internal_teams_size();
  for (const auto& msg : this->teams_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string banned_mods = 6;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(banned_mods_.size());
  for (int i = 0, n = banned_mods_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      banned_mods_.Get(i));
  }

  // string server_name = 1;
  if (this->server_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_server_name());
  }

  // string password = 2;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_password());
  }

  // bool enable_teams = 3;
  if (this->enable_teams() != 0) {
    total_size += 1 + 1;
  }

  // int32 score_update_frequency = 5;
  if (this->score_update_frequency() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_score_update_frequency());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerSettings::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.ServerSettings)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerSettings* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ServerSettings>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.ServerSettings)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.ServerSettings)
    MergeFrom(*source);
  }
}

void ServerSettings::MergeFrom(const ServerSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.ServerSettings)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  teams_.MergeFrom(from.teams_);
  banned_mods_.MergeFrom(from.banned_mods_);
  if (from.server_name().size() > 0) {
    _internal_set_server_name(from._internal_server_name());
  }
  if (from.password().size() > 0) {
    _internal_set_password(from._internal_password());
  }
  if (from.enable_teams() != 0) {
    _internal_set_enable_teams(from._internal_enable_teams());
  }
  if (from.score_update_frequency() != 0) {
    _internal_set_score_update_frequency(from._internal_score_update_frequency());
  }
}

void ServerSettings::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.ServerSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerSettings::CopyFrom(const ServerSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.ServerSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerSettings::IsInitialized() const {
  return true;
}

void ServerSettings::InternalSwap(ServerSettings* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  teams_.InternalSwap(&other->teams_);
  banned_mods_.InternalSwap(&other->banned_mods_);
  server_name_.Swap(&other->server_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  password_.Swap(&other->password_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ServerSettings, score_update_frequency_)
      + sizeof(ServerSettings::score_update_frequency_)
      - PROTOBUF_FIELD_OFFSET(ServerSettings, enable_teams_)>(
          reinterpret_cast<char*>(&enable_teams_),
          reinterpret_cast<char*>(&other->enable_teams_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerSettings::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::ServerSettings* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::ServerSettings >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::ServerSettings >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>