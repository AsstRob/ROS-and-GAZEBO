// Generated by gencpp from file turtlesim/TeleportAbsoluteResponse.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_TELEPORTABSOLUTERESPONSE_H
#define TURTLESIM_MESSAGE_TELEPORTABSOLUTERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct TeleportAbsoluteResponse_
{
  typedef TeleportAbsoluteResponse_<ContainerAllocator> Type;

  TeleportAbsoluteResponse_()
    {
    }
  TeleportAbsoluteResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TeleportAbsoluteResponse_

typedef ::turtlesim::TeleportAbsoluteResponse_<std::allocator<void> > TeleportAbsoluteResponse;

typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteResponse > TeleportAbsoluteResponsePtr;
typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteResponse const> TeleportAbsoluteResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlesim

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'turtlesim': ['/tmp/binarydeb/ros-indigo-turtlesim-0.5.5/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/TeleportAbsoluteResponse";
  }

  static const char* value(const ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TeleportAbsoluteResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::turtlesim::TeleportAbsoluteResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_TELEPORTABSOLUTERESPONSE_H
