// Generated by gencpp from file rocon_interaction_msgs/Pair.msg
// DO NOT EDIT!


#ifndef ROCON_INTERACTION_MSGS_MESSAGE_PAIR_H
#define ROCON_INTERACTION_MSGS_MESSAGE_PAIR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rocon_interaction_msgs
{
template <class ContainerAllocator>
struct Pair_
{
  typedef Pair_<ContainerAllocator> Type;

  Pair_()
    : rapp()
    , remocon()  {
    }
  Pair_(const ContainerAllocator& _alloc)
    : rapp(_alloc)
    , remocon(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _rapp_type;
  _rapp_type rapp;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _remocon_type;
  _remocon_type remocon;




  typedef boost::shared_ptr< ::rocon_interaction_msgs::Pair_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_interaction_msgs::Pair_<ContainerAllocator> const> ConstPtr;

}; // struct Pair_

typedef ::rocon_interaction_msgs::Pair_<std::allocator<void> > Pair;

typedef boost::shared_ptr< ::rocon_interaction_msgs::Pair > PairPtr;
typedef boost::shared_ptr< ::rocon_interaction_msgs::Pair const> PairConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_interaction_msgs::Pair_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/opt/ros/indigo/share/rocon_std_msgs/cmake/../msg'], 'rocon_service_pair_msgs': ['/opt/ros/indigo/share/rocon_service_pair_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rocon_interaction_msgs': ['/tmp/binarydeb/ros-indigo-rocon-interaction-msgs-0.7.12/msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_interaction_msgs::Pair_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_interaction_msgs::Pair_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_interaction_msgs::Pair_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eee13ef64ff35326a7c0b99255f90428";
  }

  static const char* value(const ::rocon_interaction_msgs::Pair_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeee13ef64ff35326ULL;
  static const uint64_t static_value2 = 0xa7c0b99255f90428ULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_interaction_msgs/Pair";
  }

  static const char* value(const ::rocon_interaction_msgs::Pair_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Indicates what pairs (rapp, remocon) are running at any point in time.\n\
# If none, these values drop back to empty strings.\n\
\n\
string rapp\n\
string remocon\n\
";
  }

  static const char* value(const ::rocon_interaction_msgs::Pair_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rapp);
      stream.next(m.remocon);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pair_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_interaction_msgs::Pair_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_interaction_msgs::Pair_<ContainerAllocator>& v)
  {
    s << indent << "rapp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rapp);
    s << indent << "remocon: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.remocon);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_INTERACTION_MSGS_MESSAGE_PAIR_H
