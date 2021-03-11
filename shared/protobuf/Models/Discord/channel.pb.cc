// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Discord/channel.proto

#include "protobuf/Models/Discord/channel.pb.h"

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
namespace Discord {
constexpr Channel::Channel(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(PROTOBUF_ULONGLONG(0)){}
struct ChannelDefaultTypeInternal {
  constexpr ChannelDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ChannelDefaultTypeInternal() {}
  union {
    Channel _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ChannelDefaultTypeInternal _Channel_default_instance_;
}  // namespace Discord
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fDiscord_2fchannel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fDiscord_2fchannel_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fDiscord_2fchannel_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fDiscord_2fchannel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Discord::Channel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Discord::Channel, id_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Discord::Channel, name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Discord::Channel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::Discord::_Channel_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fDiscord_2fchannel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%protobuf/Models/Discord/channel.proto\022"
  "(TournamentAssistantShared.Models.Discor"
  "d\"#\n\007Channel\022\n\n\002id\030\001 \001(\004\022\014\n\004name\030\002 \001(\tB+"
  "\252\002(TournamentAssistantShared.Models.Disc"
  "ordb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto = {
  false, false, 171, descriptor_table_protodef_protobuf_2fModels_2fDiscord_2fchannel_2eproto, "protobuf/Models/Discord/channel.proto", 
  &descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fDiscord_2fchannel_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fDiscord_2fchannel_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fDiscord_2fchannel_2eproto, file_level_service_descriptors_protobuf_2fModels_2fDiscord_2fchannel_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto);
  return descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fDiscord_2fchannel_2eproto(&descriptor_table_protobuf_2fModels_2fDiscord_2fchannel_2eproto);
namespace TournamentAssistantShared {
namespace Models {
namespace Discord {

// ===================================================================

class Channel::_Internal {
 public:
};

Channel::Channel(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Discord.Channel)
}
Channel::Channel(const Channel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Discord.Channel)
}

void Channel::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
id_ = PROTOBUF_ULONGLONG(0);
}

Channel::~Channel() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Discord.Channel)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Channel::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Channel::ArenaDtor(void* object) {
  Channel* _this = reinterpret_cast< Channel* >(object);
  (void)_this;
}
void Channel::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Channel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Channel::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Discord.Channel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  id_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Channel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Discord.Channel.name"));
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

::PROTOBUF_NAMESPACE_ID::uint8* Channel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Discord.Channel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Discord.Channel.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Discord.Channel)
  return target;
}

size_t Channel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Discord.Channel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // uint64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Channel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Discord.Channel)
  GOOGLE_DCHECK_NE(&from, this);
  const Channel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Channel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Discord.Channel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Discord.Channel)
    MergeFrom(*source);
  }
}

void Channel::MergeFrom(const Channel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Discord.Channel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
}

void Channel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Discord.Channel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Channel::CopyFrom(const Channel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Discord.Channel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Channel::IsInitialized() const {
  return true;
}

void Channel::InternalSwap(Channel* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Channel::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Discord
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Discord::Channel* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Discord::Channel >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Discord::Channel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
