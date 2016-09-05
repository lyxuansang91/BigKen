// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: turn.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "turn.pb.h"

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

const ::google::protobuf::Descriptor* BINTurnRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINTurnRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINTurnResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINTurnResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_turn_2eproto() {
  protobuf_AddDesc_turn_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "turn.proto");
  GOOGLE_CHECK(file != NULL);
  BINTurnRequest_descriptor_ = file->message_type(0);
  static const int BINTurnRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnRequest, roomindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnRequest, args_),
  };
  BINTurnRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINTurnRequest_descriptor_,
      BINTurnRequest::default_instance_,
      BINTurnRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINTurnRequest));
  BINTurnResponse_descriptor_ = file->message_type(1);
  static const int BINTurnResponse_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, currentturnuserid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, nextturnuserid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, matchend_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, countdowntimer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, args_),
  };
  BINTurnResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINTurnResponse_descriptor_,
      BINTurnResponse::default_instance_,
      BINTurnResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINTurnResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINTurnResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_turn_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINTurnRequest_descriptor_, &BINTurnRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINTurnResponse_descriptor_, &BINTurnResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_turn_2eproto() {
  delete BINTurnRequest::default_instance_;
  delete BINTurnRequest_reflection_;
  delete BINTurnResponse::default_instance_;
  delete BINTurnResponse_reflection_;
}

void protobuf_AddDesc_turn_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_map_5ffield_5fentry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nturn.proto\032\025map_field_entry.proto\"D\n\016B"
    "INTurnRequest\022\021\n\troomIndex\030\001 \002(\005\022\037\n\004args"
    "\030\002 \003(\0132\021.BINMapFieldEntry\"\266\001\n\017BINTurnRes"
    "ponse\022\024\n\014responseCode\030\001 \002(\010\022\017\n\007message\030\002"
    " \001(\t\022\031\n\021currentTurnUserId\030\003 \001(\003\022\026\n\016nextT"
    "urnUserId\030\004 \001(\003\022\020\n\010matchEnd\030\005 \001(\010\022\026\n\016cou"
    "ntDownTimer\030\006 \001(\005\022\037\n\004args\030\007 \003(\0132\021.BINMap"
    "FieldEntryB\036\n\034com.mi.game.network.data.b"
    "in", 322);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "turn.proto", &protobuf_RegisterTypes);
  BINTurnRequest::default_instance_ = new BINTurnRequest();
  BINTurnResponse::default_instance_ = new BINTurnResponse();
  BINTurnRequest::default_instance_->InitAsDefaultInstance();
  BINTurnResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_turn_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_turn_2eproto {
  StaticDescriptorInitializer_turn_2eproto() {
    protobuf_AddDesc_turn_2eproto();
  }
} static_descriptor_initializer_turn_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINTurnRequest::kRoomIndexFieldNumber;
const int BINTurnRequest::kArgsFieldNumber;
#endif  // !_MSC_VER

BINTurnRequest::BINTurnRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINTurnRequest::InitAsDefaultInstance() {
}

BINTurnRequest::BINTurnRequest(const BINTurnRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINTurnRequest::SharedCtor() {
  _cached_size_ = 0;
  roomindex_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINTurnRequest::~BINTurnRequest() {
  SharedDtor();
}

void BINTurnRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BINTurnRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINTurnRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINTurnRequest_descriptor_;
}

const BINTurnRequest& BINTurnRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_turn_2eproto();
  return *default_instance_;
}

BINTurnRequest* BINTurnRequest::default_instance_ = NULL;

BINTurnRequest* BINTurnRequest::New() const {
  return new BINTurnRequest;
}

void BINTurnRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roomindex_ = 0;
  }
  args_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINTurnRequest::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_args;
        break;
      }

      // repeated .BINMapFieldEntry args = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_args:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_args()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_args;
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

void BINTurnRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 roomIndex = 1;
  if (has_roomindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->roomindex(), output);
  }

  // repeated .BINMapFieldEntry args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->args(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINTurnRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 roomIndex = 1;
  if (has_roomindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->roomindex(), target);
  }

  // repeated .BINMapFieldEntry args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->args(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINTurnRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 roomIndex = 1;
    if (has_roomindex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->roomindex());
    }

  }
  // repeated .BINMapFieldEntry args = 2;
  total_size += 1 * this->args_size();
  for (int i = 0; i < this->args_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->args(i));
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

void BINTurnRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINTurnRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINTurnRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINTurnRequest::MergeFrom(const BINTurnRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  args_.MergeFrom(from.args_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomindex()) {
      set_roomindex(from.roomindex());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINTurnRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINTurnRequest::CopyFrom(const BINTurnRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINTurnRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINTurnRequest::Swap(BINTurnRequest* other) {
  if (other != this) {
    std::swap(roomindex_, other->roomindex_);
    args_.Swap(&other->args_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINTurnRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINTurnRequest_descriptor_;
  metadata.reflection = BINTurnRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINTurnResponse::kResponseCodeFieldNumber;
const int BINTurnResponse::kMessageFieldNumber;
const int BINTurnResponse::kCurrentTurnUserIdFieldNumber;
const int BINTurnResponse::kNextTurnUserIdFieldNumber;
const int BINTurnResponse::kMatchEndFieldNumber;
const int BINTurnResponse::kCountDownTimerFieldNumber;
const int BINTurnResponse::kArgsFieldNumber;
#endif  // !_MSC_VER

BINTurnResponse::BINTurnResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINTurnResponse::InitAsDefaultInstance() {
}

BINTurnResponse::BINTurnResponse(const BINTurnResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINTurnResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  currentturnuserid_ = GOOGLE_LONGLONG(0);
  nextturnuserid_ = GOOGLE_LONGLONG(0);
  matchend_ = false;
  countdowntimer_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINTurnResponse::~BINTurnResponse() {
  SharedDtor();
}

void BINTurnResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINTurnResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINTurnResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINTurnResponse_descriptor_;
}

const BINTurnResponse& BINTurnResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_turn_2eproto();
  return *default_instance_;
}

BINTurnResponse* BINTurnResponse::default_instance_ = NULL;

BINTurnResponse* BINTurnResponse::New() const {
  return new BINTurnResponse;
}

void BINTurnResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
    currentturnuserid_ = GOOGLE_LONGLONG(0);
    nextturnuserid_ = GOOGLE_LONGLONG(0);
    matchend_ = false;
    countdowntimer_ = 0;
  }
  args_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINTurnResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_currentTurnUserId;
        break;
      }

      // optional int64 currentTurnUserId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currentTurnUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &currentturnuserid_)));
          set_has_currentturnuserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_nextTurnUserId;
        break;
      }

      // optional int64 nextTurnUserId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_nextTurnUserId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nextturnuserid_)));
          set_has_nextturnuserid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_matchEnd;
        break;
      }

      // optional bool matchEnd = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_matchEnd:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &matchend_)));
          set_has_matchend();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_countDownTimer;
        break;
      }

      // optional int32 countDownTimer = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_countDownTimer:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &countdowntimer_)));
          set_has_countdowntimer();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_args;
        break;
      }

      // repeated .BINMapFieldEntry args = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_args:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_args()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_args;
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

void BINTurnResponse::SerializeWithCachedSizes(
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

  // optional int64 currentTurnUserId = 3;
  if (has_currentturnuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->currentturnuserid(), output);
  }

  // optional int64 nextTurnUserId = 4;
  if (has_nextturnuserid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->nextturnuserid(), output);
  }

  // optional bool matchEnd = 5;
  if (has_matchend()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->matchend(), output);
  }

  // optional int32 countDownTimer = 6;
  if (has_countdowntimer()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->countdowntimer(), output);
  }

  // repeated .BINMapFieldEntry args = 7;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->args(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINTurnResponse::SerializeWithCachedSizesToArray(
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

  // optional int64 currentTurnUserId = 3;
  if (has_currentturnuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->currentturnuserid(), target);
  }

  // optional int64 nextTurnUserId = 4;
  if (has_nextturnuserid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->nextturnuserid(), target);
  }

  // optional bool matchEnd = 5;
  if (has_matchend()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->matchend(), target);
  }

  // optional int32 countDownTimer = 6;
  if (has_countdowntimer()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->countdowntimer(), target);
  }

  // repeated .BINMapFieldEntry args = 7;
  for (int i = 0; i < this->args_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->args(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINTurnResponse::ByteSize() const {
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

    // optional int64 currentTurnUserId = 3;
    if (has_currentturnuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->currentturnuserid());
    }

    // optional int64 nextTurnUserId = 4;
    if (has_nextturnuserid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->nextturnuserid());
    }

    // optional bool matchEnd = 5;
    if (has_matchend()) {
      total_size += 1 + 1;
    }

    // optional int32 countDownTimer = 6;
    if (has_countdowntimer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->countdowntimer());
    }

  }
  // repeated .BINMapFieldEntry args = 7;
  total_size += 1 * this->args_size();
  for (int i = 0; i < this->args_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->args(i));
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

void BINTurnResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINTurnResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINTurnResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINTurnResponse::MergeFrom(const BINTurnResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  args_.MergeFrom(from.args_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_responsecode()) {
      set_responsecode(from.responsecode());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
    if (from.has_currentturnuserid()) {
      set_currentturnuserid(from.currentturnuserid());
    }
    if (from.has_nextturnuserid()) {
      set_nextturnuserid(from.nextturnuserid());
    }
    if (from.has_matchend()) {
      set_matchend(from.matchend());
    }
    if (from.has_countdowntimer()) {
      set_countdowntimer(from.countdowntimer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINTurnResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINTurnResponse::CopyFrom(const BINTurnResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINTurnResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINTurnResponse::Swap(BINTurnResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(currentturnuserid_, other->currentturnuserid_);
    std::swap(nextturnuserid_, other->nextturnuserid_);
    std::swap(matchend_, other->matchend_);
    std::swap(countdowntimer_, other->countdowntimer_);
    args_.Swap(&other->args_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINTurnResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINTurnResponse_descriptor_;
  metadata.reflection = BINTurnResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
