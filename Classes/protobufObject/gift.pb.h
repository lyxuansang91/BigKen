// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gift.proto

#ifndef PROTOBUF_gift_2eproto__INCLUDED
#define PROTOBUF_gift_2eproto__INCLUDED

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
void  protobuf_AddDesc_gift_2eproto();
void protobuf_AssignDesc_gift_2eproto();
void protobuf_ShutdownFile_gift_2eproto();

class BINRedeemGiftCodeRequest;
class BINRedeemGiftCodeResponse;
class BINGiftCode;
class BINRedeemGiftCodeHistoryRequest;
class BINRedeemGiftCodeHistoryResponse;

// ===================================================================

class BINRedeemGiftCodeRequest : public ::google::protobuf::Message {
 public:
  BINRedeemGiftCodeRequest();
  virtual ~BINRedeemGiftCodeRequest();

  BINRedeemGiftCodeRequest(const BINRedeemGiftCodeRequest& from);

  inline BINRedeemGiftCodeRequest& operator=(const BINRedeemGiftCodeRequest& from) {
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
  static const BINRedeemGiftCodeRequest& default_instance();

  void Swap(BINRedeemGiftCodeRequest* other);

  // implements Message ----------------------------------------------

  BINRedeemGiftCodeRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINRedeemGiftCodeRequest& from);
  void MergeFrom(const BINRedeemGiftCodeRequest& from);
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

  // required string giftcode = 1;
  inline bool has_giftcode() const;
  inline void clear_giftcode();
  static const int kGiftcodeFieldNumber = 1;
  inline const ::std::string& giftcode() const;
  inline void set_giftcode(const ::std::string& value);
  inline void set_giftcode(const char* value);
  inline void set_giftcode(const char* value, size_t size);
  inline ::std::string* mutable_giftcode();
  inline ::std::string* release_giftcode();
  inline void set_allocated_giftcode(::std::string* giftcode);

  // @@protoc_insertion_point(class_scope:BINRedeemGiftCodeRequest)
 private:
  inline void set_has_giftcode();
  inline void clear_has_giftcode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* giftcode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_gift_2eproto();
  friend void protobuf_AssignDesc_gift_2eproto();
  friend void protobuf_ShutdownFile_gift_2eproto();

  void InitAsDefaultInstance();
  static BINRedeemGiftCodeRequest* default_instance_;
};
// -------------------------------------------------------------------

class BINRedeemGiftCodeResponse : public ::google::protobuf::Message {
 public:
  BINRedeemGiftCodeResponse();
  virtual ~BINRedeemGiftCodeResponse();

  BINRedeemGiftCodeResponse(const BINRedeemGiftCodeResponse& from);

  inline BINRedeemGiftCodeResponse& operator=(const BINRedeemGiftCodeResponse& from) {
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
  static const BINRedeemGiftCodeResponse& default_instance();

  void Swap(BINRedeemGiftCodeResponse* other);

  // implements Message ----------------------------------------------

  BINRedeemGiftCodeResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINRedeemGiftCodeResponse& from);
  void MergeFrom(const BINRedeemGiftCodeResponse& from);
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

  // optional bool success = 3;
  inline bool has_success() const;
  inline void clear_success();
  static const int kSuccessFieldNumber = 3;
  inline bool success() const;
  inline void set_success(bool value);

  // repeated .BINMapFieldEntry args = 4;
  inline int args_size() const;
  inline void clear_args();
  static const int kArgsFieldNumber = 4;
  inline const ::BINMapFieldEntry& args(int index) const;
  inline ::BINMapFieldEntry* mutable_args(int index);
  inline ::BINMapFieldEntry* add_args();
  inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
      args() const;
  inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
      mutable_args();

  // @@protoc_insertion_point(class_scope:BINRedeemGiftCodeResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_success();
  inline void clear_has_success();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry > args_;
  bool responsecode_;
  bool success_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_gift_2eproto();
  friend void protobuf_AssignDesc_gift_2eproto();
  friend void protobuf_ShutdownFile_gift_2eproto();

  void InitAsDefaultInstance();
  static BINRedeemGiftCodeResponse* default_instance_;
};
// -------------------------------------------------------------------

class BINGiftCode : public ::google::protobuf::Message {
 public:
  BINGiftCode();
  virtual ~BINGiftCode();

  BINGiftCode(const BINGiftCode& from);

  inline BINGiftCode& operator=(const BINGiftCode& from) {
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
  static const BINGiftCode& default_instance();

  void Swap(BINGiftCode* other);

  // implements Message ----------------------------------------------

  BINGiftCode* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINGiftCode& from);
  void MergeFrom(const BINGiftCode& from);
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

  // required string giftcode = 1;
  inline bool has_giftcode() const;
  inline void clear_giftcode();
  static const int kGiftcodeFieldNumber = 1;
  inline const ::std::string& giftcode() const;
  inline void set_giftcode(const ::std::string& value);
  inline void set_giftcode(const char* value);
  inline void set_giftcode(const char* value, size_t size);
  inline ::std::string* mutable_giftcode();
  inline ::std::string* release_giftcode();
  inline void set_allocated_giftcode(::std::string* giftcode);

  // required int64 redeemUserId = 2;
  inline bool has_redeemuserid() const;
  inline void clear_redeemuserid();
  static const int kRedeemUserIdFieldNumber = 2;
  inline ::google::protobuf::int64 redeemuserid() const;
  inline void set_redeemuserid(::google::protobuf::int64 value);

  // required int64 redeemTime = 3;
  inline bool has_redeemtime() const;
  inline void clear_redeemtime();
  static const int kRedeemTimeFieldNumber = 3;
  inline ::google::protobuf::int64 redeemtime() const;
  inline void set_redeemtime(::google::protobuf::int64 value);

  // required int32 cash = 4;
  inline bool has_cash() const;
  inline void clear_cash();
  static const int kCashFieldNumber = 4;
  inline ::google::protobuf::int32 cash() const;
  inline void set_cash(::google::protobuf::int32 value);

  // required int32 gold = 5;
  inline bool has_gold() const;
  inline void clear_gold();
  static const int kGoldFieldNumber = 5;
  inline ::google::protobuf::int32 gold() const;
  inline void set_gold(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:BINGiftCode)
 private:
  inline void set_has_giftcode();
  inline void clear_has_giftcode();
  inline void set_has_redeemuserid();
  inline void clear_has_redeemuserid();
  inline void set_has_redeemtime();
  inline void clear_has_redeemtime();
  inline void set_has_cash();
  inline void clear_has_cash();
  inline void set_has_gold();
  inline void clear_has_gold();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* giftcode_;
  ::google::protobuf::int64 redeemuserid_;
  ::google::protobuf::int64 redeemtime_;
  ::google::protobuf::int32 cash_;
  ::google::protobuf::int32 gold_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_gift_2eproto();
  friend void protobuf_AssignDesc_gift_2eproto();
  friend void protobuf_ShutdownFile_gift_2eproto();

  void InitAsDefaultInstance();
  static BINGiftCode* default_instance_;
};
// -------------------------------------------------------------------

class BINRedeemGiftCodeHistoryRequest : public ::google::protobuf::Message {
 public:
  BINRedeemGiftCodeHistoryRequest();
  virtual ~BINRedeemGiftCodeHistoryRequest();

  BINRedeemGiftCodeHistoryRequest(const BINRedeemGiftCodeHistoryRequest& from);

  inline BINRedeemGiftCodeHistoryRequest& operator=(const BINRedeemGiftCodeHistoryRequest& from) {
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
  static const BINRedeemGiftCodeHistoryRequest& default_instance();

  void Swap(BINRedeemGiftCodeHistoryRequest* other);

  // implements Message ----------------------------------------------

  BINRedeemGiftCodeHistoryRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINRedeemGiftCodeHistoryRequest& from);
  void MergeFrom(const BINRedeemGiftCodeHistoryRequest& from);
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

  // required int32 firstResult = 1;
  inline bool has_firstresult() const;
  inline void clear_firstresult();
  static const int kFirstResultFieldNumber = 1;
  inline ::google::protobuf::int32 firstresult() const;
  inline void set_firstresult(::google::protobuf::int32 value);

  // required int32 maxResult = 2;
  inline bool has_maxresult() const;
  inline void clear_maxresult();
  static const int kMaxResultFieldNumber = 2;
  inline ::google::protobuf::int32 maxresult() const;
  inline void set_maxresult(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:BINRedeemGiftCodeHistoryRequest)
 private:
  inline void set_has_firstresult();
  inline void clear_has_firstresult();
  inline void set_has_maxresult();
  inline void clear_has_maxresult();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 firstresult_;
  ::google::protobuf::int32 maxresult_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_gift_2eproto();
  friend void protobuf_AssignDesc_gift_2eproto();
  friend void protobuf_ShutdownFile_gift_2eproto();

  void InitAsDefaultInstance();
  static BINRedeemGiftCodeHistoryRequest* default_instance_;
};
// -------------------------------------------------------------------

class BINRedeemGiftCodeHistoryResponse : public ::google::protobuf::Message {
 public:
  BINRedeemGiftCodeHistoryResponse();
  virtual ~BINRedeemGiftCodeHistoryResponse();

  BINRedeemGiftCodeHistoryResponse(const BINRedeemGiftCodeHistoryResponse& from);

  inline BINRedeemGiftCodeHistoryResponse& operator=(const BINRedeemGiftCodeHistoryResponse& from) {
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
  static const BINRedeemGiftCodeHistoryResponse& default_instance();

  void Swap(BINRedeemGiftCodeHistoryResponse* other);

  // implements Message ----------------------------------------------

  BINRedeemGiftCodeHistoryResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINRedeemGiftCodeHistoryResponse& from);
  void MergeFrom(const BINRedeemGiftCodeHistoryResponse& from);
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

  // repeated .BINGiftCode giftCodes = 3;
  inline int giftcodes_size() const;
  inline void clear_giftcodes();
  static const int kGiftCodesFieldNumber = 3;
  inline const ::BINGiftCode& giftcodes(int index) const;
  inline ::BINGiftCode* mutable_giftcodes(int index);
  inline ::BINGiftCode* add_giftcodes();
  inline const ::google::protobuf::RepeatedPtrField< ::BINGiftCode >&
      giftcodes() const;
  inline ::google::protobuf::RepeatedPtrField< ::BINGiftCode >*
      mutable_giftcodes();

  // @@protoc_insertion_point(class_scope:BINRedeemGiftCodeHistoryResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  ::google::protobuf::RepeatedPtrField< ::BINGiftCode > giftcodes_;
  bool responsecode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_gift_2eproto();
  friend void protobuf_AssignDesc_gift_2eproto();
  friend void protobuf_ShutdownFile_gift_2eproto();

  void InitAsDefaultInstance();
  static BINRedeemGiftCodeHistoryResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BINRedeemGiftCodeRequest

// required string giftcode = 1;
inline bool BINRedeemGiftCodeRequest::has_giftcode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINRedeemGiftCodeRequest::set_has_giftcode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINRedeemGiftCodeRequest::clear_has_giftcode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINRedeemGiftCodeRequest::clear_giftcode() {
  if (giftcode_ != &::google::protobuf::internal::kEmptyString) {
    giftcode_->clear();
  }
  clear_has_giftcode();
}
inline const ::std::string& BINRedeemGiftCodeRequest::giftcode() const {
  return *giftcode_;
}
inline void BINRedeemGiftCodeRequest::set_giftcode(const ::std::string& value) {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  giftcode_->assign(value);
}
inline void BINRedeemGiftCodeRequest::set_giftcode(const char* value) {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  giftcode_->assign(value);
}
inline void BINRedeemGiftCodeRequest::set_giftcode(const char* value, size_t size) {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  giftcode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRedeemGiftCodeRequest::mutable_giftcode() {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  return giftcode_;
}
inline ::std::string* BINRedeemGiftCodeRequest::release_giftcode() {
  clear_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = giftcode_;
    giftcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRedeemGiftCodeRequest::set_allocated_giftcode(::std::string* giftcode) {
  if (giftcode_ != &::google::protobuf::internal::kEmptyString) {
    delete giftcode_;
  }
  if (giftcode) {
    set_has_giftcode();
    giftcode_ = giftcode;
  } else {
    clear_has_giftcode();
    giftcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// BINRedeemGiftCodeResponse

// required bool responseCode = 1;
inline bool BINRedeemGiftCodeResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINRedeemGiftCodeResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINRedeemGiftCodeResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINRedeemGiftCodeResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINRedeemGiftCodeResponse::responsecode() const {
  return responsecode_;
}
inline void BINRedeemGiftCodeResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINRedeemGiftCodeResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINRedeemGiftCodeResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINRedeemGiftCodeResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINRedeemGiftCodeResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINRedeemGiftCodeResponse::message() const {
  return *message_;
}
inline void BINRedeemGiftCodeResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINRedeemGiftCodeResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINRedeemGiftCodeResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRedeemGiftCodeResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINRedeemGiftCodeResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRedeemGiftCodeResponse::set_allocated_message(::std::string* message) {
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

// optional bool success = 3;
inline bool BINRedeemGiftCodeResponse::has_success() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINRedeemGiftCodeResponse::set_has_success() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINRedeemGiftCodeResponse::clear_has_success() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINRedeemGiftCodeResponse::clear_success() {
  success_ = false;
  clear_has_success();
}
inline bool BINRedeemGiftCodeResponse::success() const {
  return success_;
}
inline void BINRedeemGiftCodeResponse::set_success(bool value) {
  set_has_success();
  success_ = value;
}

// repeated .BINMapFieldEntry args = 4;
inline int BINRedeemGiftCodeResponse::args_size() const {
  return args_.size();
}
inline void BINRedeemGiftCodeResponse::clear_args() {
  args_.Clear();
}
inline const ::BINMapFieldEntry& BINRedeemGiftCodeResponse::args(int index) const {
  return args_.Get(index);
}
inline ::BINMapFieldEntry* BINRedeemGiftCodeResponse::mutable_args(int index) {
  return args_.Mutable(index);
}
inline ::BINMapFieldEntry* BINRedeemGiftCodeResponse::add_args() {
  return args_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >&
BINRedeemGiftCodeResponse::args() const {
  return args_;
}
inline ::google::protobuf::RepeatedPtrField< ::BINMapFieldEntry >*
BINRedeemGiftCodeResponse::mutable_args() {
  return &args_;
}

// -------------------------------------------------------------------

// BINGiftCode

// required string giftcode = 1;
inline bool BINGiftCode::has_giftcode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINGiftCode::set_has_giftcode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINGiftCode::clear_has_giftcode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINGiftCode::clear_giftcode() {
  if (giftcode_ != &::google::protobuf::internal::kEmptyString) {
    giftcode_->clear();
  }
  clear_has_giftcode();
}
inline const ::std::string& BINGiftCode::giftcode() const {
  return *giftcode_;
}
inline void BINGiftCode::set_giftcode(const ::std::string& value) {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  giftcode_->assign(value);
}
inline void BINGiftCode::set_giftcode(const char* value) {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  giftcode_->assign(value);
}
inline void BINGiftCode::set_giftcode(const char* value, size_t size) {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  giftcode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINGiftCode::mutable_giftcode() {
  set_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    giftcode_ = new ::std::string;
  }
  return giftcode_;
}
inline ::std::string* BINGiftCode::release_giftcode() {
  clear_has_giftcode();
  if (giftcode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = giftcode_;
    giftcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINGiftCode::set_allocated_giftcode(::std::string* giftcode) {
  if (giftcode_ != &::google::protobuf::internal::kEmptyString) {
    delete giftcode_;
  }
  if (giftcode) {
    set_has_giftcode();
    giftcode_ = giftcode;
  } else {
    clear_has_giftcode();
    giftcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int64 redeemUserId = 2;
inline bool BINGiftCode::has_redeemuserid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINGiftCode::set_has_redeemuserid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINGiftCode::clear_has_redeemuserid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINGiftCode::clear_redeemuserid() {
  redeemuserid_ = GOOGLE_LONGLONG(0);
  clear_has_redeemuserid();
}
inline ::google::protobuf::int64 BINGiftCode::redeemuserid() const {
  return redeemuserid_;
}
inline void BINGiftCode::set_redeemuserid(::google::protobuf::int64 value) {
  set_has_redeemuserid();
  redeemuserid_ = value;
}

// required int64 redeemTime = 3;
inline bool BINGiftCode::has_redeemtime() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINGiftCode::set_has_redeemtime() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINGiftCode::clear_has_redeemtime() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINGiftCode::clear_redeemtime() {
  redeemtime_ = GOOGLE_LONGLONG(0);
  clear_has_redeemtime();
}
inline ::google::protobuf::int64 BINGiftCode::redeemtime() const {
  return redeemtime_;
}
inline void BINGiftCode::set_redeemtime(::google::protobuf::int64 value) {
  set_has_redeemtime();
  redeemtime_ = value;
}

// required int32 cash = 4;
inline bool BINGiftCode::has_cash() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BINGiftCode::set_has_cash() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BINGiftCode::clear_has_cash() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BINGiftCode::clear_cash() {
  cash_ = 0;
  clear_has_cash();
}
inline ::google::protobuf::int32 BINGiftCode::cash() const {
  return cash_;
}
inline void BINGiftCode::set_cash(::google::protobuf::int32 value) {
  set_has_cash();
  cash_ = value;
}

// required int32 gold = 5;
inline bool BINGiftCode::has_gold() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BINGiftCode::set_has_gold() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BINGiftCode::clear_has_gold() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BINGiftCode::clear_gold() {
  gold_ = 0;
  clear_has_gold();
}
inline ::google::protobuf::int32 BINGiftCode::gold() const {
  return gold_;
}
inline void BINGiftCode::set_gold(::google::protobuf::int32 value) {
  set_has_gold();
  gold_ = value;
}

// -------------------------------------------------------------------

// BINRedeemGiftCodeHistoryRequest

// required int32 firstResult = 1;
inline bool BINRedeemGiftCodeHistoryRequest::has_firstresult() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINRedeemGiftCodeHistoryRequest::set_has_firstresult() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINRedeemGiftCodeHistoryRequest::clear_has_firstresult() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINRedeemGiftCodeHistoryRequest::clear_firstresult() {
  firstresult_ = 0;
  clear_has_firstresult();
}
inline ::google::protobuf::int32 BINRedeemGiftCodeHistoryRequest::firstresult() const {
  return firstresult_;
}
inline void BINRedeemGiftCodeHistoryRequest::set_firstresult(::google::protobuf::int32 value) {
  set_has_firstresult();
  firstresult_ = value;
}

// required int32 maxResult = 2;
inline bool BINRedeemGiftCodeHistoryRequest::has_maxresult() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINRedeemGiftCodeHistoryRequest::set_has_maxresult() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINRedeemGiftCodeHistoryRequest::clear_has_maxresult() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINRedeemGiftCodeHistoryRequest::clear_maxresult() {
  maxresult_ = 0;
  clear_has_maxresult();
}
inline ::google::protobuf::int32 BINRedeemGiftCodeHistoryRequest::maxresult() const {
  return maxresult_;
}
inline void BINRedeemGiftCodeHistoryRequest::set_maxresult(::google::protobuf::int32 value) {
  set_has_maxresult();
  maxresult_ = value;
}

// -------------------------------------------------------------------

// BINRedeemGiftCodeHistoryResponse

// required bool responseCode = 1;
inline bool BINRedeemGiftCodeHistoryResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINRedeemGiftCodeHistoryResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINRedeemGiftCodeHistoryResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINRedeemGiftCodeHistoryResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINRedeemGiftCodeHistoryResponse::responsecode() const {
  return responsecode_;
}
inline void BINRedeemGiftCodeHistoryResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINRedeemGiftCodeHistoryResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINRedeemGiftCodeHistoryResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINRedeemGiftCodeHistoryResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINRedeemGiftCodeHistoryResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINRedeemGiftCodeHistoryResponse::message() const {
  return *message_;
}
inline void BINRedeemGiftCodeHistoryResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINRedeemGiftCodeHistoryResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINRedeemGiftCodeHistoryResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINRedeemGiftCodeHistoryResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINRedeemGiftCodeHistoryResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINRedeemGiftCodeHistoryResponse::set_allocated_message(::std::string* message) {
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

// repeated .BINGiftCode giftCodes = 3;
inline int BINRedeemGiftCodeHistoryResponse::giftcodes_size() const {
  return giftcodes_.size();
}
inline void BINRedeemGiftCodeHistoryResponse::clear_giftcodes() {
  giftcodes_.Clear();
}
inline const ::BINGiftCode& BINRedeemGiftCodeHistoryResponse::giftcodes(int index) const {
  return giftcodes_.Get(index);
}
inline ::BINGiftCode* BINRedeemGiftCodeHistoryResponse::mutable_giftcodes(int index) {
  return giftcodes_.Mutable(index);
}
inline ::BINGiftCode* BINRedeemGiftCodeHistoryResponse::add_giftcodes() {
  return giftcodes_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::BINGiftCode >&
BINRedeemGiftCodeHistoryResponse::giftcodes() const {
  return giftcodes_;
}
inline ::google::protobuf::RepeatedPtrField< ::BINGiftCode >*
BINRedeemGiftCodeHistoryResponse::mutable_giftcodes() {
  return &giftcodes_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gift_2eproto__INCLUDED