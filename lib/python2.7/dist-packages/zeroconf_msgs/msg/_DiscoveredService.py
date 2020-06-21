# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from zeroconf_msgs/DiscoveredService.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DiscoveredService(genpy.Message):
  _md5sum = "3aabc6dd9875ef180c75536ad9a51d86"
  _type = "zeroconf_msgs/DiscoveredService"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#
# Provides all the properties required for definition of a discovered 
# zeroconf service. Note that it contains rather alot more information
# than that which is used to publish a zeroconf service.

# Service Part
string name
string type
string domain
string description

# Resolved part
string hostname
string[] ipv4_addresses
string[] ipv6_addresses
int32 port

# These are detailed variables that you should not normally need
# and can be safely ignored in most circumstances (currently used
# by the avahi implementation).

uint32 cookie
bool is_local
bool our_own
bool wide_area
bool multicast
bool cached

"""
  __slots__ = ['name','type','domain','description','hostname','ipv4_addresses','ipv6_addresses','port','cookie','is_local','our_own','wide_area','multicast','cached']
  _slot_types = ['string','string','string','string','string','string[]','string[]','int32','uint32','bool','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       name,type,domain,description,hostname,ipv4_addresses,ipv6_addresses,port,cookie,is_local,our_own,wide_area,multicast,cached

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DiscoveredService, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.name is None:
        self.name = ''
      if self.type is None:
        self.type = ''
      if self.domain is None:
        self.domain = ''
      if self.description is None:
        self.description = ''
      if self.hostname is None:
        self.hostname = ''
      if self.ipv4_addresses is None:
        self.ipv4_addresses = []
      if self.ipv6_addresses is None:
        self.ipv6_addresses = []
      if self.port is None:
        self.port = 0
      if self.cookie is None:
        self.cookie = 0
      if self.is_local is None:
        self.is_local = False
      if self.our_own is None:
        self.our_own = False
      if self.wide_area is None:
        self.wide_area = False
      if self.multicast is None:
        self.multicast = False
      if self.cached is None:
        self.cached = False
    else:
      self.name = ''
      self.type = ''
      self.domain = ''
      self.description = ''
      self.hostname = ''
      self.ipv4_addresses = []
      self.ipv6_addresses = []
      self.port = 0
      self.cookie = 0
      self.is_local = False
      self.our_own = False
      self.wide_area = False
      self.multicast = False
      self.cached = False

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
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.domain
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.description
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.hostname
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.ipv4_addresses)
      buff.write(_struct_I.pack(length))
      for val1 in self.ipv4_addresses:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.ipv6_addresses)
      buff.write(_struct_I.pack(length))
      for val1 in self.ipv6_addresses:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      _x = self
      buff.write(_struct_iI5B.pack(_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached))
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
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8')
      else:
        self.type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.domain = str[start:end].decode('utf-8')
      else:
        self.domain = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.description = str[start:end].decode('utf-8')
      else:
        self.description = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.hostname = str[start:end].decode('utf-8')
      else:
        self.hostname = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ipv4_addresses = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.ipv4_addresses.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ipv6_addresses = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.ipv6_addresses.append(val1)
      _x = self
      start = end
      end += 13
      (_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached,) = _struct_iI5B.unpack(str[start:end])
      self.is_local = bool(self.is_local)
      self.our_own = bool(self.our_own)
      self.wide_area = bool(self.wide_area)
      self.multicast = bool(self.multicast)
      self.cached = bool(self.cached)
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
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.domain
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.description
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.hostname
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.ipv4_addresses)
      buff.write(_struct_I.pack(length))
      for val1 in self.ipv4_addresses:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      length = len(self.ipv6_addresses)
      buff.write(_struct_I.pack(length))
      for val1 in self.ipv6_addresses:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *val1))
        else:
          buff.write(struct.pack('<I%ss'%length, length, val1))
      _x = self
      buff.write(_struct_iI5B.pack(_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached))
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
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8')
      else:
        self.type = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.domain = str[start:end].decode('utf-8')
      else:
        self.domain = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.description = str[start:end].decode('utf-8')
      else:
        self.description = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.hostname = str[start:end].decode('utf-8')
      else:
        self.hostname = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ipv4_addresses = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.ipv4_addresses.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ipv6_addresses = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.ipv6_addresses.append(val1)
      _x = self
      start = end
      end += 13
      (_x.port, _x.cookie, _x.is_local, _x.our_own, _x.wide_area, _x.multicast, _x.cached,) = _struct_iI5B.unpack(str[start:end])
      self.is_local = bool(self.is_local)
      self.our_own = bool(self.our_own)
      self.wide_area = bool(self.wide_area)
      self.multicast = bool(self.multicast)
      self.cached = bool(self.cached)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_iI5B = struct.Struct("<iI5B")
