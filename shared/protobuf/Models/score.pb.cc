// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/score.proto

#include "protobuf/Models/score.pb.h"

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
constexpr Score::Score(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : event_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , user_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , username_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , color_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , parameters_(nullptr)
  , score_(0)
  , full_combo_(false){}
struct ScoreDefaultTypeInternal {
  constexpr ScoreDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ScoreDefaultTypeInternal() {}
  union {
    Score _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ScoreDefaultTypeInternal _Score_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fscore_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fscore_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fscore_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fscore_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, event_id_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, parameters_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, user_id_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, username_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, score_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, full_combo_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Score, color_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Score)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::_Score_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fscore_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033protobuf/Models/score.proto\022 Tournamen"
  "tAssistantShared.Models\032)protobuf/Models"
  "/gameplay_parameters.proto\"\270\001\n\005Score\022\020\n\010"
  "event_id\030\001 \001(\t\022H\n\nparameters\030\002 \001(\01324.Tou"
  "rnamentAssistantShared.Models.GameplayPa"
  "rameters\022\017\n\007user_id\030\003 \001(\t\022\020\n\010username\030\004 "
  "\001(\t\022\r\n\005score\030\005 \001(\005\022\022\n\nfull_combo\030\006 \001(\010\022\r"
  "\n\005color\030\007 \001(\tB#\252\002 TournamentAssistantSha"
  "red.Modelsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fscore_2eproto_deps[1] = {
  &::descriptor_table_protobuf_2fModels_2fgameplay_5fparameters_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fscore_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fscore_2eproto = {
  false, false, 338, descriptor_table_protodef_protobuf_2fModels_2fscore_2eproto, "protobuf/Models/score.proto", 
  &descriptor_table_protobuf_2fModels_2fscore_2eproto_once, descriptor_table_protobuf_2fModels_2fscore_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fscore_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fscore_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fscore_2eproto, file_level_service_descriptors_protobuf_2fModels_2fscore_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fscore_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fscore_2eproto);
  return descriptor_table_protobuf_2fModels_2fscore_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fscore_2eproto(&descriptor_table_protobuf_2fModels_2fscore_2eproto);
namespace TournamentAssistantShared {
namespace Models {

// ===================================================================

class Score::_Internal {
 public:
  static const ::TournamentAssistantShared::Models::GameplayParameters& parameters(const Score* msg);
};

const ::TournamentAssistantShared::Models::GameplayParameters&
Score::_Internal::parameters(const Score* msg) {
  return *msg->parameters_;
}
void Score::clear_parameters() {
  if (GetArena() == nullptr && parameters_ != nullptr) {
    delete parameters_;
  }
  parameters_ = nullptr;
}
Score::Score(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Score)
}
Score::Score(const Score& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  event_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_event_id().empty()) {
    event_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_event_id(), 
      GetArena());
  }
  user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_user_id().empty()) {
    user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_user_id(), 
      GetArena());
  }
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_username().empty()) {
    username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_username(), 
      GetArena());
  }
  color_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_color().empty()) {
    color_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_color(), 
      GetArena());
  }
  if (from._internal_has_parameters()) {
    parameters_ = new ::TournamentAssistantShared::Models::GameplayParameters(*from.parameters_);
  } else {
    parameters_ = nullptr;
  }
  ::memcpy(&score_, &from.score_,
    static_cast<size_t>(reinterpret_cast<char*>(&full_combo_) -
    reinterpret_cast<char*>(&score_)) + sizeof(full_combo_));
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Score)
}

void Score::SharedCtor() {
event_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
user_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
color_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&parameters_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&full_combo_) -
    reinterpret_cast<char*>(&parameters_)) + sizeof(full_combo_));
}

Score::~Score() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Score)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Score::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  event_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  user_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  color_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete parameters_;
}

void Score::ArenaDtor(void* object) {
  Score* _this = reinterpret_cast< Score* >(object);
  (void)_this;
}
void Score::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Score::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Score::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Score)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  event_id_.ClearToEmpty();
  user_id_.ClearToEmpty();
  username_.ClearToEmpty();
  color_.ClearToEmpty();
  if (GetArena() == nullptr && parameters_ != nullptr) {
    delete parameters_;
  }
  parameters_ = nullptr;
  ::memset(&score_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&full_combo_) -
      reinterpret_cast<char*>(&score_)) + sizeof(full_combo_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Score::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Score.event_id"));
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
      // string user_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_user_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Score.user_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string username = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_username();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Score.username"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 score = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          score_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool full_combo = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          full_combo_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string color = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_color();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Score.color"));
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

::PROTOBUF_NAMESPACE_ID::uint8* Score::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Score)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string event_id = 1;
  if (this->event_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_event_id().data(), static_cast<int>(this->_internal_event_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Score.event_id");
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

  // string user_id = 3;
  if (this->user_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user_id().data(), static_cast<int>(this->_internal_user_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Score.user_id");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_user_id(), target);
  }

  // string username = 4;
  if (this->username().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Score.username");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_username(), target);
  }

  // int32 score = 5;
  if (this->score() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_score(), target);
  }

  // bool full_combo = 6;
  if (this->full_combo() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_full_combo(), target);
  }

  // string color = 7;
  if (this->color().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_color().data(), static_cast<int>(this->_internal_color().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Score.color");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_color(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Score)
  return target;
}

size_t Score::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Score)
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

  // string user_id = 3;
  if (this->user_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user_id());
  }

  // string username = 4;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_username());
  }

  // string color = 7;
  if (this->color().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_color());
  }

  // .TournamentAssistantShared.Models.GameplayParameters parameters = 2;
  if (this->has_parameters()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *parameters_);
  }

  // int32 score = 5;
  if (this->score() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_score());
  }

  // bool full_combo = 6;
  if (this->full_combo() != 0) {
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

void Score::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Score)
  GOOGLE_DCHECK_NE(&from, this);
  const Score* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Score>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Score)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Score)
    MergeFrom(*source);
  }
}

void Score::MergeFrom(const Score& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Score)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.event_id().size() > 0) {
    _internal_set_event_id(from._internal_event_id());
  }
  if (from.user_id().size() > 0) {
    _internal_set_user_id(from._internal_user_id());
  }
  if (from.username().size() > 0) {
    _internal_set_username(from._internal_username());
  }
  if (from.color().size() > 0) {
    _internal_set_color(from._internal_color());
  }
  if (from.has_parameters()) {
    _internal_mutable_parameters()->::TournamentAssistantShared::Models::GameplayParameters::MergeFrom(from._internal_parameters());
  }
  if (from.score() != 0) {
    _internal_set_score(from._internal_score());
  }
  if (from.full_combo() != 0) {
    _internal_set_full_combo(from._internal_full_combo());
  }
}

void Score::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Score)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Score::CopyFrom(const Score& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Score)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Score::IsInitialized() const {
  return true;
}

void Score::InternalSwap(Score* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  event_id_.Swap(&other->event_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  user_id_.Swap(&other->user_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  username_.Swap(&other->username_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  color_.Swap(&other->color_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Score, full_combo_)
      + sizeof(Score::full_combo_)
      - PROTOBUF_FIELD_OFFSET(Score, parameters_)>(
          reinterpret_cast<char*>(&parameters_),
          reinterpret_cast<char*>(&other->parameters_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Score::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Score* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Score >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Score >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
