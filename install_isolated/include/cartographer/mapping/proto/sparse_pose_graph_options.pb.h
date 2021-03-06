// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/sparse_pose_graph_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto__INCLUDED

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
#include "cartographer/mapping/sparse_pose_graph/proto/constraint_builder_options.pb.h"
#include "cartographer/mapping/sparse_pose_graph/proto/optimization_problem_options.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();

class SparsePoseGraphOptions;

// ===================================================================

class SparsePoseGraphOptions : public ::google::protobuf::Message {
 public:
  SparsePoseGraphOptions();
  virtual ~SparsePoseGraphOptions();

  SparsePoseGraphOptions(const SparsePoseGraphOptions& from);

  inline SparsePoseGraphOptions& operator=(const SparsePoseGraphOptions& from) {
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
  static const SparsePoseGraphOptions& default_instance();

  void Swap(SparsePoseGraphOptions* other);

  // implements Message ----------------------------------------------

  SparsePoseGraphOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SparsePoseGraphOptions& from);
  void MergeFrom(const SparsePoseGraphOptions& from);
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

  // optional int32 optimize_every_n_scans = 1;
  inline bool has_optimize_every_n_scans() const;
  inline void clear_optimize_every_n_scans();
  static const int kOptimizeEveryNScansFieldNumber = 1;
  inline ::google::protobuf::int32 optimize_every_n_scans() const;
  inline void set_optimize_every_n_scans(::google::protobuf::int32 value);

  // optional .cartographer.mapping.sparse_pose_graph.proto.ConstraintBuilderOptions constraint_builder_options = 3;
  inline bool has_constraint_builder_options() const;
  inline void clear_constraint_builder_options();
  static const int kConstraintBuilderOptionsFieldNumber = 3;
  inline const ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions& constraint_builder_options() const;
  inline ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* mutable_constraint_builder_options();
  inline ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* release_constraint_builder_options();
  inline void set_allocated_constraint_builder_options(::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* constraint_builder_options);

  // optional double matcher_translation_weight = 7;
  inline bool has_matcher_translation_weight() const;
  inline void clear_matcher_translation_weight();
  static const int kMatcherTranslationWeightFieldNumber = 7;
  inline double matcher_translation_weight() const;
  inline void set_matcher_translation_weight(double value);

  // optional double matcher_rotation_weight = 8;
  inline bool has_matcher_rotation_weight() const;
  inline void clear_matcher_rotation_weight();
  static const int kMatcherRotationWeightFieldNumber = 8;
  inline double matcher_rotation_weight() const;
  inline void set_matcher_rotation_weight(double value);

  // optional .cartographer.mapping.sparse_pose_graph.proto.OptimizationProblemOptions optimization_problem_options = 4;
  inline bool has_optimization_problem_options() const;
  inline void clear_optimization_problem_options();
  static const int kOptimizationProblemOptionsFieldNumber = 4;
  inline const ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions& optimization_problem_options() const;
  inline ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* mutable_optimization_problem_options();
  inline ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* release_optimization_problem_options();
  inline void set_allocated_optimization_problem_options(::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* optimization_problem_options);

  // optional int32 max_num_final_iterations = 6;
  inline bool has_max_num_final_iterations() const;
  inline void clear_max_num_final_iterations();
  static const int kMaxNumFinalIterationsFieldNumber = 6;
  inline ::google::protobuf::int32 max_num_final_iterations() const;
  inline void set_max_num_final_iterations(::google::protobuf::int32 value);

  // optional double global_sampling_ratio = 5;
  inline bool has_global_sampling_ratio() const;
  inline void clear_global_sampling_ratio();
  static const int kGlobalSamplingRatioFieldNumber = 5;
  inline double global_sampling_ratio() const;
  inline void set_global_sampling_ratio(double value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraphOptions)
 private:
  inline void set_has_optimize_every_n_scans();
  inline void clear_has_optimize_every_n_scans();
  inline void set_has_constraint_builder_options();
  inline void clear_has_constraint_builder_options();
  inline void set_has_matcher_translation_weight();
  inline void clear_has_matcher_translation_weight();
  inline void set_has_matcher_rotation_weight();
  inline void clear_has_matcher_rotation_weight();
  inline void set_has_optimization_problem_options();
  inline void clear_has_optimization_problem_options();
  inline void set_has_max_num_final_iterations();
  inline void clear_has_max_num_final_iterations();
  inline void set_has_global_sampling_ratio();
  inline void clear_has_global_sampling_ratio();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* constraint_builder_options_;
  double matcher_translation_weight_;
  ::google::protobuf::int32 optimize_every_n_scans_;
  ::google::protobuf::int32 max_num_final_iterations_;
  double matcher_rotation_weight_;
  ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* optimization_problem_options_;
  double global_sampling_ratio_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();

  void InitAsDefaultInstance();
  static SparsePoseGraphOptions* default_instance_;
};
// ===================================================================


// ===================================================================

// SparsePoseGraphOptions

// optional int32 optimize_every_n_scans = 1;
inline bool SparsePoseGraphOptions::has_optimize_every_n_scans() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SparsePoseGraphOptions::set_has_optimize_every_n_scans() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SparsePoseGraphOptions::clear_has_optimize_every_n_scans() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SparsePoseGraphOptions::clear_optimize_every_n_scans() {
  optimize_every_n_scans_ = 0;
  clear_has_optimize_every_n_scans();
}
inline ::google::protobuf::int32 SparsePoseGraphOptions::optimize_every_n_scans() const {
  return optimize_every_n_scans_;
}
inline void SparsePoseGraphOptions::set_optimize_every_n_scans(::google::protobuf::int32 value) {
  set_has_optimize_every_n_scans();
  optimize_every_n_scans_ = value;
}

// optional .cartographer.mapping.sparse_pose_graph.proto.ConstraintBuilderOptions constraint_builder_options = 3;
inline bool SparsePoseGraphOptions::has_constraint_builder_options() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SparsePoseGraphOptions::set_has_constraint_builder_options() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SparsePoseGraphOptions::clear_has_constraint_builder_options() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SparsePoseGraphOptions::clear_constraint_builder_options() {
  if (constraint_builder_options_ != NULL) constraint_builder_options_->::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions::Clear();
  clear_has_constraint_builder_options();
}
inline const ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions& SparsePoseGraphOptions::constraint_builder_options() const {
  return constraint_builder_options_ != NULL ? *constraint_builder_options_ : *default_instance_->constraint_builder_options_;
}
inline ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* SparsePoseGraphOptions::mutable_constraint_builder_options() {
  set_has_constraint_builder_options();
  if (constraint_builder_options_ == NULL) constraint_builder_options_ = new ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions;
  return constraint_builder_options_;
}
inline ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* SparsePoseGraphOptions::release_constraint_builder_options() {
  clear_has_constraint_builder_options();
  ::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* temp = constraint_builder_options_;
  constraint_builder_options_ = NULL;
  return temp;
}
inline void SparsePoseGraphOptions::set_allocated_constraint_builder_options(::cartographer::mapping::sparse_pose_graph::proto::ConstraintBuilderOptions* constraint_builder_options) {
  delete constraint_builder_options_;
  constraint_builder_options_ = constraint_builder_options;
  if (constraint_builder_options) {
    set_has_constraint_builder_options();
  } else {
    clear_has_constraint_builder_options();
  }
}

// optional double matcher_translation_weight = 7;
inline bool SparsePoseGraphOptions::has_matcher_translation_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SparsePoseGraphOptions::set_has_matcher_translation_weight() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SparsePoseGraphOptions::clear_has_matcher_translation_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SparsePoseGraphOptions::clear_matcher_translation_weight() {
  matcher_translation_weight_ = 0;
  clear_has_matcher_translation_weight();
}
inline double SparsePoseGraphOptions::matcher_translation_weight() const {
  return matcher_translation_weight_;
}
inline void SparsePoseGraphOptions::set_matcher_translation_weight(double value) {
  set_has_matcher_translation_weight();
  matcher_translation_weight_ = value;
}

// optional double matcher_rotation_weight = 8;
inline bool SparsePoseGraphOptions::has_matcher_rotation_weight() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SparsePoseGraphOptions::set_has_matcher_rotation_weight() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SparsePoseGraphOptions::clear_has_matcher_rotation_weight() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SparsePoseGraphOptions::clear_matcher_rotation_weight() {
  matcher_rotation_weight_ = 0;
  clear_has_matcher_rotation_weight();
}
inline double SparsePoseGraphOptions::matcher_rotation_weight() const {
  return matcher_rotation_weight_;
}
inline void SparsePoseGraphOptions::set_matcher_rotation_weight(double value) {
  set_has_matcher_rotation_weight();
  matcher_rotation_weight_ = value;
}

// optional .cartographer.mapping.sparse_pose_graph.proto.OptimizationProblemOptions optimization_problem_options = 4;
inline bool SparsePoseGraphOptions::has_optimization_problem_options() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SparsePoseGraphOptions::set_has_optimization_problem_options() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SparsePoseGraphOptions::clear_has_optimization_problem_options() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SparsePoseGraphOptions::clear_optimization_problem_options() {
  if (optimization_problem_options_ != NULL) optimization_problem_options_->::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions::Clear();
  clear_has_optimization_problem_options();
}
inline const ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions& SparsePoseGraphOptions::optimization_problem_options() const {
  return optimization_problem_options_ != NULL ? *optimization_problem_options_ : *default_instance_->optimization_problem_options_;
}
inline ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* SparsePoseGraphOptions::mutable_optimization_problem_options() {
  set_has_optimization_problem_options();
  if (optimization_problem_options_ == NULL) optimization_problem_options_ = new ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions;
  return optimization_problem_options_;
}
inline ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* SparsePoseGraphOptions::release_optimization_problem_options() {
  clear_has_optimization_problem_options();
  ::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* temp = optimization_problem_options_;
  optimization_problem_options_ = NULL;
  return temp;
}
inline void SparsePoseGraphOptions::set_allocated_optimization_problem_options(::cartographer::mapping::sparse_pose_graph::proto::OptimizationProblemOptions* optimization_problem_options) {
  delete optimization_problem_options_;
  optimization_problem_options_ = optimization_problem_options;
  if (optimization_problem_options) {
    set_has_optimization_problem_options();
  } else {
    clear_has_optimization_problem_options();
  }
}

// optional int32 max_num_final_iterations = 6;
inline bool SparsePoseGraphOptions::has_max_num_final_iterations() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SparsePoseGraphOptions::set_has_max_num_final_iterations() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SparsePoseGraphOptions::clear_has_max_num_final_iterations() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SparsePoseGraphOptions::clear_max_num_final_iterations() {
  max_num_final_iterations_ = 0;
  clear_has_max_num_final_iterations();
}
inline ::google::protobuf::int32 SparsePoseGraphOptions::max_num_final_iterations() const {
  return max_num_final_iterations_;
}
inline void SparsePoseGraphOptions::set_max_num_final_iterations(::google::protobuf::int32 value) {
  set_has_max_num_final_iterations();
  max_num_final_iterations_ = value;
}

// optional double global_sampling_ratio = 5;
inline bool SparsePoseGraphOptions::has_global_sampling_ratio() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SparsePoseGraphOptions::set_has_global_sampling_ratio() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SparsePoseGraphOptions::clear_has_global_sampling_ratio() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SparsePoseGraphOptions::clear_global_sampling_ratio() {
  global_sampling_ratio_ = 0;
  clear_has_global_sampling_ratio();
}
inline double SparsePoseGraphOptions::global_sampling_ratio() const {
  return global_sampling_ratio_;
}
inline void SparsePoseGraphOptions::set_global_sampling_ratio(double value) {
  set_has_global_sampling_ratio();
  global_sampling_ratio_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto__INCLUDED
