// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_3d/proto/motion_filter_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_3d/proto/motion_filter_options.pb.h"

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

namespace cartographer {
namespace mapping_3d {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* MotionFilterOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MotionFilterOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_3d/proto/motion_filter_options.proto");
  GOOGLE_CHECK(file != NULL);
  MotionFilterOptions_descriptor_ = file->message_type(0);
  static const int MotionFilterOptions_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionFilterOptions, max_time_seconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionFilterOptions, max_distance_meters_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionFilterOptions, max_angle_radians_),
  };
  MotionFilterOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MotionFilterOptions_descriptor_,
      MotionFilterOptions::default_instance_,
      MotionFilterOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionFilterOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MotionFilterOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MotionFilterOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MotionFilterOptions_descriptor_, &MotionFilterOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto() {
  delete MotionFilterOptions::default_instance_;
  delete MotionFilterOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n9cartographer/mapping_3d/proto/motion_f"
    "ilter_options.proto\022\035cartographer.mappin"
    "g_3d.proto\"g\n\023MotionFilterOptions\022\030\n\020max"
    "_time_seconds\030\001 \001(\001\022\033\n\023max_distance_mete"
    "rs\030\002 \001(\001\022\031\n\021max_angle_radians\030\003 \001(\001", 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_3d/proto/motion_filter_options.proto", &protobuf_RegisterTypes);
  MotionFilterOptions::default_instance_ = new MotionFilterOptions();
  MotionFilterOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MotionFilterOptions::kMaxTimeSecondsFieldNumber;
const int MotionFilterOptions::kMaxDistanceMetersFieldNumber;
const int MotionFilterOptions::kMaxAngleRadiansFieldNumber;
#endif  // !_MSC_VER

MotionFilterOptions::MotionFilterOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MotionFilterOptions::InitAsDefaultInstance() {
}

MotionFilterOptions::MotionFilterOptions(const MotionFilterOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MotionFilterOptions::SharedCtor() {
  _cached_size_ = 0;
  max_time_seconds_ = 0;
  max_distance_meters_ = 0;
  max_angle_radians_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MotionFilterOptions::~MotionFilterOptions() {
  SharedDtor();
}

void MotionFilterOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MotionFilterOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MotionFilterOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MotionFilterOptions_descriptor_;
}

const MotionFilterOptions& MotionFilterOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto();
  return *default_instance_;
}

MotionFilterOptions* MotionFilterOptions::default_instance_ = NULL;

MotionFilterOptions* MotionFilterOptions::New() const {
  return new MotionFilterOptions;
}

void MotionFilterOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    max_time_seconds_ = 0;
    max_distance_meters_ = 0;
    max_angle_radians_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MotionFilterOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double max_time_seconds = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_time_seconds_)));
          set_has_max_time_seconds();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_max_distance_meters;
        break;
      }

      // optional double max_distance_meters = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_max_distance_meters:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_distance_meters_)));
          set_has_max_distance_meters();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_max_angle_radians;
        break;
      }

      // optional double max_angle_radians = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_max_angle_radians:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_angle_radians_)));
          set_has_max_angle_radians();
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

void MotionFilterOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double max_time_seconds = 1;
  if (has_max_time_seconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->max_time_seconds(), output);
  }

  // optional double max_distance_meters = 2;
  if (has_max_distance_meters()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->max_distance_meters(), output);
  }

  // optional double max_angle_radians = 3;
  if (has_max_angle_radians()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->max_angle_radians(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MotionFilterOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double max_time_seconds = 1;
  if (has_max_time_seconds()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->max_time_seconds(), target);
  }

  // optional double max_distance_meters = 2;
  if (has_max_distance_meters()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->max_distance_meters(), target);
  }

  // optional double max_angle_radians = 3;
  if (has_max_angle_radians()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->max_angle_radians(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MotionFilterOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double max_time_seconds = 1;
    if (has_max_time_seconds()) {
      total_size += 1 + 8;
    }

    // optional double max_distance_meters = 2;
    if (has_max_distance_meters()) {
      total_size += 1 + 8;
    }

    // optional double max_angle_radians = 3;
    if (has_max_angle_radians()) {
      total_size += 1 + 8;
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

void MotionFilterOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MotionFilterOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MotionFilterOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MotionFilterOptions::MergeFrom(const MotionFilterOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_max_time_seconds()) {
      set_max_time_seconds(from.max_time_seconds());
    }
    if (from.has_max_distance_meters()) {
      set_max_distance_meters(from.max_distance_meters());
    }
    if (from.has_max_angle_radians()) {
      set_max_angle_radians(from.max_angle_radians());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MotionFilterOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MotionFilterOptions::CopyFrom(const MotionFilterOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MotionFilterOptions::IsInitialized() const {

  return true;
}

void MotionFilterOptions::Swap(MotionFilterOptions* other) {
  if (other != this) {
    std::swap(max_time_seconds_, other->max_time_seconds_);
    std::swap(max_distance_meters_, other->max_distance_meters_);
    std::swap(max_angle_radians_, other->max_angle_radians_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MotionFilterOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MotionFilterOptions_descriptor_;
  metadata.reflection = MotionFilterOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_3d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
