// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/sparse_pose_graph.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/trajectory.pb.h"
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();

class SparsePoseGraph;
class SparsePoseGraph_Constraint;
class SparsePoseGraph_Constraint_SubmapId;
class SparsePoseGraph_Constraint_ScanId;

enum SparsePoseGraph_Constraint_Tag {
  SparsePoseGraph_Constraint_Tag_INTRA_SUBMAP = 0,
  SparsePoseGraph_Constraint_Tag_INTER_SUBMAP = 1
};
bool SparsePoseGraph_Constraint_Tag_IsValid(int value);
const SparsePoseGraph_Constraint_Tag SparsePoseGraph_Constraint_Tag_Tag_MIN = SparsePoseGraph_Constraint_Tag_INTRA_SUBMAP;
const SparsePoseGraph_Constraint_Tag SparsePoseGraph_Constraint_Tag_Tag_MAX = SparsePoseGraph_Constraint_Tag_INTER_SUBMAP;
const int SparsePoseGraph_Constraint_Tag_Tag_ARRAYSIZE = SparsePoseGraph_Constraint_Tag_Tag_MAX + 1;

const ::google::protobuf::EnumDescriptor* SparsePoseGraph_Constraint_Tag_descriptor();
inline const ::std::string& SparsePoseGraph_Constraint_Tag_Name(SparsePoseGraph_Constraint_Tag value) {
  return ::google::protobuf::internal::NameOfEnum(
    SparsePoseGraph_Constraint_Tag_descriptor(), value);
}
inline bool SparsePoseGraph_Constraint_Tag_Parse(
    const ::std::string& name, SparsePoseGraph_Constraint_Tag* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SparsePoseGraph_Constraint_Tag>(
    SparsePoseGraph_Constraint_Tag_descriptor(), name, value);
}
// ===================================================================

class SparsePoseGraph_Constraint_SubmapId : public ::google::protobuf::Message {
 public:
  SparsePoseGraph_Constraint_SubmapId();
  virtual ~SparsePoseGraph_Constraint_SubmapId();

  SparsePoseGraph_Constraint_SubmapId(const SparsePoseGraph_Constraint_SubmapId& from);

  inline SparsePoseGraph_Constraint_SubmapId& operator=(const SparsePoseGraph_Constraint_SubmapId& from) {
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
  static const SparsePoseGraph_Constraint_SubmapId& default_instance();

  void Swap(SparsePoseGraph_Constraint_SubmapId* other);

  // implements Message ----------------------------------------------

  SparsePoseGraph_Constraint_SubmapId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SparsePoseGraph_Constraint_SubmapId& from);
  void MergeFrom(const SparsePoseGraph_Constraint_SubmapId& from);
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

  // optional int32 trajectory_id = 1;
  inline bool has_trajectory_id() const;
  inline void clear_trajectory_id();
  static const int kTrajectoryIdFieldNumber = 1;
  inline ::google::protobuf::int32 trajectory_id() const;
  inline void set_trajectory_id(::google::protobuf::int32 value);

  // optional int32 submap_index = 2;
  inline bool has_submap_index() const;
  inline void clear_submap_index();
  static const int kSubmapIndexFieldNumber = 2;
  inline ::google::protobuf::int32 submap_index() const;
  inline void set_submap_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraph.Constraint.SubmapId)
 private:
  inline void set_has_trajectory_id();
  inline void clear_has_trajectory_id();
  inline void set_has_submap_index();
  inline void clear_has_submap_index();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 trajectory_id_;
  ::google::protobuf::int32 submap_index_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static SparsePoseGraph_Constraint_SubmapId* default_instance_;
};
// -------------------------------------------------------------------

class SparsePoseGraph_Constraint_ScanId : public ::google::protobuf::Message {
 public:
  SparsePoseGraph_Constraint_ScanId();
  virtual ~SparsePoseGraph_Constraint_ScanId();

  SparsePoseGraph_Constraint_ScanId(const SparsePoseGraph_Constraint_ScanId& from);

  inline SparsePoseGraph_Constraint_ScanId& operator=(const SparsePoseGraph_Constraint_ScanId& from) {
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
  static const SparsePoseGraph_Constraint_ScanId& default_instance();

  void Swap(SparsePoseGraph_Constraint_ScanId* other);

  // implements Message ----------------------------------------------

  SparsePoseGraph_Constraint_ScanId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SparsePoseGraph_Constraint_ScanId& from);
  void MergeFrom(const SparsePoseGraph_Constraint_ScanId& from);
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

  // optional int32 trajectory_id = 1;
  inline bool has_trajectory_id() const;
  inline void clear_trajectory_id();
  static const int kTrajectoryIdFieldNumber = 1;
  inline ::google::protobuf::int32 trajectory_id() const;
  inline void set_trajectory_id(::google::protobuf::int32 value);

  // optional int32 scan_index = 2;
  inline bool has_scan_index() const;
  inline void clear_scan_index();
  static const int kScanIndexFieldNumber = 2;
  inline ::google::protobuf::int32 scan_index() const;
  inline void set_scan_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraph.Constraint.ScanId)
 private:
  inline void set_has_trajectory_id();
  inline void clear_has_trajectory_id();
  inline void set_has_scan_index();
  inline void clear_has_scan_index();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 trajectory_id_;
  ::google::protobuf::int32 scan_index_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static SparsePoseGraph_Constraint_ScanId* default_instance_;
};
// -------------------------------------------------------------------

class SparsePoseGraph_Constraint : public ::google::protobuf::Message {
 public:
  SparsePoseGraph_Constraint();
  virtual ~SparsePoseGraph_Constraint();

  SparsePoseGraph_Constraint(const SparsePoseGraph_Constraint& from);

  inline SparsePoseGraph_Constraint& operator=(const SparsePoseGraph_Constraint& from) {
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
  static const SparsePoseGraph_Constraint& default_instance();

  void Swap(SparsePoseGraph_Constraint* other);

  // implements Message ----------------------------------------------

  SparsePoseGraph_Constraint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SparsePoseGraph_Constraint& from);
  void MergeFrom(const SparsePoseGraph_Constraint& from);
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

  typedef SparsePoseGraph_Constraint_SubmapId SubmapId;
  typedef SparsePoseGraph_Constraint_ScanId ScanId;

  typedef SparsePoseGraph_Constraint_Tag Tag;
  static const Tag INTRA_SUBMAP = SparsePoseGraph_Constraint_Tag_INTRA_SUBMAP;
  static const Tag INTER_SUBMAP = SparsePoseGraph_Constraint_Tag_INTER_SUBMAP;
  static inline bool Tag_IsValid(int value) {
    return SparsePoseGraph_Constraint_Tag_IsValid(value);
  }
  static const Tag Tag_MIN =
    SparsePoseGraph_Constraint_Tag_Tag_MIN;
  static const Tag Tag_MAX =
    SparsePoseGraph_Constraint_Tag_Tag_MAX;
  static const int Tag_ARRAYSIZE =
    SparsePoseGraph_Constraint_Tag_Tag_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Tag_descriptor() {
    return SparsePoseGraph_Constraint_Tag_descriptor();
  }
  static inline const ::std::string& Tag_Name(Tag value) {
    return SparsePoseGraph_Constraint_Tag_Name(value);
  }
  static inline bool Tag_Parse(const ::std::string& name,
      Tag* value) {
    return SparsePoseGraph_Constraint_Tag_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.SubmapId submap_id = 1;
  inline bool has_submap_id() const;
  inline void clear_submap_id();
  static const int kSubmapIdFieldNumber = 1;
  inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId& submap_id() const;
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* mutable_submap_id();
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* release_submap_id();
  inline void set_allocated_submap_id(::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* submap_id);

  // optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.ScanId scan_id = 2;
  inline bool has_scan_id() const;
  inline void clear_scan_id();
  static const int kScanIdFieldNumber = 2;
  inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId& scan_id() const;
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* mutable_scan_id();
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* release_scan_id();
  inline void set_allocated_scan_id(::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* scan_id);

  // optional .cartographer.transform.proto.Rigid3d relative_pose = 3;
  inline bool has_relative_pose() const;
  inline void clear_relative_pose();
  static const int kRelativePoseFieldNumber = 3;
  inline const ::cartographer::transform::proto::Rigid3d& relative_pose() const;
  inline ::cartographer::transform::proto::Rigid3d* mutable_relative_pose();
  inline ::cartographer::transform::proto::Rigid3d* release_relative_pose();
  inline void set_allocated_relative_pose(::cartographer::transform::proto::Rigid3d* relative_pose);

  // optional double translation_weight = 6;
  inline bool has_translation_weight() const;
  inline void clear_translation_weight();
  static const int kTranslationWeightFieldNumber = 6;
  inline double translation_weight() const;
  inline void set_translation_weight(double value);

  // optional double rotation_weight = 7;
  inline bool has_rotation_weight() const;
  inline void clear_rotation_weight();
  static const int kRotationWeightFieldNumber = 7;
  inline double rotation_weight() const;
  inline void set_rotation_weight(double value);

  // optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.Tag tag = 5;
  inline bool has_tag() const;
  inline void clear_tag();
  static const int kTagFieldNumber = 5;
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag tag() const;
  inline void set_tag(::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraph.Constraint)
 private:
  inline void set_has_submap_id();
  inline void clear_has_submap_id();
  inline void set_has_scan_id();
  inline void clear_has_scan_id();
  inline void set_has_relative_pose();
  inline void clear_has_relative_pose();
  inline void set_has_translation_weight();
  inline void clear_has_translation_weight();
  inline void set_has_rotation_weight();
  inline void clear_has_rotation_weight();
  inline void set_has_tag();
  inline void clear_has_tag();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* submap_id_;
  ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* scan_id_;
  ::cartographer::transform::proto::Rigid3d* relative_pose_;
  double translation_weight_;
  double rotation_weight_;
  int tag_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static SparsePoseGraph_Constraint* default_instance_;
};
// -------------------------------------------------------------------

class SparsePoseGraph : public ::google::protobuf::Message {
 public:
  SparsePoseGraph();
  virtual ~SparsePoseGraph();

  SparsePoseGraph(const SparsePoseGraph& from);

  inline SparsePoseGraph& operator=(const SparsePoseGraph& from) {
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
  static const SparsePoseGraph& default_instance();

  void Swap(SparsePoseGraph* other);

  // implements Message ----------------------------------------------

  SparsePoseGraph* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SparsePoseGraph& from);
  void MergeFrom(const SparsePoseGraph& from);
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

  typedef SparsePoseGraph_Constraint Constraint;

  // accessors -------------------------------------------------------

  // repeated .cartographer.mapping.proto.SparsePoseGraph.Constraint constraint = 2;
  inline int constraint_size() const;
  inline void clear_constraint();
  static const int kConstraintFieldNumber = 2;
  inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint& constraint(int index) const;
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint* mutable_constraint(int index);
  inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint* add_constraint();
  inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >&
      constraint() const;
  inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >*
      mutable_constraint();

  // repeated .cartographer.mapping.proto.Trajectory trajectory = 4;
  inline int trajectory_size() const;
  inline void clear_trajectory();
  static const int kTrajectoryFieldNumber = 4;
  inline const ::cartographer::mapping::proto::Trajectory& trajectory(int index) const;
  inline ::cartographer::mapping::proto::Trajectory* mutable_trajectory(int index);
  inline ::cartographer::mapping::proto::Trajectory* add_trajectory();
  inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >&
      trajectory() const;
  inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >*
      mutable_trajectory();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.SparsePoseGraph)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint > constraint_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory > trajectory_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto();

  void InitAsDefaultInstance();
  static SparsePoseGraph* default_instance_;
};
// ===================================================================


// ===================================================================

// SparsePoseGraph_Constraint_SubmapId

// optional int32 trajectory_id = 1;
inline bool SparsePoseGraph_Constraint_SubmapId::has_trajectory_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SparsePoseGraph_Constraint_SubmapId::set_has_trajectory_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SparsePoseGraph_Constraint_SubmapId::clear_has_trajectory_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SparsePoseGraph_Constraint_SubmapId::clear_trajectory_id() {
  trajectory_id_ = 0;
  clear_has_trajectory_id();
}
inline ::google::protobuf::int32 SparsePoseGraph_Constraint_SubmapId::trajectory_id() const {
  return trajectory_id_;
}
inline void SparsePoseGraph_Constraint_SubmapId::set_trajectory_id(::google::protobuf::int32 value) {
  set_has_trajectory_id();
  trajectory_id_ = value;
}

// optional int32 submap_index = 2;
inline bool SparsePoseGraph_Constraint_SubmapId::has_submap_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SparsePoseGraph_Constraint_SubmapId::set_has_submap_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SparsePoseGraph_Constraint_SubmapId::clear_has_submap_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SparsePoseGraph_Constraint_SubmapId::clear_submap_index() {
  submap_index_ = 0;
  clear_has_submap_index();
}
inline ::google::protobuf::int32 SparsePoseGraph_Constraint_SubmapId::submap_index() const {
  return submap_index_;
}
inline void SparsePoseGraph_Constraint_SubmapId::set_submap_index(::google::protobuf::int32 value) {
  set_has_submap_index();
  submap_index_ = value;
}

// -------------------------------------------------------------------

// SparsePoseGraph_Constraint_ScanId

// optional int32 trajectory_id = 1;
inline bool SparsePoseGraph_Constraint_ScanId::has_trajectory_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SparsePoseGraph_Constraint_ScanId::set_has_trajectory_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SparsePoseGraph_Constraint_ScanId::clear_has_trajectory_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SparsePoseGraph_Constraint_ScanId::clear_trajectory_id() {
  trajectory_id_ = 0;
  clear_has_trajectory_id();
}
inline ::google::protobuf::int32 SparsePoseGraph_Constraint_ScanId::trajectory_id() const {
  return trajectory_id_;
}
inline void SparsePoseGraph_Constraint_ScanId::set_trajectory_id(::google::protobuf::int32 value) {
  set_has_trajectory_id();
  trajectory_id_ = value;
}

// optional int32 scan_index = 2;
inline bool SparsePoseGraph_Constraint_ScanId::has_scan_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SparsePoseGraph_Constraint_ScanId::set_has_scan_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SparsePoseGraph_Constraint_ScanId::clear_has_scan_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SparsePoseGraph_Constraint_ScanId::clear_scan_index() {
  scan_index_ = 0;
  clear_has_scan_index();
}
inline ::google::protobuf::int32 SparsePoseGraph_Constraint_ScanId::scan_index() const {
  return scan_index_;
}
inline void SparsePoseGraph_Constraint_ScanId::set_scan_index(::google::protobuf::int32 value) {
  set_has_scan_index();
  scan_index_ = value;
}

// -------------------------------------------------------------------

// SparsePoseGraph_Constraint

// optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.SubmapId submap_id = 1;
inline bool SparsePoseGraph_Constraint::has_submap_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_submap_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SparsePoseGraph_Constraint::clear_has_submap_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SparsePoseGraph_Constraint::clear_submap_id() {
  if (submap_id_ != NULL) submap_id_->::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId::Clear();
  clear_has_submap_id();
}
inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId& SparsePoseGraph_Constraint::submap_id() const {
  return submap_id_ != NULL ? *submap_id_ : *default_instance_->submap_id_;
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* SparsePoseGraph_Constraint::mutable_submap_id() {
  set_has_submap_id();
  if (submap_id_ == NULL) submap_id_ = new ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId;
  return submap_id_;
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* SparsePoseGraph_Constraint::release_submap_id() {
  clear_has_submap_id();
  ::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* temp = submap_id_;
  submap_id_ = NULL;
  return temp;
}
inline void SparsePoseGraph_Constraint::set_allocated_submap_id(::cartographer::mapping::proto::SparsePoseGraph_Constraint_SubmapId* submap_id) {
  delete submap_id_;
  submap_id_ = submap_id;
  if (submap_id) {
    set_has_submap_id();
  } else {
    clear_has_submap_id();
  }
}

// optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.ScanId scan_id = 2;
inline bool SparsePoseGraph_Constraint::has_scan_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_scan_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SparsePoseGraph_Constraint::clear_has_scan_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SparsePoseGraph_Constraint::clear_scan_id() {
  if (scan_id_ != NULL) scan_id_->::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId::Clear();
  clear_has_scan_id();
}
inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId& SparsePoseGraph_Constraint::scan_id() const {
  return scan_id_ != NULL ? *scan_id_ : *default_instance_->scan_id_;
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* SparsePoseGraph_Constraint::mutable_scan_id() {
  set_has_scan_id();
  if (scan_id_ == NULL) scan_id_ = new ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId;
  return scan_id_;
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* SparsePoseGraph_Constraint::release_scan_id() {
  clear_has_scan_id();
  ::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* temp = scan_id_;
  scan_id_ = NULL;
  return temp;
}
inline void SparsePoseGraph_Constraint::set_allocated_scan_id(::cartographer::mapping::proto::SparsePoseGraph_Constraint_ScanId* scan_id) {
  delete scan_id_;
  scan_id_ = scan_id;
  if (scan_id) {
    set_has_scan_id();
  } else {
    clear_has_scan_id();
  }
}

// optional .cartographer.transform.proto.Rigid3d relative_pose = 3;
inline bool SparsePoseGraph_Constraint::has_relative_pose() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_relative_pose() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SparsePoseGraph_Constraint::clear_has_relative_pose() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SparsePoseGraph_Constraint::clear_relative_pose() {
  if (relative_pose_ != NULL) relative_pose_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_relative_pose();
}
inline const ::cartographer::transform::proto::Rigid3d& SparsePoseGraph_Constraint::relative_pose() const {
  return relative_pose_ != NULL ? *relative_pose_ : *default_instance_->relative_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* SparsePoseGraph_Constraint::mutable_relative_pose() {
  set_has_relative_pose();
  if (relative_pose_ == NULL) relative_pose_ = new ::cartographer::transform::proto::Rigid3d;
  return relative_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* SparsePoseGraph_Constraint::release_relative_pose() {
  clear_has_relative_pose();
  ::cartographer::transform::proto::Rigid3d* temp = relative_pose_;
  relative_pose_ = NULL;
  return temp;
}
inline void SparsePoseGraph_Constraint::set_allocated_relative_pose(::cartographer::transform::proto::Rigid3d* relative_pose) {
  delete relative_pose_;
  relative_pose_ = relative_pose;
  if (relative_pose) {
    set_has_relative_pose();
  } else {
    clear_has_relative_pose();
  }
}

// optional double translation_weight = 6;
inline bool SparsePoseGraph_Constraint::has_translation_weight() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_translation_weight() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SparsePoseGraph_Constraint::clear_has_translation_weight() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SparsePoseGraph_Constraint::clear_translation_weight() {
  translation_weight_ = 0;
  clear_has_translation_weight();
}
inline double SparsePoseGraph_Constraint::translation_weight() const {
  return translation_weight_;
}
inline void SparsePoseGraph_Constraint::set_translation_weight(double value) {
  set_has_translation_weight();
  translation_weight_ = value;
}

// optional double rotation_weight = 7;
inline bool SparsePoseGraph_Constraint::has_rotation_weight() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_rotation_weight() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SparsePoseGraph_Constraint::clear_has_rotation_weight() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SparsePoseGraph_Constraint::clear_rotation_weight() {
  rotation_weight_ = 0;
  clear_has_rotation_weight();
}
inline double SparsePoseGraph_Constraint::rotation_weight() const {
  return rotation_weight_;
}
inline void SparsePoseGraph_Constraint::set_rotation_weight(double value) {
  set_has_rotation_weight();
  rotation_weight_ = value;
}

// optional .cartographer.mapping.proto.SparsePoseGraph.Constraint.Tag tag = 5;
inline bool SparsePoseGraph_Constraint::has_tag() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SparsePoseGraph_Constraint::set_has_tag() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SparsePoseGraph_Constraint::clear_has_tag() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SparsePoseGraph_Constraint::clear_tag() {
  tag_ = 0;
  clear_has_tag();
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag SparsePoseGraph_Constraint::tag() const {
  return static_cast< ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag >(tag_);
}
inline void SparsePoseGraph_Constraint::set_tag(::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag value) {
  assert(::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag_IsValid(value));
  set_has_tag();
  tag_ = value;
}

// -------------------------------------------------------------------

// SparsePoseGraph

// repeated .cartographer.mapping.proto.SparsePoseGraph.Constraint constraint = 2;
inline int SparsePoseGraph::constraint_size() const {
  return constraint_.size();
}
inline void SparsePoseGraph::clear_constraint() {
  constraint_.Clear();
}
inline const ::cartographer::mapping::proto::SparsePoseGraph_Constraint& SparsePoseGraph::constraint(int index) const {
  return constraint_.Get(index);
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint* SparsePoseGraph::mutable_constraint(int index) {
  return constraint_.Mutable(index);
}
inline ::cartographer::mapping::proto::SparsePoseGraph_Constraint* SparsePoseGraph::add_constraint() {
  return constraint_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >&
SparsePoseGraph::constraint() const {
  return constraint_;
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::SparsePoseGraph_Constraint >*
SparsePoseGraph::mutable_constraint() {
  return &constraint_;
}

// repeated .cartographer.mapping.proto.Trajectory trajectory = 4;
inline int SparsePoseGraph::trajectory_size() const {
  return trajectory_.size();
}
inline void SparsePoseGraph::clear_trajectory() {
  trajectory_.Clear();
}
inline const ::cartographer::mapping::proto::Trajectory& SparsePoseGraph::trajectory(int index) const {
  return trajectory_.Get(index);
}
inline ::cartographer::mapping::proto::Trajectory* SparsePoseGraph::mutable_trajectory(int index) {
  return trajectory_.Mutable(index);
}
inline ::cartographer::mapping::proto::Trajectory* SparsePoseGraph::add_trajectory() {
  return trajectory_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >&
SparsePoseGraph::trajectory() const {
  return trajectory_;
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::Trajectory >*
SparsePoseGraph::mutable_trajectory() {
  return &trajectory_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag>() {
  return ::cartographer::mapping::proto::SparsePoseGraph_Constraint_Tag_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_2eproto__INCLUDED
