// Generated by gencpp from file rocon_std_msgs/PlatformInfo.msg
// DO NOT EDIT!


#ifndef ROCON_STD_MSGS_MESSAGE_PLATFORMINFO_H
#define ROCON_STD_MSGS_MESSAGE_PLATFORMINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rocon_std_msgs/Icon.h>

namespace rocon_std_msgs
{
template <class ContainerAllocator>
struct PlatformInfo_
{
  typedef PlatformInfo_<ContainerAllocator> Type;

  PlatformInfo_()
    : uri()
    , version()
    , icon()  {
    }
  PlatformInfo_(const ContainerAllocator& _alloc)
    : uri(_alloc)
    , version(_alloc)
    , icon(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uri_type;
  _uri_type uri;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _version_type;
  _version_type version;

   typedef  ::rocon_std_msgs::Icon_<ContainerAllocator>  _icon_type;
  _icon_type icon;




  typedef boost::shared_ptr< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> const> ConstPtr;

}; // struct PlatformInfo_

typedef ::rocon_std_msgs::PlatformInfo_<std::allocator<void> > PlatformInfo;

typedef boost::shared_ptr< ::rocon_std_msgs::PlatformInfo > PlatformInfoPtr;
typedef boost::shared_ptr< ::rocon_std_msgs::PlatformInfo const> PlatformInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_std_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/tmp/binarydeb/ros-indigo-rocon-std-msgs-0.7.12/msg', '/tmp/binarydeb/ros-indigo-rocon-std-msgs-0.7.12/obj-x86_64-linux-gnu/devel/share/rocon_std_msgs/msg'], 'rocon_service_pair_msgs': ['/opt/ros/indigo/share/rocon_service_pair_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffe7bd3c68cda016b708f36a9d12b09e";
  }

  static const char* value(const ::rocon_std_msgs::PlatformInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffe7bd3c68cda016ULL;
  static const uint64_t static_value2 = 0xb708f36a9d12b09eULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_std_msgs/PlatformInfo";
  }

  static const char* value(const ::rocon_std_msgs::PlatformInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Provides platform details for robots, software or human\n\
# interactive devices.\n\
\n\
########################### Variables ###########################\n\
\n\
# rocon universal resource identifier\n\
string uri\n\
# rocon version compatibility identifier (used when connecting to concerts)\n\
string version\n\
Icon icon\n\
\n\
================================================================================\n\
MSG: rocon_std_msgs/Icon\n\
# Used to idenfity the original package/filename resource this icon was/is to be loaded from\n\
# This typically doesn't have to be set, but can be very useful when loading icons from yaml definitions.\n\
string resource_name\n\
\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
";
  }

  static const char* value(const ::rocon_std_msgs::PlatformInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uri);
      stream.next(m.version);
      stream.next(m.icon);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlatformInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_std_msgs::PlatformInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_std_msgs::PlatformInfo_<ContainerAllocator>& v)
  {
    s << indent << "uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uri);
    s << indent << "version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.version);
    s << indent << "icon: ";
    s << std::endl;
    Printer< ::rocon_std_msgs::Icon_<ContainerAllocator> >::stream(s, indent + "  ", v.icon);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_STD_MSGS_MESSAGE_PLATFORMINFO_H
