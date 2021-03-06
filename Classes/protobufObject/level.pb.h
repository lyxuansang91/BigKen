// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: level.proto

#ifndef PROTOBUF_level_2eproto__INCLUDED
#define PROTOBUF_level_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_level_2eproto();
void protobuf_AssignDesc_level_2eproto();
void protobuf_ShutdownFile_level_2eproto();

class BINLevel;
class BINMedal;
class BINLevelUpResponse;
class BINMedalUpResponse;

// ===================================================================

class BINLevel : public ::google::protobuf::Message {
 public:
  BINLevel();
  virtual ~BINLevel();

  BINLevel(const BINLevel& from);

  inline BINLevel& operator=(const BINLevel& from) {
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
  static const BINLevel& default_instance();

  void Swap(BINLevel* other);

  // implements Message ----------------------------------------------

  BINLevel* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINLevel& from);
  void MergeFrom(const BINLevel& from);
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

  // required int32 level = 1;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 1;
  inline ::google::protobuf::int32 level() const;
  inline void set_level(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional int64 cashGift = 3;
  inline bool has_cashgift() const;
  inline void clear_cashgift();
  static const int kCashGiftFieldNumber = 3;
  inline ::google::protobuf::int64 cashgift() const;
  inline void set_cashgift(::google::protobuf::int64 value);

  // optional int64 goldGift = 4;
  inline bool has_goldgift() const;
  inline void clear_goldgift();
  static const int kGoldGiftFieldNumber = 4;
  inline ::google::protobuf::int64 goldgift() const;
  inline void set_goldgift(::google::protobuf::int64 value);

  // required int64 maxExp = 5;
  inline bool has_maxexp() const;
  inline void clear_maxexp();
  static const int kMaxExpFieldNumber = 5;
  inline ::google::protobuf::int64 maxexp() const;
  inline void set_maxexp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:BINLevel)
 private:
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_cashgift();
  inline void clear_has_cashgift();
  inline void set_has_goldgift();
  inline void clear_has_goldgift();
  inline void set_has_maxexp();
  inline void clear_has_maxexp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int64 cashgift_;
  ::google::protobuf::int64 goldgift_;
  ::google::protobuf::int64 maxexp_;
  ::google::protobuf::int32 level_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_level_2eproto();
  friend void protobuf_AssignDesc_level_2eproto();
  friend void protobuf_ShutdownFile_level_2eproto();

  void InitAsDefaultInstance();
  static BINLevel* default_instance_;
};
// -------------------------------------------------------------------

class BINMedal : public ::google::protobuf::Message {
 public:
  BINMedal();
  virtual ~BINMedal();

  BINMedal(const BINMedal& from);

  inline BINMedal& operator=(const BINMedal& from) {
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
  static const BINMedal& default_instance();

  void Swap(BINMedal* other);

  // implements Message ----------------------------------------------

  BINMedal* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINMedal& from);
  void MergeFrom(const BINMedal& from);
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

  // required int32 medal = 1;
  inline bool has_medal() const;
  inline void clear_medal();
  static const int kMedalFieldNumber = 1;
  inline ::google::protobuf::int32 medal() const;
  inline void set_medal(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 maxLevel = 3;
  inline bool has_maxlevel() const;
  inline void clear_maxlevel();
  static const int kMaxLevelFieldNumber = 3;
  inline ::google::protobuf::int32 maxlevel() const;
  inline void set_maxlevel(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:BINMedal)
 private:
  inline void set_has_medal();
  inline void clear_has_medal();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_maxlevel();
  inline void clear_has_maxlevel();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::int32 medal_;
  ::google::protobuf::int32 maxlevel_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_level_2eproto();
  friend void protobuf_AssignDesc_level_2eproto();
  friend void protobuf_ShutdownFile_level_2eproto();

  void InitAsDefaultInstance();
  static BINMedal* default_instance_;
};
// -------------------------------------------------------------------

class BINLevelUpResponse : public ::google::protobuf::Message {
 public:
  BINLevelUpResponse();
  virtual ~BINLevelUpResponse();

  BINLevelUpResponse(const BINLevelUpResponse& from);

  inline BINLevelUpResponse& operator=(const BINLevelUpResponse& from) {
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
  static const BINLevelUpResponse& default_instance();

  void Swap(BINLevelUpResponse* other);

  // implements Message ----------------------------------------------

  BINLevelUpResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINLevelUpResponse& from);
  void MergeFrom(const BINLevelUpResponse& from);
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

  // optional bool levelUp = 3;
  inline bool has_levelup() const;
  inline void clear_levelup();
  static const int kLevelUpFieldNumber = 3;
  inline bool levelup() const;
  inline void set_levelup(bool value);

  // optional int32 newLevel = 4;
  inline bool has_newlevel() const;
  inline void clear_newlevel();
  static const int kNewLevelFieldNumber = 4;
  inline ::google::protobuf::int32 newlevel() const;
  inline void set_newlevel(::google::protobuf::int32 value);

  // optional int64 currentExp = 5;
  inline bool has_currentexp() const;
  inline void clear_currentexp();
  static const int kCurrentExpFieldNumber = 5;
  inline ::google::protobuf::int64 currentexp() const;
  inline void set_currentexp(::google::protobuf::int64 value);

  // optional int64 maxExp = 6;
  inline bool has_maxexp() const;
  inline void clear_maxexp();
  static const int kMaxExpFieldNumber = 6;
  inline ::google::protobuf::int64 maxexp() const;
  inline void set_maxexp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:BINLevelUpResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_levelup();
  inline void clear_has_levelup();
  inline void set_has_newlevel();
  inline void clear_has_newlevel();
  inline void set_has_currentexp();
  inline void clear_has_currentexp();
  inline void set_has_maxexp();
  inline void clear_has_maxexp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  bool responsecode_;
  bool levelup_;
  ::google::protobuf::int32 newlevel_;
  ::google::protobuf::int64 currentexp_;
  ::google::protobuf::int64 maxexp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_level_2eproto();
  friend void protobuf_AssignDesc_level_2eproto();
  friend void protobuf_ShutdownFile_level_2eproto();

  void InitAsDefaultInstance();
  static BINLevelUpResponse* default_instance_;
};
// -------------------------------------------------------------------

class BINMedalUpResponse : public ::google::protobuf::Message {
 public:
  BINMedalUpResponse();
  virtual ~BINMedalUpResponse();

  BINMedalUpResponse(const BINMedalUpResponse& from);

  inline BINMedalUpResponse& operator=(const BINMedalUpResponse& from) {
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
  static const BINMedalUpResponse& default_instance();

  void Swap(BINMedalUpResponse* other);

  // implements Message ----------------------------------------------

  BINMedalUpResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BINMedalUpResponse& from);
  void MergeFrom(const BINMedalUpResponse& from);
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

  // optional bool medalUp = 3;
  inline bool has_medalup() const;
  inline void clear_medalup();
  static const int kMedalUpFieldNumber = 3;
  inline bool medalup() const;
  inline void set_medalup(bool value);

  // optional bool newMedal = 4;
  inline bool has_newmedal() const;
  inline void clear_newmedal();
  static const int kNewMedalFieldNumber = 4;
  inline bool newmedal() const;
  inline void set_newmedal(bool value);

  // optional int64 currentLevel = 5;
  inline bool has_currentlevel() const;
  inline void clear_currentlevel();
  static const int kCurrentLevelFieldNumber = 5;
  inline ::google::protobuf::int64 currentlevel() const;
  inline void set_currentlevel(::google::protobuf::int64 value);

  // optional int64 maxLevel = 6;
  inline bool has_maxlevel() const;
  inline void clear_maxlevel();
  static const int kMaxLevelFieldNumber = 6;
  inline ::google::protobuf::int64 maxlevel() const;
  inline void set_maxlevel(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:BINMedalUpResponse)
 private:
  inline void set_has_responsecode();
  inline void clear_has_responsecode();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_medalup();
  inline void clear_has_medalup();
  inline void set_has_newmedal();
  inline void clear_has_newmedal();
  inline void set_has_currentlevel();
  inline void clear_has_currentlevel();
  inline void set_has_maxlevel();
  inline void clear_has_maxlevel();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* message_;
  ::google::protobuf::int64 currentlevel_;
  ::google::protobuf::int64 maxlevel_;
  bool responsecode_;
  bool medalup_;
  bool newmedal_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_level_2eproto();
  friend void protobuf_AssignDesc_level_2eproto();
  friend void protobuf_ShutdownFile_level_2eproto();

  void InitAsDefaultInstance();
  static BINMedalUpResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BINLevel

// required int32 level = 1;
inline bool BINLevel::has_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINLevel::set_has_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINLevel::clear_has_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINLevel::clear_level() {
  level_ = 0;
  clear_has_level();
}
inline ::google::protobuf::int32 BINLevel::level() const {
  return level_;
}
inline void BINLevel::set_level(::google::protobuf::int32 value) {
  set_has_level();
  level_ = value;
}

// required string name = 2;
inline bool BINLevel::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINLevel::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINLevel::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINLevel::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& BINLevel::name() const {
  return *name_;
}
inline void BINLevel::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void BINLevel::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void BINLevel::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINLevel::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* BINLevel::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINLevel::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 cashGift = 3;
inline bool BINLevel::has_cashgift() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINLevel::set_has_cashgift() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINLevel::clear_has_cashgift() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINLevel::clear_cashgift() {
  cashgift_ = GOOGLE_LONGLONG(0);
  clear_has_cashgift();
}
inline ::google::protobuf::int64 BINLevel::cashgift() const {
  return cashgift_;
}
inline void BINLevel::set_cashgift(::google::protobuf::int64 value) {
  set_has_cashgift();
  cashgift_ = value;
}

// optional int64 goldGift = 4;
inline bool BINLevel::has_goldgift() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BINLevel::set_has_goldgift() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BINLevel::clear_has_goldgift() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BINLevel::clear_goldgift() {
  goldgift_ = GOOGLE_LONGLONG(0);
  clear_has_goldgift();
}
inline ::google::protobuf::int64 BINLevel::goldgift() const {
  return goldgift_;
}
inline void BINLevel::set_goldgift(::google::protobuf::int64 value) {
  set_has_goldgift();
  goldgift_ = value;
}

// required int64 maxExp = 5;
inline bool BINLevel::has_maxexp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BINLevel::set_has_maxexp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BINLevel::clear_has_maxexp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BINLevel::clear_maxexp() {
  maxexp_ = GOOGLE_LONGLONG(0);
  clear_has_maxexp();
}
inline ::google::protobuf::int64 BINLevel::maxexp() const {
  return maxexp_;
}
inline void BINLevel::set_maxexp(::google::protobuf::int64 value) {
  set_has_maxexp();
  maxexp_ = value;
}

// -------------------------------------------------------------------

// BINMedal

// required int32 medal = 1;
inline bool BINMedal::has_medal() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINMedal::set_has_medal() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINMedal::clear_has_medal() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINMedal::clear_medal() {
  medal_ = 0;
  clear_has_medal();
}
inline ::google::protobuf::int32 BINMedal::medal() const {
  return medal_;
}
inline void BINMedal::set_medal(::google::protobuf::int32 value) {
  set_has_medal();
  medal_ = value;
}

// required string name = 2;
inline bool BINMedal::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINMedal::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINMedal::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINMedal::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& BINMedal::name() const {
  return *name_;
}
inline void BINMedal::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void BINMedal::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void BINMedal::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINMedal::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* BINMedal::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINMedal::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 maxLevel = 3;
inline bool BINMedal::has_maxlevel() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINMedal::set_has_maxlevel() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINMedal::clear_has_maxlevel() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINMedal::clear_maxlevel() {
  maxlevel_ = 0;
  clear_has_maxlevel();
}
inline ::google::protobuf::int32 BINMedal::maxlevel() const {
  return maxlevel_;
}
inline void BINMedal::set_maxlevel(::google::protobuf::int32 value) {
  set_has_maxlevel();
  maxlevel_ = value;
}

// -------------------------------------------------------------------

// BINLevelUpResponse

// required bool responseCode = 1;
inline bool BINLevelUpResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINLevelUpResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINLevelUpResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINLevelUpResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINLevelUpResponse::responsecode() const {
  return responsecode_;
}
inline void BINLevelUpResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINLevelUpResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINLevelUpResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINLevelUpResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINLevelUpResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINLevelUpResponse::message() const {
  return *message_;
}
inline void BINLevelUpResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINLevelUpResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINLevelUpResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINLevelUpResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINLevelUpResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINLevelUpResponse::set_allocated_message(::std::string* message) {
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

// optional bool levelUp = 3;
inline bool BINLevelUpResponse::has_levelup() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINLevelUpResponse::set_has_levelup() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINLevelUpResponse::clear_has_levelup() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINLevelUpResponse::clear_levelup() {
  levelup_ = false;
  clear_has_levelup();
}
inline bool BINLevelUpResponse::levelup() const {
  return levelup_;
}
inline void BINLevelUpResponse::set_levelup(bool value) {
  set_has_levelup();
  levelup_ = value;
}

// optional int32 newLevel = 4;
inline bool BINLevelUpResponse::has_newlevel() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BINLevelUpResponse::set_has_newlevel() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BINLevelUpResponse::clear_has_newlevel() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BINLevelUpResponse::clear_newlevel() {
  newlevel_ = 0;
  clear_has_newlevel();
}
inline ::google::protobuf::int32 BINLevelUpResponse::newlevel() const {
  return newlevel_;
}
inline void BINLevelUpResponse::set_newlevel(::google::protobuf::int32 value) {
  set_has_newlevel();
  newlevel_ = value;
}

// optional int64 currentExp = 5;
inline bool BINLevelUpResponse::has_currentexp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BINLevelUpResponse::set_has_currentexp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BINLevelUpResponse::clear_has_currentexp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BINLevelUpResponse::clear_currentexp() {
  currentexp_ = GOOGLE_LONGLONG(0);
  clear_has_currentexp();
}
inline ::google::protobuf::int64 BINLevelUpResponse::currentexp() const {
  return currentexp_;
}
inline void BINLevelUpResponse::set_currentexp(::google::protobuf::int64 value) {
  set_has_currentexp();
  currentexp_ = value;
}

// optional int64 maxExp = 6;
inline bool BINLevelUpResponse::has_maxexp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BINLevelUpResponse::set_has_maxexp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BINLevelUpResponse::clear_has_maxexp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BINLevelUpResponse::clear_maxexp() {
  maxexp_ = GOOGLE_LONGLONG(0);
  clear_has_maxexp();
}
inline ::google::protobuf::int64 BINLevelUpResponse::maxexp() const {
  return maxexp_;
}
inline void BINLevelUpResponse::set_maxexp(::google::protobuf::int64 value) {
  set_has_maxexp();
  maxexp_ = value;
}

// -------------------------------------------------------------------

// BINMedalUpResponse

// required bool responseCode = 1;
inline bool BINMedalUpResponse::has_responsecode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BINMedalUpResponse::set_has_responsecode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BINMedalUpResponse::clear_has_responsecode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BINMedalUpResponse::clear_responsecode() {
  responsecode_ = false;
  clear_has_responsecode();
}
inline bool BINMedalUpResponse::responsecode() const {
  return responsecode_;
}
inline void BINMedalUpResponse::set_responsecode(bool value) {
  set_has_responsecode();
  responsecode_ = value;
}

// optional string message = 2;
inline bool BINMedalUpResponse::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BINMedalUpResponse::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BINMedalUpResponse::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BINMedalUpResponse::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& BINMedalUpResponse::message() const {
  return *message_;
}
inline void BINMedalUpResponse::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINMedalUpResponse::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void BINMedalUpResponse::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BINMedalUpResponse::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* BINMedalUpResponse::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BINMedalUpResponse::set_allocated_message(::std::string* message) {
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

// optional bool medalUp = 3;
inline bool BINMedalUpResponse::has_medalup() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BINMedalUpResponse::set_has_medalup() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BINMedalUpResponse::clear_has_medalup() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BINMedalUpResponse::clear_medalup() {
  medalup_ = false;
  clear_has_medalup();
}
inline bool BINMedalUpResponse::medalup() const {
  return medalup_;
}
inline void BINMedalUpResponse::set_medalup(bool value) {
  set_has_medalup();
  medalup_ = value;
}

// optional bool newMedal = 4;
inline bool BINMedalUpResponse::has_newmedal() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BINMedalUpResponse::set_has_newmedal() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BINMedalUpResponse::clear_has_newmedal() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BINMedalUpResponse::clear_newmedal() {
  newmedal_ = false;
  clear_has_newmedal();
}
inline bool BINMedalUpResponse::newmedal() const {
  return newmedal_;
}
inline void BINMedalUpResponse::set_newmedal(bool value) {
  set_has_newmedal();
  newmedal_ = value;
}

// optional int64 currentLevel = 5;
inline bool BINMedalUpResponse::has_currentlevel() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BINMedalUpResponse::set_has_currentlevel() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BINMedalUpResponse::clear_has_currentlevel() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BINMedalUpResponse::clear_currentlevel() {
  currentlevel_ = GOOGLE_LONGLONG(0);
  clear_has_currentlevel();
}
inline ::google::protobuf::int64 BINMedalUpResponse::currentlevel() const {
  return currentlevel_;
}
inline void BINMedalUpResponse::set_currentlevel(::google::protobuf::int64 value) {
  set_has_currentlevel();
  currentlevel_ = value;
}

// optional int64 maxLevel = 6;
inline bool BINMedalUpResponse::has_maxlevel() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BINMedalUpResponse::set_has_maxlevel() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BINMedalUpResponse::clear_has_maxlevel() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BINMedalUpResponse::clear_maxlevel() {
  maxlevel_ = GOOGLE_LONGLONG(0);
  clear_has_maxlevel();
}
inline ::google::protobuf::int64 BINMedalUpResponse::maxlevel() const {
  return maxlevel_;
}
inline void BINMedalUpResponse::set_maxlevel(::google::protobuf::int64 value) {
  set_has_maxlevel();
  maxlevel_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_level_2eproto__INCLUDED
