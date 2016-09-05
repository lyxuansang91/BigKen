// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: start_match.proto

#ifndef PROTOBUF_start_5fmatch_2eproto__INCLUDED
#define PROTOBUF_start_5fmatch_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "map_field_entry.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_start_5fmatch_2eproto();
void protobuf_AssignDesc_start_5fmatch_2eproto();
void protobuf_ShutdownFile_start_5fmatch_2eproto();

class BINStartMatchRequest;
class BINStartMatchResponse;

// ===================================================================

class BINStartMatchRequest : public ::google::protobuf::Message {
 public:
  BINStartMatchRequest();
  virtual ~BINStartMatchRequest();

  BINStartMatchRequest(const BINStartMatchRequest& from);

  inline BINStartMatchRequest& operator=(const BINStartMatchRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BINStartMatchRequest& default_instance();

  void Swap(BINStartMatchRequest* other);

  // implements Message ----------------------------------------------

  BINStartMatchRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINStartMatchRequest& from);
  void MergeFrom(const BINStartMatchRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 roomIndex = 1;
  inline bool has_roomindex() const;
  inline void clear_roomindex();
  static const int kRoomIndexFieldNumber = 1;
  inline ::google::protobuf::int32 roomindex() const;
  inline void set_roomindex(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:BINStartMatchRequest)
 private:
  inline void set_has_roomindex();
  inline void clear_has_roomindex();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 roomindex_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_start_5fmatch_2eproto();
  friend void protobuf_AssignDesc_start_5fmatch_2eproto();
  friend void protobuf_ShutdownFile_start_5fmatch_2eproto();

  void InitAsDefaultInstance();
  static BINStartMatchRequest* default_instance_;
};
// -------------------------------------------------------------------

class BINStartMatchResponse : public ::google::protobuf::Message {
 public:
  BINStartMatchResponse();
  virtual ~BINStartMatchResponse();

  BINStartMatchResponse(const BINStartMatchResponse& from);

  inline BINStartMatchResponse& operator=(const BINStartMatchResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BINStartMatchResponse& default_instance();

  void Swap(BINStartMatchResponse* other);

  // implements Message ----------------------------------------------

  BINStartMatchResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINStartMatchResponse& from);
  void MergeFrom(const BINStartMatchResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool responseCode = 1;
  inline bool has_responsecode() const;
  inline void clear_responsecode();
  static const int kResponseCodeFieldNumber = 1;
  inline bool responsecode() const;
  inline void set_responsecode(bool value);

  // optional string message = 2;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 2;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // optional int32 countDownTimer = 3;
  inline bool has_countdowntimer() const;
  inline void clear_countdowntimer();
  static const int kCountDownTimerFieldNumber = 3;
  inline ::google::protobuf::int32 countdowntimer() const;
  inline void set_countdowntimer(::google::protobuf::int32 value);

  // optional int64 firstTurnUserId = 4;
  inline bool has_firstturnuserid() const;
  inline void clear_firstturnuserid();
  static const int kFirstTurnUserIdFieldNumber = 4;
  inline ::google::protobuf::int64 firstturnuserid() const;
  inline void set_firstturnuserid(::google::protobuf::int64 value);

  // repeated .BINMapFieldEntry args = 5;
  inline int args_size() const;
  inline void clear_args();
  static const int kArgsFieldNumber = 5;
  inline const ::BINMapFieldEntry& args(int index) const;
  inline ::BINMapFieldEntry* mutable_args(int index);
  inline ::BINMapFieldEntry* add_args();
  inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
      args() const;
  inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
      mutable_args();

  // @@protoc_insertion_point(class_scope:BINStartMatchResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_countdowntimer();
  inline void clear_has_countdowntimer();
  inline void set_has_firstturnuserid();
  inline void clear_has_firstturnuserid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  bool responsecode_;
  ::google::protobuf::int32 countdowntimer_;
  ::google::protobuf::int64 firstturnuserid_;
  ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry > args_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_start_5fmatch_2eproto();
  friend void protobuf_AssignDesc_start_5fmatch_2eproto();
  friend void protobuf_ShutdownFile_start_5fmatch_2eproto();

  void InitAsDefaultInstance();
  static BINStartMatchResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BINStartMatchRequest

// required int32 roomIndex = 1;
inline bool BINStartMatchRequest::has_roomindex() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINStartMatchRequest::set_has_roomindex() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINStartMatchRequest::clear_has_roomindex() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINStartMatchRequest::clear_roomindex() {
  roomindex_ = 0;
  clear_has_roomindex();
}
inline ::google::protobuf::int32 BINStartMatchRequest::roomindex() const {
  return roomindex_;
}
inline void BINStartMatchRequest::set_roomindex(::google::protobuf::int32 value) {
  set_has_roomindex();
  roomindex_ = value;
}

// -------------------------------------------------------------------

// BINStartMatchResponse

// required bool responseCode = 1;
inline bool BINStartMatchResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINStartMatchResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINStartMatchResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINStartMatchResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINStartMatchResponse::responsecode() const {
  return responsecode_;
}
inline void BINStartMatchResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINStartMatchResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINStartMatchResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINStartMatchResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINStartMatchResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINStartMatchResponse::message() const {
  return *message_;
}
inline void BINStartMatchResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINStartMatchResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINStartMatchResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINStartMatchResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINStartMatchResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINStartMatchResponse::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 countDownTimer = 3;
inline bool BINStartMatchResponse::has_countdowntimer() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINStartMatchResponse::set_has_countdowntimer() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINStartMatchResponse::clear_has_countdowntimer() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINStartMatchResponse::clear_countdowntimer() {
  countdowntimer_ = 0;
  clear_has_countdowntimer();
}
inline ::google::protobuf::int32 BINStartMatchResponse::countdowntimer() const {
  return countdowntimer_;
}
inline void BINStartMatchResponse::set_countdowntimer(::google::protobuf::int32 value) {
  set_has_countdowntimer();
  countdowntimer_ = value;
}

// optional int64 firstTurnUserId = 4;
inline bool BINStartMatchResponse::has_firstturnuserid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BINStartMatchResponse::set_has_firstturnuserid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BINStartMatchResponse::clear_has_firstturnuserid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BINStartMatchResponse::clear_firstturnuserid() {
  firstturnuserid_ = GOOGLE_LONGLONG(0);
  clear_has_firstturnuserid();
}
inline ::google::protobuf::int64 BINStartMatchResponse::firstturnuserid() const {
  return firstturnuserid_;
}
inline void BINStartMatchResponse::set_firstturnuserid(::google::protobuf::int64 value) {
  set_has_firstturnuserid();
  firstturnuserid_ = value;
}

// repeated .BINMapFieldEntry args = 5;
inline int BINStartMatchResponse::args_size() const {
  return args_.size();
}
inline void BINStartMatchResponse::clear_args() {
  args_.Clear();
}
inline const ::BINMapFieldEntry& BINStartMatchResponse::args(int index) const {
  return args_.Get(index);
}
inline ::BINMapFieldEntry* BINStartMatchResponse::mutable_args(int index) {
  return args_.Mutable(index);
}
inline ::BINMapFieldEntry* BINStartMatchResponse::add_args() {
  return args_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
BINStartMatchResponse::args() const {
  return args_;
}
inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
BINStartMatchResponse::mutable_args() {
  return &args_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_start_5fmatch_2eproto__INCLUDED