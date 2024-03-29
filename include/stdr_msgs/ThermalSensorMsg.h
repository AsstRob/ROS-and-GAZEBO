// Generated by gencpp from file stdr_msgs/ThermalSensorMsg.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_THERMALSENSORMSG_H
#define STDR_MSGS_MESSAGE_THERMALSENSORMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct ThermalSensorMsg_
{
  typedef ThermalSensorMsg_<ContainerAllocator> Type;

  ThermalSensorMsg_()
    : maxRange(0.0)
    , frequency(0.0)
    , angleSpan(0.0)
    , frame_id()
    , pose()  {
    }
  ThermalSensorMsg_(const ContainerAllocator& _alloc)
    : maxRange(0.0)
    , frequency(0.0)
    , angleSpan(0.0)
    , frame_id(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef float _maxRange_type;
  _maxRange_type maxRange;

   typedef float _frequency_type;
  _frequency_type frequency;

   typedef float _angleSpan_type;
  _angleSpan_type angleSpan;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_id_type;
  _frame_id_type frame_id;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _pose_type;
  _pose_type pose;




  typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> const> ConstPtr;

}; // struct ThermalSensorMsg_

typedef ::stdr_msgs::ThermalSensorMsg_<std::allocator<void> > ThermalSensorMsg;

typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMsg > ThermalSensorMsgPtr;
typedef boost::shared_ptr< ::stdr_msgs::ThermalSensorMsg const> ThermalSensorMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/tmp/binarydeb/ros-indigo-stdr-msgs-0.3.2/msg', '/tmp/binarydeb/ros-indigo-stdr-msgs-0.3.2/obj-x86_64-linux-gnu/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fea53ce0501404c91ee4c18275946ca8";
  }

  static const char* value(const ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfea53ce0501404c9ULL;
  static const uint64_t static_value2 = 0x1ee4c18275946ca8ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/ThermalSensorMsg";
  }

  static const char* value(const ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sensor description\n\
\n\
float32 maxRange\n\
float32 frequency\n\
float32 angleSpan\n\
string frame_id\n\
\n\
# sensor pose, relative to robot center\n\
geometry_msgs/Pose2D pose \n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.maxRange);
      stream.next(m.frequency);
      stream.next(m.angleSpan);
      stream.next(m.frame_id);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ThermalSensorMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::ThermalSensorMsg_<ContainerAllocator>& v)
  {
    s << indent << "maxRange: ";
    Printer<float>::stream(s, indent + "  ", v.maxRange);
    s << indent << "frequency: ";
    Printer<float>::stream(s, indent + "  ", v.frequency);
    s << indent << "angleSpan: ";
    Printer<float>::stream(s, indent + "  ", v.angleSpan);
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame_id);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_THERMALSENSORMSG_H
