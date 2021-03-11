// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/song_list.proto

#include "protobuf/Models/Packets/song_list.pb.h"

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
constexpr SongList::SongList(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : levels_(){}
struct SongListDefaultTypeInternal {
  constexpr SongListDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SongListDefaultTypeInternal() {}
  union {
    SongList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SongListDefaultTypeInternal _SongList_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::SongList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::SongList, levels_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Packets::SongList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Packets::_SongList_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\'protobuf/Models/Packets/song_list.prot"
  "o\022(TournamentAssistantShared.Models.Pack"
  "ets\032+protobuf/Models/preview_beatmap_lev"
  "el.proto\"Q\n\010SongList\022E\n\006levels\030\001 \003(\01325.T"
  "ournamentAssistantShared.Models.PreviewB"
  "eatmapLevelB+\252\002(TournamentAssistantShare"
  "d.Models.Packetsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto_deps[1] = {
  &::descriptor_table_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto = {
  false, false, 264, descriptor_table_protodef_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto, "protobuf/Models/Packets/song_list.proto", 
  &descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto_once, descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto, file_level_service_descriptors_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto);
  return descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto(&descriptor_table_protobuf_2fModels_2fPackets_2fsong_5flist_2eproto);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class SongList::_Internal {
 public:
};

void SongList::clear_levels() {
  levels_.Clear();
}
SongList::SongList(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  levels_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Packets.SongList)
}
SongList::SongList(const SongList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      levels_(from.levels_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Packets.SongList)
}

void SongList::SharedCtor() {
}

SongList::~SongList() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Packets.SongList)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SongList::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void SongList::ArenaDtor(void* object) {
  SongList* _this = reinterpret_cast< SongList* >(object);
  (void)_this;
}
void SongList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SongList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SongList::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Packets.SongList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  levels_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SongList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .TournamentAssistantShared.Models.PreviewBeatmapLevel levels = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_levels(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* SongList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Packets.SongList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .TournamentAssistantShared.Models.PreviewBeatmapLevel levels = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_levels_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_levels(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Packets.SongList)
  return target;
}

size_t SongList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Packets.SongList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .TournamentAssistantShared.Models.PreviewBeatmapLevel levels = 1;
  total_size += 1UL * this->_internal_levels_size();
  for (const auto& msg : this->levels_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SongList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Packets.SongList)
  GOOGLE_DCHECK_NE(&from, this);
  const SongList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SongList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Packets.SongList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Packets.SongList)
    MergeFrom(*source);
  }
}

void SongList::MergeFrom(const SongList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Packets.SongList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  levels_.MergeFrom(from.levels_);
}

void SongList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Packets.SongList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SongList::CopyFrom(const SongList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Packets.SongList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SongList::IsInitialized() const {
  return true;
}

void SongList::InternalSwap(SongList* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  levels_.InternalSwap(&other->levels_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SongList::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Packets::SongList* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Packets::SongList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Packets::SongList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
