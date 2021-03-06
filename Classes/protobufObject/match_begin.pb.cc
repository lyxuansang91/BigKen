// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: match_begin.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "match_begin.pb.h"

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

const ::google::protobuf::Descriptor* BINMatchBeginRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINMatchBeginRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BINMatchBeginResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BINMatchBeginResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_match_5fbegin_2eproto() {
  protobuf_AddDesc_match_5fbegin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "match_begin.proto");
  GOOGLE_CHECK(file != NULL);
  BINMatchBeginRequest_descriptor_ = file->message_type(0);
  static const int BINMatchBeginRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginRequest, roomindex_),
  };
  BINMatchBeginRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINMatchBeginRequest_descriptor_,
      BINMatchBeginRequest::default_instance_,
      BINMatchBeginRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINMatchBeginRequest));
  BINMatchBeginResponse_descriptor_ = file->message_type(1);
  static const int BINMatchBeginResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginResponse, responsecode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginResponse, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginResponse, countdowntimer_),
  };
  BINMatchBeginResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BINMatchBeginResponse_descriptor_,
      BINMatchBeginResponse::default_instance_,
      BINMatchBeginResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BINMatchBeginResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BINMatchBeginResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_match_5fbegin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINMatchBeginRequest_descriptor_, &BINMatchBeginRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BINMatchBeginResponse_descriptor_, &BINMatchBeginResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_match_5fbegin_2eproto() {
  delete BINMatchBeginRequest::default_instance_;
  delete BINMatchBeginRequest_reflection_;
  delete BINMatchBeginResponse::default_instance_;
  delete BINMatchBeginResponse_reflection_;
}

void protobuf_AddDesc_match_5fbegin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021match_begin.proto\")\n\024BINMatchBeginRequ"
    "est\022\021\n\troomIndex\030\001 \002(\005\"V\n\025BINMatchBeginR"
    "esponse\022\024\n\014responseCode\030\001 \002(\010\022\017\n\007message"
    "\030\002 \001(\t\022\026\n\016countDownTimer\030\003 \001(\005B\036\n\034com.mi"
    ".game.network.data.bin", 182);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "match_begin.proto", &protobuf_RegisterTypes);
  BINMatchBeginRequest::default_instance_ = new BINMatchBeginRequest();
  BINMatchBeginResponse::default_instance_ = new BINMatchBeginResponse();
  BINMatchBeginRequest::default_instance_->InitAsDefaultInstance();
  BINMatchBeginResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_match_5fbegin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_match_5fbegin_2eproto {
  StaticDescriptorInitializer_match_5fbegin_2eproto() {
    protobuf_AddDesc_match_5fbegin_2eproto();
  }
} static_descriptor_initializer_match_5fbegin_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BINMatchBeginRequest::kRoomIndexFieldNumber;
#endif  // !_MSC_VER

BINMatchBeginRequest::BINMatchBeginRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINMatchBeginRequest::InitAsDefaultInstance() {
}

BINMatchBeginRequest::BINMatchBeginRequest(const BINMatchBeginRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINMatchBeginRequest::SharedCtor() {
  _cached_size_ = 0;
  roomindex_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINMatchBeginRequest::~BINMatchBeginRequest() {
  SharedDtor();
}

void BINMatchBeginRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BINMatchBeginRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINMatchBeginRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINMatchBeginRequest_descriptor_;
}

const BINMatchBeginRequest& BINMatchBeginRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_match_5fbegin_2eproto();
  return *default_instance_;
}

BINMatchBeginRequest* BINMatchBeginRequest::default_instance_ = NULL;

BINMatchBeginRequest* BINMatchBeginRequest::New() const {
  return new BINMatchBeginRequest;
}

void BINMatchBeginRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    roomindex_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINMatchBeginRequest::MergePartialFromCodedStream(
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

void BINMatchBeginRequest::SerializeWithCachedSizes(
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

::google::protobuf::uint8* BINMatchBeginRequest::SerializeWithCachedSizesToArray(
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

int BINMatchBeginRequest::ByteSize() const {
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

void BINMatchBeginRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINMatchBeginRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINMatchBeginRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINMatchBeginRequest::MergeFrom(const BINMatchBeginRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomindex()) {
      set_roomindex(from.roomindex());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINMatchBeginRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINMatchBeginRequest::CopyFrom(const BINMatchBeginRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINMatchBeginRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINMatchBeginRequest::Swap(BINMatchBeginRequest* other) {
  if (other != this) {
    std::swap(roomindex_, other->roomindex_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINMatchBeginRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINMatchBeginRequest_descriptor_;
  metadata.reflection = BINMatchBeginRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BINMatchBeginResponse::kResponseCodeFieldNumber;
const int BINMatchBeginResponse::kMessageFieldNumber;
const int BINMatchBeginResponse::kCountDownTimerFieldNumber;
#endif  // !_MSC_VER

BINMatchBeginResponse::BINMatchBeginResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BINMatchBeginResponse::InitAsDefaultInstance() {
}

BINMatchBeginResponse::BINMatchBeginResponse(const BINMatchBeginResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BINMatchBeginResponse::SharedCtor() {
  _cached_size_ = 0;
  responsecode_ = false;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  countdowntimer_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BINMatchBeginResponse::~BINMatchBeginResponse() {
  SharedDtor();
}

void BINMatchBeginResponse::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void BINMatchBeginResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BINMatchBeginResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BINMatchBeginResponse_descriptor_;
}

const BINMatchBeginResponse& BINMatchBeginResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_match_5fbegin_2eproto();
  return *default_instance_;
}

BINMatchBeginResponse* BINMatchBeginResponse::default_instance_ = NULL;

BINMatchBeginResponse* BINMatchBeginResponse::New() const {
  return new BINMatchBeginResponse;
}

void BINMatchBeginResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    responsecode_ = false;
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
    countdowntimer_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BINMatchBeginResponse::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_countDownTimer;
        break;
      }

      // optional int32 countDownTimer = 3;
      case 3: {
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

void BINMatchBeginResponse::SerializeWithCachedSizes(
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

  // optional int32 countDownTimer = 3;
  if (has_countdowntimer()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->countdowntimer(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BINMatchBeginResponse::SerializeWithCachedSizesToArray(
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

  // optional int32 countDownTimer = 3;
  if (has_countdowntimer()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->countdowntimer(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BINMatchBeginResponse::ByteSize() const {
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

    // optional int32 countDownTimer = 3;
    if (has_countdowntimer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->countdowntimer());
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

void BINMatchBeginResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BINMatchBeginResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BINMatchBeginResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BINMatchBeginResponse::MergeFrom(const BINMatchBeginResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_responsecode()) {
      set_responsecode(from.responsecode());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
    if (from.has_countdowntimer()) {
      set_countdowntimer(from.countdowntimer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BINMatchBeginResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BINMatchBeginResponse::CopyFrom(const BINMatchBeginResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BINMatchBeginResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BINMatchBeginResponse::Swap(BINMatchBeginResponse* other) {
  if (other != this) {
    std::swap(responsecode_, other->responsecode_);
    std::swap(message_, other->message_);
    std::swap(countdowntimer_, other->countdowntimer_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BINMatchBeginResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BINMatchBeginResponse_descriptor_;
  metadata.reflection = BINMatchBeginResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
