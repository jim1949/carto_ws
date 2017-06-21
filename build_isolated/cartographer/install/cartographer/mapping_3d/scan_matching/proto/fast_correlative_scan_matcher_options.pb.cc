// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_3d/scan_matching/proto/fast_correlative_scan_matcher_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_3d/scan_matching/proto/fast_correlative_scan_matcher_options.pb.h"

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
namespace scan_matching {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* FastCorrelativeScanMatcherOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FastCorrelativeScanMatcherOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_3d/scan_matching/proto/fast_correlative_scan_matcher_options.proto");
  GOOGLE_CHECK(file != NULL);
  FastCorrelativeScanMatcherOptions_descriptor_ = file->message_type(0);
  static const int FastCorrelativeScanMatcherOptions_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, branch_and_bound_depth_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, full_resolution_depth_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, rotational_histogram_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, min_rotational_score_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, linear_xy_search_window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, linear_z_search_window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, angular_search_window_),
  };
  FastCorrelativeScanMatcherOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FastCorrelativeScanMatcherOptions_descriptor_,
      FastCorrelativeScanMatcherOptions::default_instance_,
      FastCorrelativeScanMatcherOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FastCorrelativeScanMatcherOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FastCorrelativeScanMatcherOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FastCorrelativeScanMatcherOptions_descriptor_, &FastCorrelativeScanMatcherOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
  delete FastCorrelativeScanMatcherOptions::default_instance_;
  delete FastCorrelativeScanMatcherOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nWcartographer/mapping_3d/scan_matching/"
    "proto/fast_correlative_scan_matcher_opti"
    "ons.proto\022+cartographer.mapping_3d.scan_"
    "matching.proto\"\203\002\n!FastCorrelativeScanMa"
    "tcherOptions\022\036\n\026branch_and_bound_depth\030\002"
    " \001(\005\022\035\n\025full_resolution_depth\030\010 \001(\005\022!\n\031r"
    "otational_histogram_size\030\003 \001(\005\022\034\n\024min_ro"
    "tational_score\030\004 \001(\001\022\037\n\027linear_xy_search"
    "_window\030\005 \001(\001\022\036\n\026linear_z_search_window\030"
    "\006 \001(\001\022\035\n\025angular_search_window\030\007 \001(\001", 396);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_3d/scan_matching/proto/fast_correlative_scan_matcher_options.proto", &protobuf_RegisterTypes);
  FastCorrelativeScanMatcherOptions::default_instance_ = new FastCorrelativeScanMatcherOptions();
  FastCorrelativeScanMatcherOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int FastCorrelativeScanMatcherOptions::kBranchAndBoundDepthFieldNumber;
const int FastCorrelativeScanMatcherOptions::kFullResolutionDepthFieldNumber;
const int FastCorrelativeScanMatcherOptions::kRotationalHistogramSizeFieldNumber;
const int FastCorrelativeScanMatcherOptions::kMinRotationalScoreFieldNumber;
const int FastCorrelativeScanMatcherOptions::kLinearXySearchWindowFieldNumber;
const int FastCorrelativeScanMatcherOptions::kLinearZSearchWindowFieldNumber;
const int FastCorrelativeScanMatcherOptions::kAngularSearchWindowFieldNumber;
#endif  // !_MSC_VER

FastCorrelativeScanMatcherOptions::FastCorrelativeScanMatcherOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FastCorrelativeScanMatcherOptions::InitAsDefaultInstance() {
}

FastCorrelativeScanMatcherOptions::FastCorrelativeScanMatcherOptions(const FastCorrelativeScanMatcherOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FastCorrelativeScanMatcherOptions::SharedCtor() {
  _cached_size_ = 0;
  branch_and_bound_depth_ = 0;
  full_resolution_depth_ = 0;
  rotational_histogram_size_ = 0;
  min_rotational_score_ = 0;
  linear_xy_search_window_ = 0;
  linear_z_search_window_ = 0;
  angular_search_window_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FastCorrelativeScanMatcherOptions::~FastCorrelativeScanMatcherOptions() {
  SharedDtor();
}

void FastCorrelativeScanMatcherOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FastCorrelativeScanMatcherOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FastCorrelativeScanMatcherOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FastCorrelativeScanMatcherOptions_descriptor_;
}

const FastCorrelativeScanMatcherOptions& FastCorrelativeScanMatcherOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2ffast_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  return *default_instance_;
}

FastCorrelativeScanMatcherOptions* FastCorrelativeScanMatcherOptions::default_instance_ = NULL;

FastCorrelativeScanMatcherOptions* FastCorrelativeScanMatcherOptions::New() const {
  return new FastCorrelativeScanMatcherOptions;
}

void FastCorrelativeScanMatcherOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    branch_and_bound_depth_ = 0;
    full_resolution_depth_ = 0;
    rotational_histogram_size_ = 0;
    min_rotational_score_ = 0;
    linear_xy_search_window_ = 0;
    linear_z_search_window_ = 0;
    angular_search_window_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FastCorrelativeScanMatcherOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 branch_and_bound_depth = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &branch_and_bound_depth_)));
          set_has_branch_and_bound_depth();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_rotational_histogram_size;
        break;
      }

      // optional int32 rotational_histogram_size = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rotational_histogram_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rotational_histogram_size_)));
          set_has_rotational_histogram_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_min_rotational_score;
        break;
      }

      // optional double min_rotational_score = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_min_rotational_score:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_rotational_score_)));
          set_has_min_rotational_score();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(41)) goto parse_linear_xy_search_window;
        break;
      }

      // optional double linear_xy_search_window = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_linear_xy_search_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &linear_xy_search_window_)));
          set_has_linear_xy_search_window();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(49)) goto parse_linear_z_search_window;
        break;
      }

      // optional double linear_z_search_window = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_linear_z_search_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &linear_z_search_window_)));
          set_has_linear_z_search_window();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(57)) goto parse_angular_search_window;
        break;
      }

      // optional double angular_search_window = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_angular_search_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angular_search_window_)));
          set_has_angular_search_window();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_full_resolution_depth;
        break;
      }

      // optional int32 full_resolution_depth = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_full_resolution_depth:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &full_resolution_depth_)));
          set_has_full_resolution_depth();
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

void FastCorrelativeScanMatcherOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 branch_and_bound_depth = 2;
  if (has_branch_and_bound_depth()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->branch_and_bound_depth(), output);
  }

  // optional int32 rotational_histogram_size = 3;
  if (has_rotational_histogram_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rotational_histogram_size(), output);
  }

  // optional double min_rotational_score = 4;
  if (has_min_rotational_score()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->min_rotational_score(), output);
  }

  // optional double linear_xy_search_window = 5;
  if (has_linear_xy_search_window()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->linear_xy_search_window(), output);
  }

  // optional double linear_z_search_window = 6;
  if (has_linear_z_search_window()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->linear_z_search_window(), output);
  }

  // optional double angular_search_window = 7;
  if (has_angular_search_window()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->angular_search_window(), output);
  }

  // optional int32 full_resolution_depth = 8;
  if (has_full_resolution_depth()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->full_resolution_depth(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FastCorrelativeScanMatcherOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 branch_and_bound_depth = 2;
  if (has_branch_and_bound_depth()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->branch_and_bound_depth(), target);
  }

  // optional int32 rotational_histogram_size = 3;
  if (has_rotational_histogram_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->rotational_histogram_size(), target);
  }

  // optional double min_rotational_score = 4;
  if (has_min_rotational_score()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->min_rotational_score(), target);
  }

  // optional double linear_xy_search_window = 5;
  if (has_linear_xy_search_window()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->linear_xy_search_window(), target);
  }

  // optional double linear_z_search_window = 6;
  if (has_linear_z_search_window()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->linear_z_search_window(), target);
  }

  // optional double angular_search_window = 7;
  if (has_angular_search_window()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->angular_search_window(), target);
  }

  // optional int32 full_resolution_depth = 8;
  if (has_full_resolution_depth()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->full_resolution_depth(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FastCorrelativeScanMatcherOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 branch_and_bound_depth = 2;
    if (has_branch_and_bound_depth()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->branch_and_bound_depth());
    }

    // optional int32 full_resolution_depth = 8;
    if (has_full_resolution_depth()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->full_resolution_depth());
    }

    // optional int32 rotational_histogram_size = 3;
    if (has_rotational_histogram_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rotational_histogram_size());
    }

    // optional double min_rotational_score = 4;
    if (has_min_rotational_score()) {
      total_size += 1 + 8;
    }

    // optional double linear_xy_search_window = 5;
    if (has_linear_xy_search_window()) {
      total_size += 1 + 8;
    }

    // optional double linear_z_search_window = 6;
    if (has_linear_z_search_window()) {
      total_size += 1 + 8;
    }

    // optional double angular_search_window = 7;
    if (has_angular_search_window()) {
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

void FastCorrelativeScanMatcherOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FastCorrelativeScanMatcherOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FastCorrelativeScanMatcherOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FastCorrelativeScanMatcherOptions::MergeFrom(const FastCorrelativeScanMatcherOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_branch_and_bound_depth()) {
      set_branch_and_bound_depth(from.branch_and_bound_depth());
    }
    if (from.has_full_resolution_depth()) {
      set_full_resolution_depth(from.full_resolution_depth());
    }
    if (from.has_rotational_histogram_size()) {
      set_rotational_histogram_size(from.rotational_histogram_size());
    }
    if (from.has_min_rotational_score()) {
      set_min_rotational_score(from.min_rotational_score());
    }
    if (from.has_linear_xy_search_window()) {
      set_linear_xy_search_window(from.linear_xy_search_window());
    }
    if (from.has_linear_z_search_window()) {
      set_linear_z_search_window(from.linear_z_search_window());
    }
    if (from.has_angular_search_window()) {
      set_angular_search_window(from.angular_search_window());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FastCorrelativeScanMatcherOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FastCorrelativeScanMatcherOptions::CopyFrom(const FastCorrelativeScanMatcherOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FastCorrelativeScanMatcherOptions::IsInitialized() const {

  return true;
}

void FastCorrelativeScanMatcherOptions::Swap(FastCorrelativeScanMatcherOptions* other) {
  if (other != this) {
    std::swap(branch_and_bound_depth_, other->branch_and_bound_depth_);
    std::swap(full_resolution_depth_, other->full_resolution_depth_);
    std::swap(rotational_histogram_size_, other->rotational_histogram_size_);
    std::swap(min_rotational_score_, other->min_rotational_score_);
    std::swap(linear_xy_search_window_, other->linear_xy_search_window_);
    std::swap(linear_z_search_window_, other->linear_z_search_window_);
    std::swap(angular_search_window_, other->angular_search_window_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FastCorrelativeScanMatcherOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FastCorrelativeScanMatcherOptions_descriptor_;
  metadata.reflection = FastCorrelativeScanMatcherOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping_3d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
