// Generated by gencpp from file zeroconf_msgs/AddListenerRequest.msg
// DO NOT EDIT!


#ifndef ZEROCONF_MSGS_MESSAGE_ADDLISTENERREQUEST_H
#define ZEROCONF_MSGS_MESSAGE_ADDLISTENERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zeroconf_msgs
{
template <class ContainerAllocator>
struct AddListenerRequest_
{
  typedef AddListenerRequest_<ContainerAllocator> Type;

  AddListenerRequest_()
    : service_type()  {
    }
  AddListenerRequest_(const ContainerAllocator& _alloc)
    : service_type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _service_type_type;
  _service_type_type service_type;




  typedef boost::shared_ptr< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddListenerRequest_

typedef ::zeroconf_msgs::AddListenerRequest_<std::allocator<void> > AddListenerRequest;

typedef boost::shared_ptr< ::zeroconf_msgs::AddListenerRequest > AddListenerRequestPtr;
typedef boost::shared_ptr< ::zeroconf_msgs::AddListenerRequest const> AddListenerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zeroconf_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'zeroconf_msgs': ['/tmp/binarydeb/ros-indigo-zeroconf-msgs-0.2.1/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e1bf1fd6519c823d87c16f342a193a85";
  }

  static const char* value(const ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe1bf1fd6519c823dULL;
  static const uint64_t static_value2 = 0x87c16f342a193a85ULL;
};

template<class ContainerAllocator>
struct DataType< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zeroconf_msgs/AddListenerRequest";
  }

  static const char* value(const ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string service_type\n\
";
  }

  static const char* value(const ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.service_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddListenerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zeroconf_msgs::AddListenerRequest_<ContainerAllocator>& v)
  {
    s << indent << "service_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.service_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZEROCONF_MSGS_MESSAGE_ADDLISTENERREQUEST_H