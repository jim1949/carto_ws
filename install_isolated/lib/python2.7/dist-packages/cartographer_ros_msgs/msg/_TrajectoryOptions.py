# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cartographer_ros_msgs/TrajectoryOptions.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TrajectoryOptions(genpy.Message):
  _md5sum = "622757fb530c57575d011a4b63ad3b48"
  _type = "cartographer_ros_msgs/TrajectoryOptions"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Copyright 2016 The Cartographer Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

string tracking_frame
string published_frame
string odom_frame
bool provide_odom_frame
bool use_odometry
bool use_laser_scan
bool use_multi_echo_laser_scan
int32 num_point_clouds

# This is a binary-encoded
# 'cartographer.mapping.proto.TrajectoryBuilderOptions' proto.
string trajectory_builder_options_proto
"""
  __slots__ = ['tracking_frame','published_frame','odom_frame','provide_odom_frame','use_odometry','use_laser_scan','use_multi_echo_laser_scan','num_point_clouds','trajectory_builder_options_proto']
  _slot_types = ['string','string','string','bool','bool','bool','bool','int32','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       tracking_frame,published_frame,odom_frame,provide_odom_frame,use_odometry,use_laser_scan,use_multi_echo_laser_scan,num_point_clouds,trajectory_builder_options_proto

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TrajectoryOptions, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.tracking_frame is None:
        self.tracking_frame = ''
      if self.published_frame is None:
        self.published_frame = ''
      if self.odom_frame is None:
        self.odom_frame = ''
      if self.provide_odom_frame is None:
        self.provide_odom_frame = False
      if self.use_odometry is None:
        self.use_odometry = False
      if self.use_laser_scan is None:
        self.use_laser_scan = False
      if self.use_multi_echo_laser_scan is None:
        self.use_multi_echo_laser_scan = False
      if self.num_point_clouds is None:
        self.num_point_clouds = 0
      if self.trajectory_builder_options_proto is None:
        self.trajectory_builder_options_proto = ''
    else:
      self.tracking_frame = ''
      self.published_frame = ''
      self.odom_frame = ''
      self.provide_odom_frame = False
      self.use_odometry = False
      self.use_laser_scan = False
      self.use_multi_echo_laser_scan = False
      self.num_point_clouds = 0
      self.trajectory_builder_options_proto = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.tracking_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.published_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.odom_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4Bi.pack(_x.provide_odom_frame, _x.use_odometry, _x.use_laser_scan, _x.use_multi_echo_laser_scan, _x.num_point_clouds))
      _x = self.trajectory_builder_options_proto
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tracking_frame = str[start:end].decode('utf-8')
      else:
        self.tracking_frame = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.published_frame = str[start:end].decode('utf-8')
      else:
        self.published_frame = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.odom_frame = str[start:end].decode('utf-8')
      else:
        self.odom_frame = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.provide_odom_frame, _x.use_odometry, _x.use_laser_scan, _x.use_multi_echo_laser_scan, _x.num_point_clouds,) = _struct_4Bi.unpack(str[start:end])
      self.provide_odom_frame = bool(self.provide_odom_frame)
      self.use_odometry = bool(self.use_odometry)
      self.use_laser_scan = bool(self.use_laser_scan)
      self.use_multi_echo_laser_scan = bool(self.use_multi_echo_laser_scan)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.trajectory_builder_options_proto = str[start:end].decode('utf-8')
      else:
        self.trajectory_builder_options_proto = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.tracking_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.published_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.odom_frame
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4Bi.pack(_x.provide_odom_frame, _x.use_odometry, _x.use_laser_scan, _x.use_multi_echo_laser_scan, _x.num_point_clouds))
      _x = self.trajectory_builder_options_proto
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.tracking_frame = str[start:end].decode('utf-8')
      else:
        self.tracking_frame = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.published_frame = str[start:end].decode('utf-8')
      else:
        self.published_frame = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.odom_frame = str[start:end].decode('utf-8')
      else:
        self.odom_frame = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.provide_odom_frame, _x.use_odometry, _x.use_laser_scan, _x.use_multi_echo_laser_scan, _x.num_point_clouds,) = _struct_4Bi.unpack(str[start:end])
      self.provide_odom_frame = bool(self.provide_odom_frame)
      self.use_odometry = bool(self.use_odometry)
      self.use_laser_scan = bool(self.use_laser_scan)
      self.use_multi_echo_laser_scan = bool(self.use_multi_echo_laser_scan)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.trajectory_builder_options_proto = str[start:end].decode('utf-8')
      else:
        self.trajectory_builder_options_proto = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4Bi = struct.Struct("<4Bi")
