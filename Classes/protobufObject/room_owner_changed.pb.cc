// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: room_owner_changed.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "room_owner_changed.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* BINChangeRoomOwnerRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINChangeRoomOwnerRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINRoomOwnerChangedResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINRoomOwnerChangedResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_room_5fowner_5fchanged_2eproto() {
  protobuf_AddDesc_room_5fowner_5fchanged_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "room_owner_changed.proto");
  GOOGLE_CHECK(file != NULL);
  BINChangeRoomOwnerRequest_descriptor_ = file->message_type(0);
  static const int BINChangeRoomOwnerRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINChangeRoomOwnerRequest, roomindex_),
  };
  BINChangeRoomOwnerRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINChangeRoomOwnerRequest_descriptor_,
      BINChangeRoomOwnerRequest::default_instance_,
      BINChangeRoomOwnerRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINChangeRoomOwnerRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINChangeRoomOwnerRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINChangeRoomOwnerRequest));
  BINRoomOwnerChangedResponse_descriptor_ = file->message_type(1);
  static const int BINRoomOwnerChangedResponse_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRoomOwnerChangedResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRoomOwnerChangedResponse, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRoomOwnerChangedResponse, newowneruserid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRoomOwnerChangedResponse, changeownerroomcd_),
  };
  BINRoomOwnerChangedResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINRoomOwnerChangedResponse_descriptor_,
      BINRoomOwnerChangedResponse::default_instance_,
      BINRoomOwnerChangedResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRoomOwnerChangedResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINRoomOwnerChangedResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINRoomOwnerChangedResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_room_5fowner_5fchanged_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINChangeRoomOwnerRequest_descriptor_, &BINChangeRoomOwnerRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINRoomOwnerChangedResponse_descriptor_, &BINRoomOwnerChangedResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_room_5fowner_5fchanged_2eproto() {
  delete BINChangeRoomOwnerRequest::default_instance_;
  delete BINChangeRoomOwnerRequest_reflection_;
  delete BINRoomOwnerChangedResponse::default_instance_;
  delete BINRoomOwnerChangedResponse_reflection_;
}

void protobuf_AddDesc_room_5fowner_5fchanged_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030room_owner_changed.proto\".\n\031BINChangeR"
    "oomOwnerRequest\022\021\n\troomIndex\030\001 \002(\005\"w\n\033BI"
    "NRoomOwnerChangedResponse\022\024\n\014responseCod"
    "e\030\001 \002(\010\022\017\n\007message\030\002 \001(\t\022\026\n\016newOwnerUser"
    "Id\030\003 \001(\003\022\031\n\021changeOwnerRoomCd\030\004 \001(\005B\036\n\034c"
    "om.mi.game.network.data.bin", 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "room_owner_changed.proto", &protobuf_RegisterTypes);
  BINChangeRoomOwnerRequest::default_instance_ = new BINChangeRoomOwnerRequest();
  BINRoomOwnerChangedResponse::default_instance_ = new BINRoomOwnerChangedResponse();
  BINChangeRoomOwnerRequest::default_instance_->InitAsDefaultInstance();
  BINRoomOwnerChangedResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_room_5fowner_5fchanged_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_room_5fowner_5fchanged_2eproto {
  StaticDescriptorInitializer_room_5fowner_5fchanged_2eproto() {
    protobuf_AddDesc_room_5fowner_5fchanged_2eproto();
  }
} static_descriptor_initializer_room_5fowner_5fchanged_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINChangeRoomOwnerRequest::kRoomIndexFieldNumber;
#endif  // !_MSC_VER

BINChangeRoomOwnerRequest::BINChangeRoomOwnerRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINChangeRoomOwnerRequest::InitAsDefaultInstance() {
}

BINChangeRoomOwnerRequest::BINChangeRoomOwnerRequest(const BINChangeRoomOwnerRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINChangeRoomOwnerRequest::SharedCtor() {
  _cached_size_ = 0;
  roomindex_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINChangeRoomOwnerRequest::~BINChangeRoomOwnerRequest() {
  SharedDtor();
}

void BINChangeRoomOwnerRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BINChangeRoomOwnerRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINChangeRoomOwnerRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINChangeRoomOwnerRequest_descriptor_;
}

const BINChangeRoomOwnerRequest& BINChangeRoomOwnerRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_room_5fowner_5fchanged_2eproto();
  return *default_instance_;
}

BINChangeRoomOwnerRequest* BINChangeRoomOwnerRequest::default_instance_ = NULL;

BINChangeRoomOwnerRequest* BINChangeRoomOwnerRequest::New() const {
  return new BINChangeRoomOwnerRequest;
}

void BINChangeRoomOwnerRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roomindex_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINChangeRoomOwnerRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 roomIndex = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &roomindex_)));
          set_has_roomindex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BINChangeRoomOwnerRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 roomIndex = 1;
  if (has_roomindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->roomindex(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINChangeRoomOwnerRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 roomIndex = 1;
  if (has_roomindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->roomindex(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINChangeRoomOwnerRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 roomIndex = 1;
    if (has_roomindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->roomindex());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BINChangeRoomOwnerRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINChangeRoomOwnerRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINChangeRoomOwnerRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINChangeRoomOwnerRequest::MergeFrom(const BINChangeRoomOwnerRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomindex()) {
      set_roomindex(from.roomindex());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINChangeRoomOwnerRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINChangeRoomOwnerRequest::CopyFrom(const BINChangeRoomOwnerRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINChangeRoomOwnerRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINChangeRoomOwnerRequest::Swap(BINChangeRoomOwnerRequest* other) {
  if (other != this) {
    std::swap(roomindex_, other->roomindex_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINChangeRoomOwnerRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINChangeRoomOwnerRequest_descriptor_;
  metadata.reflection = BINChangeRoomOwnerRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINRoomOwnerChangedResponse::kResponseCodeFieldNumber;
const int BINRoomOwnerChangedResponse::kMessageFieldNumber;
const int BINRoomOwnerChangedResponse::kNewOwnerUserIdFieldNumber;
const int BINRoomOwnerChangedResponse::kChangeOwnerRoomCdFieldNumber;
#endif  // !_MSC_VER

BINRoomOwnerChangedResponse::BINRoomOwnerChangedResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINRoomOwnerChangedResponse::InitAsDefaultInstance() {
}

BINRoomOwnerChangedResponse::BINRoomOwnerChangedResponse(const BINRoomOwnerChangedResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINRoomOwnerChangedResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  newowneruserid_ = GOOGLE_LONGLONG(0);
  changeownerroomcd_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINRoomOwnerChangedResponse::~BINRoomOwnerChangedResponse() {
  SharedDtor();
}

void BINRoomOwnerChangedResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINRoomOwnerChangedResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINRoomOwnerChangedResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINRoomOwnerChangedResponse_descriptor_;
}

const BINRoomOwnerChangedResponse& BINRoomOwnerChangedResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_room_5fowner_5fchanged_2eproto();
  return *default_instance_;
}

BINRoomOwnerChangedResponse* BINRoomOwnerChangedResponse::default_instance_ = NULL;

BINRoomOwnerChangedResponse* BINRoomOwnerChangedResponse::New() const {
  return new BINRoomOwnerChangedResponse;
}

void BINRoomOwnerChangedResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
    newowneruserid_ = GOOGLE_LONGLONG(0);
    changeownerroomcd_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINRoomOwnerChangedResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool responseCode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &responsecode_)));
          set_has_responsecode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_message;
        break;
      }

      // optional string message = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_newOwnerUserId;
        break;
      }

      // optional int64 newOwnerUserId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_newOwnerUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &newowneruserid_)));
          set_has_newowneruserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_changeOwnerRoomCd;
        break;
      }

      // optional int32 changeOwnerRoomCd = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_changeOwnerRoomCd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &changeownerroomcd_)));
          set_has_changeownerroomcd();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BINRoomOwnerChangedResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool responseCode = 1;
  if (has_responsecode()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->responsecode(), output);
  }

  // optional string message = 2;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->message(), output);
  }

  // optional int64 newOwnerUserId = 3;
  if (has_newowneruserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->newowneruserid(), output);
  }

  // optional int32 changeOwnerRoomCd = 4;
  if (has_changeownerroomcd()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->changeownerroomcd(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINRoomOwnerChangedResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool responseCode = 1;
  if (has_responsecode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->responsecode(), target);
  }

  // optional string message = 2;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->message(), target);
  }

  // optional int64 newOwnerUserId = 3;
  if (has_newowneruserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->newowneruserid(), target);
  }

  // optional int32 changeOwnerRoomCd = 4;
  if (has_changeownerroomcd()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->changeownerroomcd(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINRoomOwnerChangedResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool responseCode = 1;
    if (has_responsecode()) {
      total_size += 1 + 1;
    }

    // optional string message = 2;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }

    // optional int64 newOwnerUserId = 3;
    if (has_newowneruserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->newowneruserid());
    }

    // optional int32 changeOwnerRoomCd = 4;
    if (has_changeownerroomcd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->changeownerroomcd());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BINRoomOwnerChangedResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINRoomOwnerChangedResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINRoomOwnerChangedResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINRoomOwnerChangedResponse::MergeFrom(const BINRoomOwnerChangedResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_responsecode()) {
      set_responsecode(from.responsecode());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
    if (from.has_newowneruserid()) {
      set_newowneruserid(from.newowneruserid());
    }
    if (from.has_changeownerroomcd()) {
      set_changeownerroomcd(from.changeownerroomcd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINRoomOwnerChangedResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINRoomOwnerChangedResponse::CopyFrom(const BINRoomOwnerChangedResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINRoomOwnerChangedResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINRoomOwnerChangedResponse::Swap(BINRoomOwnerChangedResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(newowneruserid_, other->newowneruserid_);
    std::swap(changeownerroomcd_, other->changeownerroomcd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINRoomOwnerChangedResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINRoomOwnerChangedResponse_descriptor_;
  metadata.reflection = BINRoomOwnerChangedResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)