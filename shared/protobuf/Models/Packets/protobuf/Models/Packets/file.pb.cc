// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/file.proto

#include "protobuf/Models/Packets/file.pb.h"

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
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class FileDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<File> _instance;
} _File_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
static void InitDefaultsscc_info_File_protobuf_2fModels_2fPackets_2ffile_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::TournamentAssistantShared::Models::Packets::_File_default_instance_;
    new (ptr) ::TournamentAssistantShared::Models::Packets::File();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_File_protobuf_2fModels_2fPackets_2ffile_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_File_protobuf_2fModels_2fPackets_2ffile_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fPackets_2ffile_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_protobuf_2fModels_2fPackets_2ffile_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fPackets_2ffile_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fPackets_2ffile_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::File, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::File, file_id_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::File, intent_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::File, compressed_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Packets::File, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Packets::File)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Packets::_File_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fPackets_2ffile_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"protobuf/Models/Packets/file.proto\022(To"
  "urnamentAssistantShared.Models.Packets\"\323"
  "\001\n\004File\022\017\n\007file_id\030\001 \001(\t\022I\n\006intent\030\002 \001(\016"
  "29.TournamentAssistantShared.Models.Pack"
  "ets.File.Intentions\022\022\n\ncompressed\030\003 \001(\010\022"
  "\014\n\004data\030\004 \001(\014\"M\n\nIntentions\022\010\n\004None\020\000\022\035\n"
  "\031SetPngToShowWhenTriggered\020\001\022\026\n\022ShowPngI"
  "mmediately\020\002B+\252\002(TournamentAssistantShar"
  "ed.Models.Packetsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_sccs[1] = {
  &scc_info_File_protobuf_2fModels_2fPackets_2ffile_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto = {
  false, false, descriptor_table_protodef_protobuf_2fModels_2fPackets_2ffile_2eproto, "protobuf/Models/Packets/file.proto", 345,
  &descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_once, descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_sccs, descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fPackets_2ffile_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fPackets_2ffile_2eproto, 1, file_level_enum_descriptors_protobuf_2fModels_2fPackets_2ffile_2eproto, file_level_service_descriptors_protobuf_2fModels_2fPackets_2ffile_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protobuf_2fModels_2fPackets_2ffile_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto)), true);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* File_Intentions_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fPackets_2ffile_2eproto);
  return file_level_enum_descriptors_protobuf_2fModels_2fPackets_2ffile_2eproto[0];
}
bool File_Intentions_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr File_Intentions File::None;
constexpr File_Intentions File::SetPngToShowWhenTriggered;
constexpr File_Intentions File::ShowPngImmediately;
constexpr File_Intentions File::Intentions_MIN;
constexpr File_Intentions File::Intentions_MAX;
constexpr int File::Intentions_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class File::_Internal {
 public:
};

File::File(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Packets.File)
}
File::File(const File& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  file_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_file_id().empty()) {
    file_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_file_id(), 
      GetArena());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArena());
  }
  ::memcpy(&intent_, &from.intent_,
    static_cast<size_t>(reinterpret_cast<char*>(&compressed_) -
    reinterpret_cast<char*>(&intent_)) + sizeof(compressed_));
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Packets.File)
}

void File::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_File_protobuf_2fModels_2fPackets_2ffile_2eproto.base);
  file_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&intent_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&compressed_) -
      reinterpret_cast<char*>(&intent_)) + sizeof(compressed_));
}

File::~File() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Packets.File)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void File::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  file_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void File::ArenaDtor(void* object) {
  File* _this = reinterpret_cast< File* >(object);
  (void)_this;
}
void File::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void File::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const File& File::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_File_protobuf_2fModels_2fPackets_2ffile_2eproto.base);
  return *internal_default_instance();
}


void File::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Packets.File)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  file_id_.ClearToEmpty();
  data_.ClearToEmpty();
  ::memset(&intent_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&compressed_) -
      reinterpret_cast<char*>(&intent_)) + sizeof(compressed_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* File::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string file_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_file_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Packets.File.file_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.Packets.File.Intentions intent = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_intent(static_cast<::TournamentAssistantShared::Models::Packets::File_Intentions>(val));
        } else goto handle_unusual;
        continue;
      // bool compressed = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          compressed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes data = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* File::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Packets.File)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string file_id = 1;
  if (this->file_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_file_id().data(), static_cast<int>(this->_internal_file_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Packets.File.file_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_file_id(), target);
  }

  // .TournamentAssistantShared.Models.Packets.File.Intentions intent = 2;
  if (this->intent() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_intent(), target);
  }

  // bool compressed = 3;
  if (this->compressed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_compressed(), target);
  }

  // bytes data = 4;
  if (this->data().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Packets.File)
  return target;
}

size_t File::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Packets.File)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string file_id = 1;
  if (this->file_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_file_id());
  }

  // bytes data = 4;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // .TournamentAssistantShared.Models.Packets.File.Intentions intent = 2;
  if (this->intent() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_intent());
  }

  // bool compressed = 3;
  if (this->compressed() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void File::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Packets.File)
  GOOGLE_DCHECK_NE(&from, this);
  const File* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<File>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Packets.File)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Packets.File)
    MergeFrom(*source);
  }
}

void File::MergeFrom(const File& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Packets.File)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.file_id().size() > 0) {
    _internal_set_file_id(from._internal_file_id());
  }
  if (from.data().size() > 0) {
    _internal_set_data(from._internal_data());
  }
  if (from.intent() != 0) {
    _internal_set_intent(from._internal_intent());
  }
  if (from.compressed() != 0) {
    _internal_set_compressed(from._internal_compressed());
  }
}

void File::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Packets.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void File::CopyFrom(const File& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Packets.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool File::IsInitialized() const {
  return true;
}

void File::InternalSwap(File* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  file_id_.Swap(&other->file_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(File, compressed_)
      + sizeof(File::compressed_)
      - PROTOBUF_FIELD_OFFSET(File, intent_)>(
          reinterpret_cast<char*>(&intent_),
          reinterpret_cast<char*>(&other->intent_));
}

::PROTOBUF_NAMESPACE_ID::Metadata File::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Packets::File* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Packets::File >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Packets::File >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>