// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/loaded_song.proto

#include "protobuf/Models/Packets/loaded_song.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PreviewBeatmapLevel_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto;
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class LoadedSongDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LoadedSong> _instance;
} _LoadedSong_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
static void InitDefaultsscc_info_LoadedSong_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::TournamentAssistantShared::Models::Packets::_LoadedSong_default_instance_;
    new (ptr) ::TournamentAssistantShared::Models::Packets::LoadedSong();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LoadedSong_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_LoadedSong_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto}, {
      &scc_info_PreviewBeatmapLevel_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::LoadedSong, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::LoadedSong, level_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Packets::LoadedSong)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Packets::_LoadedSong_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n)protobuf/Models/Packets/loaded_song.pr"
  "oto\022(TournamentAssistantShared.Models.Pa"
  "ckets\032+protobuf/Models/preview_beatmap_l"
  "evel.proto\"R\n\nLoadedSong\022D\n\005level\030\001 \001(\0132"
  "5.TournamentAssistantShared.Models.Previ"
  "ewBeatmapLevelB+\252\002(TournamentAssistantSh"
  "ared.Models.Packetsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto_deps[1] = {
  &::descriptor_table_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto_sccs[1] = {
  &scc_info_LoadedSong_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto = {
  false, false, descriptor_table_protodef_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto, "protobuf/Models/Packets/loaded_song.proto", 267,
  &descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto_once, descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto_sccs, descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto, 1, file_level_enum_descriptors_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto, file_level_service_descriptors_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto)), true);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class LoadedSong::_Internal {
 public:
  static const ::TournamentAssistantShared::Models::PreviewBeatmapLevel& level(const LoadedSong* msg);
};

const ::TournamentAssistantShared::Models::PreviewBeatmapLevel&
LoadedSong::_Internal::level(const LoadedSong* msg) {
  return *msg->level_;
}
void LoadedSong::clear_level() {
  if (GetArena() == nullptr && level_ != nullptr) {
    delete level_;
  }
  level_ = nullptr;
}
LoadedSong::LoadedSong(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Packets.LoadedSong)
}
LoadedSong::LoadedSong(const LoadedSong& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_level()) {
    level_ = new ::TournamentAssistantShared::Models::PreviewBeatmapLevel(*from.level_);
  } else {
    level_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Packets.LoadedSong)
}

void LoadedSong::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LoadedSong_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto.base);
  level_ = nullptr;
}

LoadedSong::~LoadedSong() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Packets.LoadedSong)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LoadedSong::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete level_;
}

void LoadedSong::ArenaDtor(void* object) {
  LoadedSong* _this = reinterpret_cast< LoadedSong* >(object);
  (void)_this;
}
void LoadedSong::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoadedSong::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LoadedSong& LoadedSong::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LoadedSong_protobuf_2fModels_2fPackets_2floaded_5fsong_2eproto.base);
  return *internal_default_instance();
}


void LoadedSong::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && level_ != nullptr) {
    delete level_;
  }
  level_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoadedSong::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .TournamentAssistantShared.Models.PreviewBeatmapLevel level = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_level(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* LoadedSong::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .TournamentAssistantShared.Models.PreviewBeatmapLevel level = 1;
  if (this->has_level()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::level(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Packets.LoadedSong)
  return target;
}

size_t LoadedSong::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .TournamentAssistantShared.Models.PreviewBeatmapLevel level = 1;
  if (this->has_level()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *level_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoadedSong::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  GOOGLE_DCHECK_NE(&from, this);
  const LoadedSong* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LoadedSong>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Packets.LoadedSong)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Packets.LoadedSong)
    MergeFrom(*source);
  }
}

void LoadedSong::MergeFrom(const LoadedSong& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_level()) {
    _internal_mutable_level()->::TournamentAssistantShared::Models::PreviewBeatmapLevel::MergeFrom(from._internal_level());
  }
}

void LoadedSong::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoadedSong::CopyFrom(const LoadedSong& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Packets.LoadedSong)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoadedSong::IsInitialized() const {
  return true;
}

void LoadedSong::InternalSwap(LoadedSong* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(level_, other->level_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LoadedSong::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Packets::LoadedSong* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Packets::LoadedSong >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Packets::LoadedSong >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
