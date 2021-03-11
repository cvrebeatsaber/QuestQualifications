// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/gameplay_modifiers.proto

#include "protobuf/Models/gameplay_modifiers.pb.h"

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
constexpr GameplayModifiers::GameplayModifiers(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : options_(0)
{}
struct GameplayModifiersDefaultTypeInternal {
  constexpr GameplayModifiersDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GameplayModifiersDefaultTypeInternal() {}
  union {
    GameplayModifiers _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GameplayModifiersDefaultTypeInternal _GameplayModifiers_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::GameplayModifiers, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::GameplayModifiers, options_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::GameplayModifiers)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::_GameplayModifiers_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(protobuf/Models/gameplay_modifiers.pro"
  "to\022 TournamentAssistantShared.Models\"\302\003\n"
  "\021GameplayModifiers\022P\n\007options\030\001 \001(\0162\?.To"
  "urnamentAssistantShared.Models.GameplayM"
  "odifiers.GameOptions\"\332\002\n\013GameOptions\022\010\n\004"
  "None\020\000\022\n\n\006NoFail\020\001\022\013\n\007NoBombs\020\002\022\014\n\010NoArr"
  "ows\020\004\022\017\n\013NoObstacles\020\010\022\014\n\010SlowSong\020\020\022\r\n\t"
  "InstaFail\020 \022\017\n\013FailOnClash\020@\022\022\n\rBatteryE"
  "nergy\020\200\001\022\016\n\tFastNotes\020\200\002\022\r\n\010FastSong\020\200\004\022"
  "\027\n\022DisappearingArrows\020\200\010\022\017\n\nGhostNotes\020\200"
  "\020\022\017\n\nDemoNoFail\020\200 \022\024\n\017DemoNoObstacles\020\200@"
  "\022\022\n\014StrictAngles\020\200\200\001\022\r\n\007ProMode\020\200\200\002\022\r\n\007Z"
  "enMode\020\200\200\004\022\020\n\nSmallCubes\020\200\200\010\022\023\n\rSuperFas"
  "tSong\020\200\200\020B#\252\002 TournamentAssistantShared."
  "Modelsb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto = {
  false, false, 574, descriptor_table_protodef_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto, "protobuf/Models/gameplay_modifiers.proto", 
  &descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto, file_level_service_descriptors_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto);
  return descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto(&descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto);
namespace TournamentAssistantShared {
namespace Models {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GameplayModifiers_GameOptions_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto);
  return file_level_enum_descriptors_protobuf_2fModels_2fgameplay_5fmodifiers_2eproto[0];
}
bool GameplayModifiers_GameOptions_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
    case 256:
    case 512:
    case 1024:
    case 2048:
    case 4096:
    case 8192:
    case 16384:
    case 32768:
    case 65536:
    case 131072:
    case 262144:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr GameplayModifiers_GameOptions GameplayModifiers::None;
constexpr GameplayModifiers_GameOptions GameplayModifiers::NoFail;
constexpr GameplayModifiers_GameOptions GameplayModifiers::NoBombs;
constexpr GameplayModifiers_GameOptions GameplayModifiers::NoArrows;
constexpr GameplayModifiers_GameOptions GameplayModifiers::NoObstacles;
constexpr GameplayModifiers_GameOptions GameplayModifiers::SlowSong;
constexpr GameplayModifiers_GameOptions GameplayModifiers::InstaFail;
constexpr GameplayModifiers_GameOptions GameplayModifiers::FailOnClash;
constexpr GameplayModifiers_GameOptions GameplayModifiers::BatteryEnergy;
constexpr GameplayModifiers_GameOptions GameplayModifiers::FastNotes;
constexpr GameplayModifiers_GameOptions GameplayModifiers::FastSong;
constexpr GameplayModifiers_GameOptions GameplayModifiers::DisappearingArrows;
constexpr GameplayModifiers_GameOptions GameplayModifiers::GhostNotes;
constexpr GameplayModifiers_GameOptions GameplayModifiers::DemoNoFail;
constexpr GameplayModifiers_GameOptions GameplayModifiers::DemoNoObstacles;
constexpr GameplayModifiers_GameOptions GameplayModifiers::StrictAngles;
constexpr GameplayModifiers_GameOptions GameplayModifiers::ProMode;
constexpr GameplayModifiers_GameOptions GameplayModifiers::ZenMode;
constexpr GameplayModifiers_GameOptions GameplayModifiers::SmallCubes;
constexpr GameplayModifiers_GameOptions GameplayModifiers::SuperFastSong;
constexpr GameplayModifiers_GameOptions GameplayModifiers::GameOptions_MIN;
constexpr GameplayModifiers_GameOptions GameplayModifiers::GameOptions_MAX;
constexpr int GameplayModifiers::GameOptions_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class GameplayModifiers::_Internal {
 public:
};

GameplayModifiers::GameplayModifiers(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.GameplayModifiers)
}
GameplayModifiers::GameplayModifiers(const GameplayModifiers& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  options_ = from.options_;
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.GameplayModifiers)
}

void GameplayModifiers::SharedCtor() {
options_ = 0;
}

GameplayModifiers::~GameplayModifiers() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.GameplayModifiers)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GameplayModifiers::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void GameplayModifiers::ArenaDtor(void* object) {
  GameplayModifiers* _this = reinterpret_cast< GameplayModifiers* >(object);
  (void)_this;
}
void GameplayModifiers::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GameplayModifiers::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GameplayModifiers::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.GameplayModifiers)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  options_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GameplayModifiers::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .TournamentAssistantShared.Models.GameplayModifiers.GameOptions options = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_options(static_cast<::TournamentAssistantShared::Models::GameplayModifiers_GameOptions>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* GameplayModifiers::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.GameplayModifiers)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TournamentAssistantShared.Models.GameplayModifiers.GameOptions options = 1;
  if (this->options() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_options(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.GameplayModifiers)
  return target;
}

size_t GameplayModifiers::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.GameplayModifiers)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .TournamentAssistantShared.Models.GameplayModifiers.GameOptions options = 1;
  if (this->options() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_options());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GameplayModifiers::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.GameplayModifiers)
  GOOGLE_DCHECK_NE(&from, this);
  const GameplayModifiers* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GameplayModifiers>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.GameplayModifiers)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.GameplayModifiers)
    MergeFrom(*source);
  }
}

void GameplayModifiers::MergeFrom(const GameplayModifiers& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.GameplayModifiers)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.options() != 0) {
    _internal_set_options(from._internal_options());
  }
}

void GameplayModifiers::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.GameplayModifiers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameplayModifiers::CopyFrom(const GameplayModifiers& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.GameplayModifiers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameplayModifiers::IsInitialized() const {
  return true;
}

void GameplayModifiers::InternalSwap(GameplayModifiers* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(options_, other->options_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GameplayModifiers::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::GameplayModifiers* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::GameplayModifiers >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::GameplayModifiers >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
