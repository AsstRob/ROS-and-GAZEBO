// Generated by gencpp from file gateway_msgs/ConnectHubRequest.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_CONNECTHUBREQUEST_H
#define GATEWAY_MSGS_MESSAGE_CONNECTHUBREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gateway_msgs
{
template <class ContainerAllocator>
struct ConnectHubRequest_
{
  typedef ConnectHubRequest_<ContainerAllocator> Type;

  ConnectHubRequest_()
    : uri()  {
    }
  ConnectHubRequest_(const ContainerAllocator& _alloc)
    : uri(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uri_type;
  _uri_type uri;




  typedef boost::shared_ptr< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ConnectHubRequest_

typedef ::gateway_msgs::ConnectHubRequest_<std::allocator<void> > ConnectHubRequest;

typedef boost::shared_ptr< ::gateway_msgs::ConnectHubRequest > ConnectHubRequestPtr;
typedef boost::shared_ptr< ::gateway_msgs::ConnectHubRequest const> ConnectHubRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gateway_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'gateway_msgs': ['/tmp/binarydeb/ros-indigo-gateway-msgs-0.7.12/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "636fe5e07550f026d28388e95c38a9f4";
  }

  static const char* value(const ::gateway_msgs::ConnectHubRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x636fe5e07550f026ULL;
  static const uint64_t static_value2 = 0xd28388e95c38a9f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gateway_msgs/ConnectHubRequest";
  }

  static const char* value(const ::gateway_msgs::ConnectHubRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
string uri\n\
";
  }

  static const char* value(const ::gateway_msgs::ConnectHubRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uri);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConnectHubRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gateway_msgs::ConnectHubRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gateway_msgs::ConnectHubRequest_<ContainerAllocator>& v)
  {
    s << indent << "uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uri);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_CONNECTHUBREQUEST_H
