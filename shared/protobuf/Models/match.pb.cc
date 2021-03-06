// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/match.proto

#include "protobuf/Models/match.pb.h"

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
constexpr Match::Match(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : players_()
  , guid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , selected_level_(nullptr)
  , selected_characteristic_(nullptr)
  , selected_difficulty_(0)

  , _oneof_case_{}{}
struct MatchDefaultTypeInternal {
  constexpr MatchDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MatchDefaultTypeInternal() {}
  union {
    Match _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MatchDefaultTypeInternal _Match_default_instance_;
}  // namespace Models
}  // namespace TournamentAssistantShared
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protobuf_2fModels_2fmatch_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protobuf_2fModels_2fmatch_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protobuf_2fModels_2fmatch_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protobuf_2fModels_2fmatch_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, guid_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, players_),
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  ::PROTOBUF_NAMESPACE_ID::internal::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, selected_level_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, selected_characteristic_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, selected_difficulty_),
  PROTOBUF_FIELD_OFFSET(::TournamentAssistantShared::Models::Match, leader_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TournamentAssistantShared::Models::Match)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::TournamentAssistantShared::Models::_Match_default_instance_),
};

const char descriptor_table_protodef_protobuf_2fModels_2fmatch_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033protobuf/Models/match.proto\022 Tournamen"
  "tAssistantShared.Models\032\034protobuf/Models"
  "/player.proto\032!protobuf/Models/coordinat"
  "or.proto\032+protobuf/Models/preview_beatma"
  "p_level.proto\032$protobuf/Models/character"
  "istic.proto\032(protobuf/Models/beatmap_dif"
  "ficulty.proto\"\320\003\n\005Match\022\014\n\004guid\030\001 \001(\t\0229\n"
  "\007players\030\002 \003(\0132(.TournamentAssistantShar"
  "ed.Models.Player\022D\n\013coordinator\030\003 \001(\0132-."
  "TournamentAssistantShared.Models.Coordin"
  "atorH\000\022:\n\006player\030\004 \001(\0132(.TournamentAssis"
  "tantShared.Models.PlayerH\000\022M\n\016selected_l"
  "evel\030\005 \001(\01325.TournamentAssistantShared.M"
  "odels.PreviewBeatmapLevel\022Q\n\027selected_ch"
  "aracteristic\030\006 \001(\01320.TournamentAssistant"
  "Shared.Models.Characteristic\022P\n\023selected"
  "_difficulty\030\007 \001(\01623.TournamentAssistantS"
  "hared.Models.BeatmapDifficultyB\010\n\006leader"
  "B#\252\002 TournamentAssistantShared.Modelsb\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protobuf_2fModels_2fmatch_2eproto_deps[5] = {
  &::descriptor_table_protobuf_2fModels_2fbeatmap_5fdifficulty_2eproto,
  &::descriptor_table_protobuf_2fModels_2fcharacteristic_2eproto,
  &::descriptor_table_protobuf_2fModels_2fcoordinator_2eproto,
  &::descriptor_table_protobuf_2fModels_2fplayer_2eproto,
  &::descriptor_table_protobuf_2fModels_2fpreview_5fbeatmap_5flevel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protobuf_2fModels_2fmatch_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fmatch_2eproto = {
  false, false, 765, descriptor_table_protodef_protobuf_2fModels_2fmatch_2eproto, "protobuf/Models/match.proto", 
  &descriptor_table_protobuf_2fModels_2fmatch_2eproto_once, descriptor_table_protobuf_2fModels_2fmatch_2eproto_deps, 5, 1,
  schemas, file_default_instances, TableStruct_protobuf_2fModels_2fmatch_2eproto::offsets,
  file_level_metadata_protobuf_2fModels_2fmatch_2eproto, file_level_enum_descriptors_protobuf_2fModels_2fmatch_2eproto, file_level_service_descriptors_protobuf_2fModels_2fmatch_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_protobuf_2fModels_2fmatch_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protobuf_2fModels_2fmatch_2eproto);
  return descriptor_table_protobuf_2fModels_2fmatch_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_protobuf_2fModels_2fmatch_2eproto(&descriptor_table_protobuf_2fModels_2fmatch_2eproto);
namespace TournamentAssistantShared {
namespace Models {

// ===================================================================

class Match::_Internal {
 public:
  static const ::TournamentAssistantShared::Models::Coordinator& coordinator(const Match* msg);
  static const ::TournamentAssistantShared::Models::Player& player(const Match* msg);
  static const ::TournamentAssistantShared::Models::PreviewBeatmapLevel& selected_level(const Match* msg);
  static const ::TournamentAssistantShared::Models::Characteristic& selected_characteristic(const Match* msg);
};

const ::TournamentAssistantShared::Models::Coordinator&
Match::_Internal::coordinator(const Match* msg) {
  return *msg->leader_.coordinator_;
}
const ::TournamentAssistantShared::Models::Player&
Match::_Internal::player(const Match* msg) {
  return *msg->leader_.player_;
}
const ::TournamentAssistantShared::Models::PreviewBeatmapLevel&
Match::_Internal::selected_level(const Match* msg) {
  return *msg->selected_level_;
}
const ::TournamentAssistantShared::Models::Characteristic&
Match::_Internal::selected_characteristic(const Match* msg) {
  return *msg->selected_characteristic_;
}
void Match::clear_players() {
  players_.Clear();
}
void Match::set_allocated_coordinator(::TournamentAssistantShared::Models::Coordinator* coordinator) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_leader();
  if (coordinator) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(coordinator)->GetArena();
    if (message_arena != submessage_arena) {
      coordinator = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, coordinator, submessage_arena);
    }
    set_has_coordinator();
    leader_.coordinator_ = coordinator;
  }
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Match.coordinator)
}
void Match::clear_coordinator() {
  if (_internal_has_coordinator()) {
    if (GetArena() == nullptr) {
      delete leader_.coordinator_;
    }
    clear_has_leader();
  }
}
void Match::set_allocated_player(::TournamentAssistantShared::Models::Player* player) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  clear_leader();
  if (player) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(player)->GetArena();
    if (message_arena != submessage_arena) {
      player = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, player, submessage_arena);
    }
    set_has_player();
    leader_.player_ = player;
  }
  // @@protoc_insertion_point(field_set_allocated:TournamentAssistantShared.Models.Match.player)
}
void Match::clear_player() {
  if (_internal_has_player()) {
    if (GetArena() == nullptr) {
      delete leader_.player_;
    }
    clear_has_leader();
  }
}
void Match::clear_selected_level() {
  if (GetArena() == nullptr && selected_level_ != nullptr) {
    delete selected_level_;
  }
  selected_level_ = nullptr;
}
void Match::clear_selected_characteristic() {
  if (GetArena() == nullptr && selected_characteristic_ != nullptr) {
    delete selected_characteristic_;
  }
  selected_characteristic_ = nullptr;
}
Match::Match(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  players_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:TournamentAssistantShared.Models.Match)
}
Match::Match(const Match& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      players_(from.players_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  guid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_guid().empty()) {
    guid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_guid(), 
      GetArena());
  }
  if (from._internal_has_selected_level()) {
    selected_level_ = new ::TournamentAssistantShared::Models::PreviewBeatmapLevel(*from.selected_level_);
  } else {
    selected_level_ = nullptr;
  }
  if (from._internal_has_selected_characteristic()) {
    selected_characteristic_ = new ::TournamentAssistantShared::Models::Characteristic(*from.selected_characteristic_);
  } else {
    selected_characteristic_ = nullptr;
  }
  selected_difficulty_ = from.selected_difficulty_;
  clear_has_leader();
  switch (from.leader_case()) {
    case kCoordinator: {
      _internal_mutable_coordinator()->::TournamentAssistantShared::Models::Coordinator::MergeFrom(from._internal_coordinator());
      break;
    }
    case kPlayer: {
      _internal_mutable_player()->::TournamentAssistantShared::Models::Player::MergeFrom(from._internal_player());
      break;
    }
    case LEADER_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:TournamentAssistantShared.Models.Match)
}

void Match::SharedCtor() {
guid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&selected_level_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&selected_difficulty_) -
    reinterpret_cast<char*>(&selected_level_)) + sizeof(selected_difficulty_));
clear_has_leader();
}

Match::~Match() {
  // @@protoc_insertion_point(destructor:TournamentAssistantShared.Models.Match)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Match::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  guid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete selected_level_;
  if (this != internal_default_instance()) delete selected_characteristic_;
  if (has_leader()) {
    clear_leader();
  }
}

void Match::ArenaDtor(void* object) {
  Match* _this = reinterpret_cast< Match* >(object);
  (void)_this;
}
void Match::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Match::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Match::clear_leader() {
// @@protoc_insertion_point(one_of_clear_start:TournamentAssistantShared.Models.Match)
  switch (leader_case()) {
    case kCoordinator: {
      if (GetArena() == nullptr) {
        delete leader_.coordinator_;
      }
      break;
    }
    case kPlayer: {
      if (GetArena() == nullptr) {
        delete leader_.player_;
      }
      break;
    }
    case LEADER_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = LEADER_NOT_SET;
}


void Match::Clear() {
// @@protoc_insertion_point(message_clear_start:TournamentAssistantShared.Models.Match)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  players_.Clear();
  guid_.ClearToEmpty();
  if (GetArena() == nullptr && selected_level_ != nullptr) {
    delete selected_level_;
  }
  selected_level_ = nullptr;
  if (GetArena() == nullptr && selected_characteristic_ != nullptr) {
    delete selected_characteristic_;
  }
  selected_characteristic_ = nullptr;
  selected_difficulty_ = 0;
  clear_leader();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Match::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string guid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_guid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "TournamentAssistantShared.Models.Match.guid"));
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
      // .TournamentAssistantShared.Models.Coordinator coordinator = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_coordinator(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.Player player = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_player(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.PreviewBeatmapLevel selected_level = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_selected_level(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.Characteristic selected_characteristic = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_selected_characteristic(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .TournamentAssistantShared.Models.BeatmapDifficulty selected_difficulty = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_selected_difficulty(static_cast<::TournamentAssistantShared::Models::BeatmapDifficulty>(val));
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

::PROTOBUF_NAMESPACE_ID::uint8* Match::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TournamentAssistantShared.Models.Match)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string guid = 1;
  if (this->guid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_guid().data(), static_cast<int>(this->_internal_guid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TournamentAssistantShared.Models.Match.guid");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_guid(), target);
  }

  // repeated .TournamentAssistantShared.Models.Player players = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_players_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_players(i), target, stream);
  }

  // .TournamentAssistantShared.Models.Coordinator coordinator = 3;
  if (_internal_has_coordinator()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::coordinator(this), target, stream);
  }

  // .TournamentAssistantShared.Models.Player player = 4;
  if (_internal_has_player()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::player(this), target, stream);
  }

  // .TournamentAssistantShared.Models.PreviewBeatmapLevel selected_level = 5;
  if (this->has_selected_level()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::selected_level(this), target, stream);
  }

  // .TournamentAssistantShared.Models.Characteristic selected_characteristic = 6;
  if (this->has_selected_characteristic()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::selected_characteristic(this), target, stream);
  }

  // .TournamentAssistantShared.Models.BeatmapDifficulty selected_difficulty = 7;
  if (this->selected_difficulty() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      7, this->_internal_selected_difficulty(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TournamentAssistantShared.Models.Match)
  return target;
}

size_t Match::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TournamentAssistantShared.Models.Match)
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

  // string guid = 1;
  if (this->guid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_guid());
  }

  // .TournamentAssistantShared.Models.PreviewBeatmapLevel selected_level = 5;
  if (this->has_selected_level()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *selected_level_);
  }

  // .TournamentAssistantShared.Models.Characteristic selected_characteristic = 6;
  if (this->has_selected_characteristic()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *selected_characteristic_);
  }

  // .TournamentAssistantShared.Models.BeatmapDifficulty selected_difficulty = 7;
  if (this->selected_difficulty() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_selected_difficulty());
  }

  switch (leader_case()) {
    // .TournamentAssistantShared.Models.Coordinator coordinator = 3;
    case kCoordinator: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *leader_.coordinator_);
      break;
    }
    // .TournamentAssistantShared.Models.Player player = 4;
    case kPlayer: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *leader_.player_);
      break;
    }
    case LEADER_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Match::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TournamentAssistantShared.Models.Match)
  GOOGLE_DCHECK_NE(&from, this);
  const Match* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Match>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TournamentAssistantShared.Models.Match)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TournamentAssistantShared.Models.Match)
    MergeFrom(*source);
  }
}

void Match::MergeFrom(const Match& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TournamentAssistantShared.Models.Match)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  players_.MergeFrom(from.players_);
  if (from.guid().size() > 0) {
    _internal_set_guid(from._internal_guid());
  }
  if (from.has_selected_level()) {
    _internal_mutable_selected_level()->::TournamentAssistantShared::Models::PreviewBeatmapLevel::MergeFrom(from._internal_selected_level());
  }
  if (from.has_selected_characteristic()) {
    _internal_mutable_selected_characteristic()->::TournamentAssistantShared::Models::Characteristic::MergeFrom(from._internal_selected_characteristic());
  }
  if (from.selected_difficulty() != 0) {
    _internal_set_selected_difficulty(from._internal_selected_difficulty());
  }
  switch (from.leader_case()) {
    case kCoordinator: {
      _internal_mutable_coordinator()->::TournamentAssistantShared::Models::Coordinator::MergeFrom(from._internal_coordinator());
      break;
    }
    case kPlayer: {
      _internal_mutable_player()->::TournamentAssistantShared::Models::Player::MergeFrom(from._internal_player());
      break;
    }
    case LEADER_NOT_SET: {
      break;
    }
  }
}

void Match::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TournamentAssistantShared.Models.Match)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Match::CopyFrom(const Match& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TournamentAssistantShared.Models.Match)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Match::IsInitialized() const {
  return true;
}

void Match::InternalSwap(Match* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  players_.InternalSwap(&other->players_);
  guid_.Swap(&other->guid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Match, selected_difficulty_)
      + sizeof(Match::selected_difficulty_)
      - PROTOBUF_FIELD_OFFSET(Match, selected_level_)>(
          reinterpret_cast<char*>(&selected_level_),
          reinterpret_cast<char*>(&other->selected_level_));
  swap(leader_, other->leader_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Match::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TournamentAssistantShared::Models::Match* Arena::CreateMaybeMessage< ::TournamentAssistantShared::Models::Match >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TournamentAssistantShared::Models::Match >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
