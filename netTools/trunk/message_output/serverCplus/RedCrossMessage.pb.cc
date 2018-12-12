// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RedCrossMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RedCrossMessage.pb.h"

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

const ::google::protobuf::Descriptor* GCBackRedCrossData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GCBackRedCrossData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RedCrossMessage_2eproto() {
  protobuf_AddDesc_RedCrossMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RedCrossMessage.proto");
  GOOGLE_CHECK(file != NULL);
  GCBackRedCrossData_descriptor_ = file->message_type(0);
  static const int GCBackRedCrossData_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GCBackRedCrossData, redcross_),
  };
  GCBackRedCrossData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GCBackRedCrossData_descriptor_,
      GCBackRedCrossData::default_instance_,
      GCBackRedCrossData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GCBackRedCrossData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GCBackRedCrossData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GCBackRedCrossData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RedCrossMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GCBackRedCrossData_descriptor_, &GCBackRedCrossData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RedCrossMessage_2eproto() {
  delete GCBackRedCrossData::default_instance_;
  delete GCBackRedCrossData_reflection_;
}

void protobuf_AddDesc_RedCrossMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_InnerMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025RedCrossMessage.proto\032\022InnerMessage.pr"
    "oto\"1\n\022GCBackRedCrossData\022\033\n\010redcross\030\001 "
    "\003(\0132\t.RedCrossB\031\n\027com.mile.common.messag"
    "e", 121);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RedCrossMessage.proto", &protobuf_RegisterTypes);
  GCBackRedCrossData::default_instance_ = new GCBackRedCrossData();
  GCBackRedCrossData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RedCrossMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RedCrossMessage_2eproto {
  StaticDescriptorInitializer_RedCrossMessage_2eproto() {
    protobuf_AddDesc_RedCrossMessage_2eproto();
  }
} static_descriptor_initializer_RedCrossMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int GCBackRedCrossData::kRedcrossFieldNumber;
#endif  // !_MSC_VER

GCBackRedCrossData::GCBackRedCrossData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:GCBackRedCrossData)
}

void GCBackRedCrossData::InitAsDefaultInstance() {
}

GCBackRedCrossData::GCBackRedCrossData(const GCBackRedCrossData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:GCBackRedCrossData)
}

void GCBackRedCrossData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GCBackRedCrossData::~GCBackRedCrossData() {
  // @@protoc_insertion_point(destructor:GCBackRedCrossData)
  SharedDtor();
}

void GCBackRedCrossData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GCBackRedCrossData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GCBackRedCrossData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GCBackRedCrossData_descriptor_;
}

const GCBackRedCrossData& GCBackRedCrossData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RedCrossMessage_2eproto();
  return *default_instance_;
}

GCBackRedCrossData* GCBackRedCrossData::default_instance_ = NULL;

GCBackRedCrossData* GCBackRedCrossData::New() const {
  return new GCBackRedCrossData;
}

void GCBackRedCrossData::Clear() {
  redcross_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GCBackRedCrossData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GCBackRedCrossData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .RedCross redcross = 1;
      case 1: {
        if (tag == 10) {
         parse_redcross:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_redcross()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_redcross;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GCBackRedCrossData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GCBackRedCrossData)
  return false;
#undef DO_
}

void GCBackRedCrossData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GCBackRedCrossData)
  // repeated .RedCross redcross = 1;
  for (int i = 0; i < this->redcross_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->redcross(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GCBackRedCrossData)
}

::google::protobuf::uint8* GCBackRedCrossData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:GCBackRedCrossData)
  // repeated .RedCross redcross = 1;
  for (int i = 0; i < this->redcross_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->redcross(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GCBackRedCrossData)
  return target;
}

int GCBackRedCrossData::ByteSize() const {
  int total_size = 0;

  // repeated .RedCross redcross = 1;
  total_size += 1 * this->redcross_size();
  for (int i = 0; i < this->redcross_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->redcross(i));
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

void GCBackRedCrossData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GCBackRedCrossData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GCBackRedCrossData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GCBackRedCrossData::MergeFrom(const GCBackRedCrossData& from) {
  GOOGLE_CHECK_NE(&from, this);
  redcross_.MergeFrom(from.redcross_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GCBackRedCrossData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GCBackRedCrossData::CopyFrom(const GCBackRedCrossData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GCBackRedCrossData::IsInitialized() const {

  return true;
}

void GCBackRedCrossData::Swap(GCBackRedCrossData* other) {
  if (other != this) {
    redcross_.Swap(&other->redcross_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GCBackRedCrossData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GCBackRedCrossData_descriptor_;
  metadata.reflection = GCBackRedCrossData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)