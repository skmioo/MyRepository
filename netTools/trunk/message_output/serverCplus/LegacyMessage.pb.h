// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LegacyMessage.proto

#ifndef PROTOBUF_LegacyMessage_2eproto__INCLUDED
#define PROTOBUF_LegacyMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
void  protobuf_AddDesc_LegacyMessage_2eproto();
void protobuf_AssignDesc_LegacyMessage_2eproto();
void protobuf_ShutdownFile_LegacyMessage_2eproto();

class LegacyData;
class CGLegacy;
class GCLegacy;
class CGLegacyBuyNum;

// ===================================================================

class LegacyData : public ::google::protobuf::Message {
 public:
  LegacyData();
  virtual ~LegacyData();

  LegacyData(const LegacyData& from);

  inline LegacyData& operator=(const LegacyData& from) {
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
  static const LegacyData& default_instance();

  void Swap(LegacyData* other);

  // implements Message ----------------------------------------------

  LegacyData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LegacyData& from);
  void MergeFrom(const LegacyData& from);
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

  // optional int32 legacyId = 1;
  inline bool has_legacyid() const;
  inline void clear_legacyid();
  static const int kLegacyIdFieldNumber = 1;
  inline ::google::protobuf::int32 legacyid() const;
  inline void set_legacyid(::google::protobuf::int32 value);

  // optional int32 tableId = 2;
  inline bool has_tableid() const;
  inline void clear_tableid();
  static const int kTableIdFieldNumber = 2;
  inline ::google::protobuf::int32 tableid() const;
  inline void set_tableid(::google::protobuf::int32 value);

  // optional int32 currentExp = 3;
  inline bool has_currentexp() const;
  inline void clear_currentexp();
  static const int kCurrentExpFieldNumber = 3;
  inline ::google::protobuf::int32 currentexp() const;
  inline void set_currentexp(::google::protobuf::int32 value);

  // optional int32 isOnBody = 4;
  inline bool has_isonbody() const;
  inline void clear_isonbody();
  static const int kIsOnBodyFieldNumber = 4;
  inline ::google::protobuf::int32 isonbody() const;
  inline void set_isonbody(::google::protobuf::int32 value);

  // optional int32 idxOfBody = 5;
  inline bool has_idxofbody() const;
  inline void clear_idxofbody();
  static const int kIdxOfBodyFieldNumber = 5;
  inline ::google::protobuf::int32 idxofbody() const;
  inline void set_idxofbody(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:LegacyData)
 private:
  inline void set_has_legacyid();
  inline void clear_has_legacyid();
  inline void set_has_tableid();
  inline void clear_has_tableid();
  inline void set_has_currentexp();
  inline void clear_has_currentexp();
  inline void set_has_isonbody();
  inline void clear_has_isonbody();
  inline void set_has_idxofbody();
  inline void clear_has_idxofbody();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 legacyid_;
  ::google::protobuf::int32 tableid_;
  ::google::protobuf::int32 currentexp_;
  ::google::protobuf::int32 isonbody_;
  ::google::protobuf::int32 idxofbody_;
  friend void  protobuf_AddDesc_LegacyMessage_2eproto();
  friend void protobuf_AssignDesc_LegacyMessage_2eproto();
  friend void protobuf_ShutdownFile_LegacyMessage_2eproto();

  void InitAsDefaultInstance();
  static LegacyData* default_instance_;
};
// -------------------------------------------------------------------

class CGLegacy : public ::google::protobuf::Message {
 public:
  CGLegacy();
  virtual ~CGLegacy();

  CGLegacy(const CGLegacy& from);

  inline CGLegacy& operator=(const CGLegacy& from) {
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
  static const CGLegacy& default_instance();

  void Swap(CGLegacy* other);

  // implements Message ----------------------------------------------

  CGLegacy* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CGLegacy& from);
  void MergeFrom(const CGLegacy& from);
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

  // optional int32 operate = 1;
  inline bool has_operate() const;
  inline void clear_operate();
  static const int kOperateFieldNumber = 1;
  inline ::google::protobuf::int32 operate() const;
  inline void set_operate(::google::protobuf::int32 value);

  // optional int32 legacyId = 2;
  inline bool has_legacyid() const;
  inline void clear_legacyid();
  static const int kLegacyIdFieldNumber = 2;
  inline ::google::protobuf::int32 legacyid() const;
  inline void set_legacyid(::google::protobuf::int32 value);

  // repeated int32 listLegacyId = 3;
  inline int listlegacyid_size() const;
  inline void clear_listlegacyid();
  static const int kListLegacyIdFieldNumber = 3;
  inline ::google::protobuf::int32 listlegacyid(int index) const;
  inline void set_listlegacyid(int index, ::google::protobuf::int32 value);
  inline void add_listlegacyid(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      listlegacyid() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_listlegacyid();

  // optional int32 flag = 4;
  inline bool has_flag() const;
  inline void clear_flag();
  static const int kFlagFieldNumber = 4;
  inline ::google::protobuf::int32 flag() const;
  inline void set_flag(::google::protobuf::int32 value);

  // optional int32 state = 5;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 5;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CGLegacy)
 private:
  inline void set_has_operate();
  inline void clear_has_operate();
  inline void set_has_legacyid();
  inline void clear_has_legacyid();
  inline void set_has_flag();
  inline void clear_has_flag();
  inline void set_has_state();
  inline void clear_has_state();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 operate_;
  ::google::protobuf::int32 legacyid_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > listlegacyid_;
  ::google::protobuf::int32 flag_;
  ::google::protobuf::int32 state_;
  friend void  protobuf_AddDesc_LegacyMessage_2eproto();
  friend void protobuf_AssignDesc_LegacyMessage_2eproto();
  friend void protobuf_ShutdownFile_LegacyMessage_2eproto();

  void InitAsDefaultInstance();
  static CGLegacy* default_instance_;
};
// -------------------------------------------------------------------

class GCLegacy : public ::google::protobuf::Message {
 public:
  GCLegacy();
  virtual ~GCLegacy();

  GCLegacy(const GCLegacy& from);

  inline GCLegacy& operator=(const GCLegacy& from) {
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
  static const GCLegacy& default_instance();

  void Swap(GCLegacy* other);

  // implements Message ----------------------------------------------

  GCLegacy* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GCLegacy& from);
  void MergeFrom(const GCLegacy& from);
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

  // optional int32 operate = 1;
  inline bool has_operate() const;
  inline void clear_operate();
  static const int kOperateFieldNumber = 1;
  inline ::google::protobuf::int32 operate() const;
  inline void set_operate(::google::protobuf::int32 value);

  // optional int32 fightValue = 2;
  inline bool has_fightvalue() const;
  inline void clear_fightvalue();
  static const int kFightValueFieldNumber = 2;
  inline ::google::protobuf::int32 fightvalue() const;
  inline void set_fightvalue(::google::protobuf::int32 value);

  // repeated .LegacyData listOnBody = 3;
  inline int listonbody_size() const;
  inline void clear_listonbody();
  static const int kListOnBodyFieldNumber = 3;
  inline const ::LegacyData& listonbody(int index) const;
  inline ::LegacyData* mutable_listonbody(int index);
  inline ::LegacyData* add_listonbody();
  inline const ::google::protobuf::RepeatedPtrField< ::LegacyData >&
      listonbody() const;
  inline ::google::protobuf::RepeatedPtrField< ::LegacyData >*
      mutable_listonbody();

  // repeated .LegacyData listInBag = 4;
  inline int listinbag_size() const;
  inline void clear_listinbag();
  static const int kListInBagFieldNumber = 4;
  inline const ::LegacyData& listinbag(int index) const;
  inline ::LegacyData* mutable_listinbag(int index);
  inline ::LegacyData* add_listinbag();
  inline const ::google::protobuf::RepeatedPtrField< ::LegacyData >&
      listinbag() const;
  inline ::google::protobuf::RepeatedPtrField< ::LegacyData >*
      mutable_listinbag();

  // optional int32 result = 5;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 5;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // optional .LegacyData legacy = 6;
  inline bool has_legacy() const;
  inline void clear_legacy();
  static const int kLegacyFieldNumber = 6;
  inline const ::LegacyData& legacy() const;
  inline ::LegacyData* mutable_legacy();
  inline ::LegacyData* release_legacy();
  inline void set_allocated_legacy(::LegacyData* legacy);

  // repeated .LegacyData listInDepot = 7;
  inline int listindepot_size() const;
  inline void clear_listindepot();
  static const int kListInDepotFieldNumber = 7;
  inline const ::LegacyData& listindepot(int index) const;
  inline ::LegacyData* mutable_listindepot(int index);
  inline ::LegacyData* add_listindepot();
  inline const ::google::protobuf::RepeatedPtrField< ::LegacyData >&
      listindepot() const;
  inline ::google::protobuf::RepeatedPtrField< ::LegacyData >*
      mutable_listindepot();

  // optional int32 drawId = 8;
  inline bool has_drawid() const;
  inline void clear_drawid();
  static const int kDrawIdFieldNumber = 8;
  inline ::google::protobuf::int32 drawid() const;
  inline void set_drawid(::google::protobuf::int32 value);

  // optional int32 haveMoneyNum = 9;
  inline bool has_havemoneynum() const;
  inline void clear_havemoneynum();
  static const int kHaveMoneyNumFieldNumber = 9;
  inline ::google::protobuf::int32 havemoneynum() const;
  inline void set_havemoneynum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GCLegacy)
 private:
  inline void set_has_operate();
  inline void clear_has_operate();
  inline void set_has_fightvalue();
  inline void clear_has_fightvalue();
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_legacy();
  inline void clear_has_legacy();
  inline void set_has_drawid();
  inline void clear_has_drawid();
  inline void set_has_havemoneynum();
  inline void clear_has_havemoneynum();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 operate_;
  ::google::protobuf::int32 fightvalue_;
  ::google::protobuf::RepeatedPtrField< ::LegacyData > listonbody_;
  ::google::protobuf::RepeatedPtrField< ::LegacyData > listinbag_;
  ::LegacyData* legacy_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 drawid_;
  ::google::protobuf::RepeatedPtrField< ::LegacyData > listindepot_;
  ::google::protobuf::int32 havemoneynum_;
  friend void  protobuf_AddDesc_LegacyMessage_2eproto();
  friend void protobuf_AssignDesc_LegacyMessage_2eproto();
  friend void protobuf_ShutdownFile_LegacyMessage_2eproto();

  void InitAsDefaultInstance();
  static GCLegacy* default_instance_;
};
// -------------------------------------------------------------------

class CGLegacyBuyNum : public ::google::protobuf::Message {
 public:
  CGLegacyBuyNum();
  virtual ~CGLegacyBuyNum();

  CGLegacyBuyNum(const CGLegacyBuyNum& from);

  inline CGLegacyBuyNum& operator=(const CGLegacyBuyNum& from) {
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
  static const CGLegacyBuyNum& default_instance();

  void Swap(CGLegacyBuyNum* other);

  // implements Message ----------------------------------------------

  CGLegacyBuyNum* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CGLegacyBuyNum& from);
  void MergeFrom(const CGLegacyBuyNum& from);
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

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CGLegacyBuyNum)
 private:
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 type_;
  friend void  protobuf_AddDesc_LegacyMessage_2eproto();
  friend void protobuf_AssignDesc_LegacyMessage_2eproto();
  friend void protobuf_ShutdownFile_LegacyMessage_2eproto();

  void InitAsDefaultInstance();
  static CGLegacyBuyNum* default_instance_;
};
// ===================================================================


// ===================================================================

// LegacyData

// optional int32 legacyId = 1;
inline bool LegacyData::has_legacyid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LegacyData::set_has_legacyid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LegacyData::clear_has_legacyid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LegacyData::clear_legacyid() {
  legacyid_ = 0;
  clear_has_legacyid();
}
inline ::google::protobuf::int32 LegacyData::legacyid() const {
  // @@protoc_insertion_point(field_get:LegacyData.legacyId)
  return legacyid_;
}
inline void LegacyData::set_legacyid(::google::protobuf::int32 value) {
  set_has_legacyid();
  legacyid_ = value;
  // @@protoc_insertion_point(field_set:LegacyData.legacyId)
}

// optional int32 tableId = 2;
inline bool LegacyData::has_tableid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LegacyData::set_has_tableid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LegacyData::clear_has_tableid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LegacyData::clear_tableid() {
  tableid_ = 0;
  clear_has_tableid();
}
inline ::google::protobuf::int32 LegacyData::tableid() const {
  // @@protoc_insertion_point(field_get:LegacyData.tableId)
  return tableid_;
}
inline void LegacyData::set_tableid(::google::protobuf::int32 value) {
  set_has_tableid();
  tableid_ = value;
  // @@protoc_insertion_point(field_set:LegacyData.tableId)
}

// optional int32 currentExp = 3;
inline bool LegacyData::has_currentexp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LegacyData::set_has_currentexp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LegacyData::clear_has_currentexp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LegacyData::clear_currentexp() {
  currentexp_ = 0;
  clear_has_currentexp();
}
inline ::google::protobuf::int32 LegacyData::currentexp() const {
  // @@protoc_insertion_point(field_get:LegacyData.currentExp)
  return currentexp_;
}
inline void LegacyData::set_currentexp(::google::protobuf::int32 value) {
  set_has_currentexp();
  currentexp_ = value;
  // @@protoc_insertion_point(field_set:LegacyData.currentExp)
}

// optional int32 isOnBody = 4;
inline bool LegacyData::has_isonbody() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LegacyData::set_has_isonbody() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LegacyData::clear_has_isonbody() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LegacyData::clear_isonbody() {
  isonbody_ = 0;
  clear_has_isonbody();
}
inline ::google::protobuf::int32 LegacyData::isonbody() const {
  // @@protoc_insertion_point(field_get:LegacyData.isOnBody)
  return isonbody_;
}
inline void LegacyData::set_isonbody(::google::protobuf::int32 value) {
  set_has_isonbody();
  isonbody_ = value;
  // @@protoc_insertion_point(field_set:LegacyData.isOnBody)
}

// optional int32 idxOfBody = 5;
inline bool LegacyData::has_idxofbody() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LegacyData::set_has_idxofbody() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LegacyData::clear_has_idxofbody() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LegacyData::clear_idxofbody() {
  idxofbody_ = 0;
  clear_has_idxofbody();
}
inline ::google::protobuf::int32 LegacyData::idxofbody() const {
  // @@protoc_insertion_point(field_get:LegacyData.idxOfBody)
  return idxofbody_;
}
inline void LegacyData::set_idxofbody(::google::protobuf::int32 value) {
  set_has_idxofbody();
  idxofbody_ = value;
  // @@protoc_insertion_point(field_set:LegacyData.idxOfBody)
}

// -------------------------------------------------------------------

// CGLegacy

// optional int32 operate = 1;
inline bool CGLegacy::has_operate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CGLegacy::set_has_operate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CGLegacy::clear_has_operate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CGLegacy::clear_operate() {
  operate_ = 0;
  clear_has_operate();
}
inline ::google::protobuf::int32 CGLegacy::operate() const {
  // @@protoc_insertion_point(field_get:CGLegacy.operate)
  return operate_;
}
inline void CGLegacy::set_operate(::google::protobuf::int32 value) {
  set_has_operate();
  operate_ = value;
  // @@protoc_insertion_point(field_set:CGLegacy.operate)
}

// optional int32 legacyId = 2;
inline bool CGLegacy::has_legacyid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CGLegacy::set_has_legacyid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CGLegacy::clear_has_legacyid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CGLegacy::clear_legacyid() {
  legacyid_ = 0;
  clear_has_legacyid();
}
inline ::google::protobuf::int32 CGLegacy::legacyid() const {
  // @@protoc_insertion_point(field_get:CGLegacy.legacyId)
  return legacyid_;
}
inline void CGLegacy::set_legacyid(::google::protobuf::int32 value) {
  set_has_legacyid();
  legacyid_ = value;
  // @@protoc_insertion_point(field_set:CGLegacy.legacyId)
}

// repeated int32 listLegacyId = 3;
inline int CGLegacy::listlegacyid_size() const {
  return listlegacyid_.size();
}
inline void CGLegacy::clear_listlegacyid() {
  listlegacyid_.Clear();
}
inline ::google::protobuf::int32 CGLegacy::listlegacyid(int index) const {
  // @@protoc_insertion_point(field_get:CGLegacy.listLegacyId)
  return listlegacyid_.Get(index);
}
inline void CGLegacy::set_listlegacyid(int index, ::google::protobuf::int32 value) {
  listlegacyid_.Set(index, value);
  // @@protoc_insertion_point(field_set:CGLegacy.listLegacyId)
}
inline void CGLegacy::add_listlegacyid(::google::protobuf::int32 value) {
  listlegacyid_.Add(value);
  // @@protoc_insertion_point(field_add:CGLegacy.listLegacyId)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CGLegacy::listlegacyid() const {
  // @@protoc_insertion_point(field_list:CGLegacy.listLegacyId)
  return listlegacyid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CGLegacy::mutable_listlegacyid() {
  // @@protoc_insertion_point(field_mutable_list:CGLegacy.listLegacyId)
  return &listlegacyid_;
}

// optional int32 flag = 4;
inline bool CGLegacy::has_flag() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CGLegacy::set_has_flag() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CGLegacy::clear_has_flag() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CGLegacy::clear_flag() {
  flag_ = 0;
  clear_has_flag();
}
inline ::google::protobuf::int32 CGLegacy::flag() const {
  // @@protoc_insertion_point(field_get:CGLegacy.flag)
  return flag_;
}
inline void CGLegacy::set_flag(::google::protobuf::int32 value) {
  set_has_flag();
  flag_ = value;
  // @@protoc_insertion_point(field_set:CGLegacy.flag)
}

// optional int32 state = 5;
inline bool CGLegacy::has_state() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CGLegacy::set_has_state() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CGLegacy::clear_has_state() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CGLegacy::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::google::protobuf::int32 CGLegacy::state() const {
  // @@protoc_insertion_point(field_get:CGLegacy.state)
  return state_;
}
inline void CGLegacy::set_state(::google::protobuf::int32 value) {
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:CGLegacy.state)
}

// -------------------------------------------------------------------

// GCLegacy

// optional int32 operate = 1;
inline bool GCLegacy::has_operate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GCLegacy::set_has_operate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GCLegacy::clear_has_operate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GCLegacy::clear_operate() {
  operate_ = 0;
  clear_has_operate();
}
inline ::google::protobuf::int32 GCLegacy::operate() const {
  // @@protoc_insertion_point(field_get:GCLegacy.operate)
  return operate_;
}
inline void GCLegacy::set_operate(::google::protobuf::int32 value) {
  set_has_operate();
  operate_ = value;
  // @@protoc_insertion_point(field_set:GCLegacy.operate)
}

// optional int32 fightValue = 2;
inline bool GCLegacy::has_fightvalue() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GCLegacy::set_has_fightvalue() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GCLegacy::clear_has_fightvalue() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GCLegacy::clear_fightvalue() {
  fightvalue_ = 0;
  clear_has_fightvalue();
}
inline ::google::protobuf::int32 GCLegacy::fightvalue() const {
  // @@protoc_insertion_point(field_get:GCLegacy.fightValue)
  return fightvalue_;
}
inline void GCLegacy::set_fightvalue(::google::protobuf::int32 value) {
  set_has_fightvalue();
  fightvalue_ = value;
  // @@protoc_insertion_point(field_set:GCLegacy.fightValue)
}

// repeated .LegacyData listOnBody = 3;
inline int GCLegacy::listonbody_size() const {
  return listonbody_.size();
}
inline void GCLegacy::clear_listonbody() {
  listonbody_.Clear();
}
inline const ::LegacyData& GCLegacy::listonbody(int index) const {
  // @@protoc_insertion_point(field_get:GCLegacy.listOnBody)
  return listonbody_.Get(index);
}
inline ::LegacyData* GCLegacy::mutable_listonbody(int index) {
  // @@protoc_insertion_point(field_mutable:GCLegacy.listOnBody)
  return listonbody_.Mutable(index);
}
inline ::LegacyData* GCLegacy::add_listonbody() {
  // @@protoc_insertion_point(field_add:GCLegacy.listOnBody)
  return listonbody_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::LegacyData >&
GCLegacy::listonbody() const {
  // @@protoc_insertion_point(field_list:GCLegacy.listOnBody)
  return listonbody_;
}
inline ::google::protobuf::RepeatedPtrField< ::LegacyData >*
GCLegacy::mutable_listonbody() {
  // @@protoc_insertion_point(field_mutable_list:GCLegacy.listOnBody)
  return &listonbody_;
}

// repeated .LegacyData listInBag = 4;
inline int GCLegacy::listinbag_size() const {
  return listinbag_.size();
}
inline void GCLegacy::clear_listinbag() {
  listinbag_.Clear();
}
inline const ::LegacyData& GCLegacy::listinbag(int index) const {
  // @@protoc_insertion_point(field_get:GCLegacy.listInBag)
  return listinbag_.Get(index);
}
inline ::LegacyData* GCLegacy::mutable_listinbag(int index) {
  // @@protoc_insertion_point(field_mutable:GCLegacy.listInBag)
  return listinbag_.Mutable(index);
}
inline ::LegacyData* GCLegacy::add_listinbag() {
  // @@protoc_insertion_point(field_add:GCLegacy.listInBag)
  return listinbag_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::LegacyData >&
GCLegacy::listinbag() const {
  // @@protoc_insertion_point(field_list:GCLegacy.listInBag)
  return listinbag_;
}
inline ::google::protobuf::RepeatedPtrField< ::LegacyData >*
GCLegacy::mutable_listinbag() {
  // @@protoc_insertion_point(field_mutable_list:GCLegacy.listInBag)
  return &listinbag_;
}

// optional int32 result = 5;
inline bool GCLegacy::has_result() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GCLegacy::set_has_result() {
  _has_bits_[0] |= 0x00000010u;
}
inline void GCLegacy::clear_has_result() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void GCLegacy::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 GCLegacy::result() const {
  // @@protoc_insertion_point(field_get:GCLegacy.result)
  return result_;
}
inline void GCLegacy::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:GCLegacy.result)
}

// optional .LegacyData legacy = 6;
inline bool GCLegacy::has_legacy() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void GCLegacy::set_has_legacy() {
  _has_bits_[0] |= 0x00000020u;
}
inline void GCLegacy::clear_has_legacy() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void GCLegacy::clear_legacy() {
  if (legacy_ != NULL) legacy_->::LegacyData::Clear();
  clear_has_legacy();
}
inline const ::LegacyData& GCLegacy::legacy() const {
  // @@protoc_insertion_point(field_get:GCLegacy.legacy)
  return legacy_ != NULL ? *legacy_ : *default_instance_->legacy_;
}
inline ::LegacyData* GCLegacy::mutable_legacy() {
  set_has_legacy();
  if (legacy_ == NULL) legacy_ = new ::LegacyData;
  // @@protoc_insertion_point(field_mutable:GCLegacy.legacy)
  return legacy_;
}
inline ::LegacyData* GCLegacy::release_legacy() {
  clear_has_legacy();
  ::LegacyData* temp = legacy_;
  legacy_ = NULL;
  return temp;
}
inline void GCLegacy::set_allocated_legacy(::LegacyData* legacy) {
  delete legacy_;
  legacy_ = legacy;
  if (legacy) {
    set_has_legacy();
  } else {
    clear_has_legacy();
  }
  // @@protoc_insertion_point(field_set_allocated:GCLegacy.legacy)
}

// repeated .LegacyData listInDepot = 7;
inline int GCLegacy::listindepot_size() const {
  return listindepot_.size();
}
inline void GCLegacy::clear_listindepot() {
  listindepot_.Clear();
}
inline const ::LegacyData& GCLegacy::listindepot(int index) const {
  // @@protoc_insertion_point(field_get:GCLegacy.listInDepot)
  return listindepot_.Get(index);
}
inline ::LegacyData* GCLegacy::mutable_listindepot(int index) {
  // @@protoc_insertion_point(field_mutable:GCLegacy.listInDepot)
  return listindepot_.Mutable(index);
}
inline ::LegacyData* GCLegacy::add_listindepot() {
  // @@protoc_insertion_point(field_add:GCLegacy.listInDepot)
  return listindepot_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::LegacyData >&
GCLegacy::listindepot() const {
  // @@protoc_insertion_point(field_list:GCLegacy.listInDepot)
  return listindepot_;
}
inline ::google::protobuf::RepeatedPtrField< ::LegacyData >*
GCLegacy::mutable_listindepot() {
  // @@protoc_insertion_point(field_mutable_list:GCLegacy.listInDepot)
  return &listindepot_;
}

// optional int32 drawId = 8;
inline bool GCLegacy::has_drawid() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void GCLegacy::set_has_drawid() {
  _has_bits_[0] |= 0x00000080u;
}
inline void GCLegacy::clear_has_drawid() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void GCLegacy::clear_drawid() {
  drawid_ = 0;
  clear_has_drawid();
}
inline ::google::protobuf::int32 GCLegacy::drawid() const {
  // @@protoc_insertion_point(field_get:GCLegacy.drawId)
  return drawid_;
}
inline void GCLegacy::set_drawid(::google::protobuf::int32 value) {
  set_has_drawid();
  drawid_ = value;
  // @@protoc_insertion_point(field_set:GCLegacy.drawId)
}

// optional int32 haveMoneyNum = 9;
inline bool GCLegacy::has_havemoneynum() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void GCLegacy::set_has_havemoneynum() {
  _has_bits_[0] |= 0x00000100u;
}
inline void GCLegacy::clear_has_havemoneynum() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void GCLegacy::clear_havemoneynum() {
  havemoneynum_ = 0;
  clear_has_havemoneynum();
}
inline ::google::protobuf::int32 GCLegacy::havemoneynum() const {
  // @@protoc_insertion_point(field_get:GCLegacy.haveMoneyNum)
  return havemoneynum_;
}
inline void GCLegacy::set_havemoneynum(::google::protobuf::int32 value) {
  set_has_havemoneynum();
  havemoneynum_ = value;
  // @@protoc_insertion_point(field_set:GCLegacy.haveMoneyNum)
}

// -------------------------------------------------------------------

// CGLegacyBuyNum

// optional int32 type = 1;
inline bool CGLegacyBuyNum::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CGLegacyBuyNum::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CGLegacyBuyNum::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CGLegacyBuyNum::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 CGLegacyBuyNum::type() const {
  // @@protoc_insertion_point(field_get:CGLegacyBuyNum.type)
  return type_;
}
inline void CGLegacyBuyNum::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:CGLegacyBuyNum.type)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LegacyMessage_2eproto__INCLUDED
