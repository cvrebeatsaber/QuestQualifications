// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf/Models/Packets/score_request_response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "protobuf/Models/score.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto_metadata_getter(int index);
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {
class ScoreRequestResponse;
struct ScoreRequestResponseDefaultTypeInternal;
extern ScoreRequestResponseDefaultTypeInternal _ScoreRequestResponse_default_instance_;
}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared
PROTOBUF_NAMESPACE_OPEN
template<> ::TournamentAssistantShared::Models::Packets::ScoreRequestResponse* Arena::CreateMaybeMessage<::TournamentAssistantShared::Models::Packets::ScoreRequestResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TournamentAssistantShared {
namespace Models {
namespace Packets {

// ===================================================================

class ScoreRequestResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TournamentAssistantShared.Models.Packets.ScoreRequestResponse) */ {
 public:
  inline ScoreRequestResponse() : ScoreRequestResponse(nullptr) {}
  virtual ~ScoreRequestResponse();
  explicit constexpr ScoreRequestResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ScoreRequestResponse(const ScoreRequestResponse& from);
  ScoreRequestResponse(ScoreRequestResponse&& from) noexcept
    : ScoreRequestResponse() {
    *this = ::std::move(from);
  }

  inline ScoreRequestResponse& operator=(const ScoreRequestResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScoreRequestResponse& operator=(ScoreRequestResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ScoreRequestResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ScoreRequestResponse* internal_default_instance() {
    return reinterpret_cast<const ScoreRequestResponse*>(
               &_ScoreRequestResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ScoreRequestResponse& a, ScoreRequestResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ScoreRequestResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ScoreRequestResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ScoreRequestResponse* New() const final {
    return CreateMaybeMessage<ScoreRequestResponse>(nullptr);
  }

  ScoreRequestResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ScoreRequestResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ScoreRequestResponse& from);
  void MergeFrom(const ScoreRequestResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ScoreRequestResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TournamentAssistantShared.Models.Packets.ScoreRequestResponse";
  }
  protected:
  explicit ScoreRequestResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScoresFieldNumber = 1,
  };
  // repeated .TournamentAssistantShared.Models.Score scores = 1;
  int scores_size() const;
  private:
  int _internal_scores_size() const;
  public:
  void clear_scores();
  ::TournamentAssistantShared::Models::Score* mutable_scores(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Score >*
      mutable_scores();
  private:
  const ::TournamentAssistantShared::Models::Score& _internal_scores(int index) const;
  ::TournamentAssistantShared::Models::Score* _internal_add_scores();
  public:
  const ::TournamentAssistantShared::Models::Score& scores(int index) const;
  ::TournamentAssistantShared::Models::Score* add_scores();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Score >&
      scores() const;

  // @@protoc_insertion_point(class_scope:TournamentAssistantShared.Models.Packets.ScoreRequestResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Score > scores_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScoreRequestResponse

// repeated .TournamentAssistantShared.Models.Score scores = 1;
inline int ScoreRequestResponse::_internal_scores_size() const {
  return scores_.size();
}
inline int ScoreRequestResponse::scores_size() const {
  return _internal_scores_size();
}
inline ::TournamentAssistantShared::Models::Score* ScoreRequestResponse::mutable_scores(int index) {
  // @@protoc_insertion_point(field_mutable:TournamentAssistantShared.Models.Packets.ScoreRequestResponse.scores)
  return scores_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Score >*
ScoreRequestResponse::mutable_scores() {
  // @@protoc_insertion_point(field_mutable_list:TournamentAssistantShared.Models.Packets.ScoreRequestResponse.scores)
  return &scores_;
}
inline const ::TournamentAssistantShared::Models::Score& ScoreRequestResponse::_internal_scores(int index) const {
  return scores_.Get(index);
}
inline const ::TournamentAssistantShared::Models::Score& ScoreRequestResponse::scores(int index) const {
  // @@protoc_insertion_point(field_get:TournamentAssistantShared.Models.Packets.ScoreRequestResponse.scores)
  return _internal_scores(index);
}
inline ::TournamentAssistantShared::Models::Score* ScoreRequestResponse::_internal_add_scores() {
  return scores_.Add();
}
inline ::TournamentAssistantShared::Models::Score* ScoreRequestResponse::add_scores() {
  // @@protoc_insertion_point(field_add:TournamentAssistantShared.Models.Packets.ScoreRequestResponse.scores)
  return _internal_add_scores();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::TournamentAssistantShared::Models::Score >&
ScoreRequestResponse::scores() const {
  // @@protoc_insertion_point(field_list:TournamentAssistantShared.Models.Packets.ScoreRequestResponse.scores)
  return scores_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Packets
}  // namespace Models
}  // namespace TournamentAssistantShared

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protobuf_2fModels_2fPackets_2fscore_5frequest_5fresponse_2eproto
