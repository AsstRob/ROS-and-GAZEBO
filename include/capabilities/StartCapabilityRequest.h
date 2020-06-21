// Generated by gencpp from file capabilities/StartCapabilityRequest.msg
// DO NOT EDIT!


#ifndef CAPABILITIES_MESSAGE_STARTCAPABILITYREQUEST_H
#define CAPABILITIES_MESSAGE_STARTCAPABILITYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace capabilities
{
template <class ContainerAllocator>
struct StartCapabilityRequest_
{
  typedef StartCapabilityRequest_<ContainerAllocator> Type;

  StartCapabilityRequest_()
    : capability()
    , preferred_provider()  {
    }
  StartCapabilityRequest_(const ContainerAllocator& _alloc)
    : capability(_alloc)
    , preferred_provider(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _capability_type;
  _capability_type capability;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _preferred_provider_type;
  _preferred_provider_type preferred_provider;




  typedef boost::shared_ptr< ::capabilities::StartCapabilityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::capabilities::StartCapabilityRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StartCapabilityRequest_

typedef ::capabilities::StartCapabilityRequest_<std::allocator<void> > StartCapabilityRequest;

typedef boost::shared_ptr< ::capabilities::StartCapabilityRequest > StartCapabilityRequestPtr;
typedef boost::shared_ptr< ::capabilities::StartCapabilityRequest const> StartCapabilityRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::capabilities::StartCapabilityRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace capabilities

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'capabilities': ['/tmp/binarydeb/ros-indigo-capabilities-0.2.0/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::capabilities::StartCapabilityRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::capabilities::StartCapabilityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::capabilities::StartCapabilityRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2cc14acc01fae719c849d4ea89820c67";
  }

  static const char* value(const ::capabilities::StartCapabilityRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2cc14acc01fae719ULL;
  static const uint64_t static_value2 = 0xc849d4ea89820c67ULL;
};

template<class ContainerAllocator>
struct DataType< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "capabilities/StartCapabilityRequest";
  }

  static const char* value(const ::capabilities::StartCapabilityRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string capability\n\
string preferred_provider\n\
";
  }

  static const char* value(const ::capabilities::StartCapabilityRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.capability);
      stream.next(m.preferred_provider);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartCapabilityRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::capabilities::StartCapabilityRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::capabilities::StartCapabilityRequest_<ContainerAllocator>& v)
  {
    s << indent << "capability: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.capability);
    s << indent << "preferred_provider: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.preferred_provider);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAPABILITIES_MESSAGE_STARTCAPABILITYREQUEST_H
