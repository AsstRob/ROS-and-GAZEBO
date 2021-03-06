// Generated by gencpp from file capabilities/GetNodeletManagerNameResponse.msg
// DO NOT EDIT!


#ifndef CAPABILITIES_MESSAGE_GETNODELETMANAGERNAMERESPONSE_H
#define CAPABILITIES_MESSAGE_GETNODELETMANAGERNAMERESPONSE_H


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
struct GetNodeletManagerNameResponse_
{
  typedef GetNodeletManagerNameResponse_<ContainerAllocator> Type;

  GetNodeletManagerNameResponse_()
    : nodelet_manager_name()  {
    }
  GetNodeletManagerNameResponse_(const ContainerAllocator& _alloc)
    : nodelet_manager_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nodelet_manager_name_type;
  _nodelet_manager_name_type nodelet_manager_name;




  typedef boost::shared_ptr< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetNodeletManagerNameResponse_

typedef ::capabilities::GetNodeletManagerNameResponse_<std::allocator<void> > GetNodeletManagerNameResponse;

typedef boost::shared_ptr< ::capabilities::GetNodeletManagerNameResponse > GetNodeletManagerNameResponsePtr;
typedef boost::shared_ptr< ::capabilities::GetNodeletManagerNameResponse const> GetNodeletManagerNameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "014bb50d87c6c69df1cbae3d5439041f";
  }

  static const char* value(const ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x014bb50d87c6c69dULL;
  static const uint64_t static_value2 = 0xf1cbae3d5439041fULL;
};

template<class ContainerAllocator>
struct DataType< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "capabilities/GetNodeletManagerNameResponse";
  }

  static const char* value(const ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string nodelet_manager_name\n\
\n\
";
  }

  static const char* value(const ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodelet_manager_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNodeletManagerNameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::capabilities::GetNodeletManagerNameResponse_<ContainerAllocator>& v)
  {
    s << indent << "nodelet_manager_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodelet_manager_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAPABILITIES_MESSAGE_GETNODELETMANAGERNAMERESPONSE_H
