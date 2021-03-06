// Generated by gencpp from file gateway_msgs/AdvertiseAllResponse.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_ADVERTISEALLRESPONSE_H
#define GATEWAY_MSGS_MESSAGE_ADVERTISEALLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gateway_msgs/Rule.h>

namespace gateway_msgs
{
template <class ContainerAllocator>
struct AdvertiseAllResponse_
{
  typedef AdvertiseAllResponse_<ContainerAllocator> Type;

  AdvertiseAllResponse_()
    : result(0)
    , error_message()
    , blacklist()  {
    }
  AdvertiseAllResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , error_message(_alloc)
    , blacklist(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_message_type;
  _error_message_type error_message;

   typedef std::vector< ::gateway_msgs::Rule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::gateway_msgs::Rule_<ContainerAllocator> >::other >  _blacklist_type;
  _blacklist_type blacklist;




  typedef boost::shared_ptr< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AdvertiseAllResponse_

typedef ::gateway_msgs::AdvertiseAllResponse_<std::allocator<void> > AdvertiseAllResponse;

typedef boost::shared_ptr< ::gateway_msgs::AdvertiseAllResponse > AdvertiseAllResponsePtr;
typedef boost::shared_ptr< ::gateway_msgs::AdvertiseAllResponse const> AdvertiseAllResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9c8370d5d4ea835b3dd7ba52feee140";
  }

  static const char* value(const ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9c8370d5d4ea835ULL;
  static const uint64_t static_value2 = 0xb3dd7ba52feee140ULL;
};

template<class ContainerAllocator>
struct DataType< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gateway_msgs/AdvertiseAllResponse";
  }

  static const char* value(const ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
int8 result\n\
string error_message\n\
\n\
Rule[] blacklist\n\
\n\
\n\
================================================================================\n\
MSG: gateway_msgs/Rule\n\
# Standard gateway connection rule\n\
\n\
# type of connection (from gateway_msgs.msg.Connection)\n\
string type\n\
\n\
# this is the topic/service name or the action base name (a regex is supported)\n\
string name \n\
\n\
# (optional) an optional node name can be provided. if node name is not provided\n\
# then all nodes are matched (also supports regex)\n\
string node\n\
";
  }

  static const char* value(const ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.error_message);
      stream.next(m.blacklist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AdvertiseAllResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gateway_msgs::AdvertiseAllResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int8_t>::stream(s, indent + "  ", v.result);
    s << indent << "error_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_message);
    s << indent << "blacklist[]" << std::endl;
    for (size_t i = 0; i < v.blacklist.size(); ++i)
    {
      s << indent << "  blacklist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gateway_msgs::Rule_<ContainerAllocator> >::stream(s, indent + "    ", v.blacklist[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_ADVERTISEALLRESPONSE_H
