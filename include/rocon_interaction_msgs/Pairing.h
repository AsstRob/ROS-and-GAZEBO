// Generated by gencpp from file rocon_interaction_msgs/Pairing.msg
// DO NOT EDIT!


#ifndef ROCON_INTERACTION_MSGS_MESSAGE_PAIRING_H
#define ROCON_INTERACTION_MSGS_MESSAGE_PAIRING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rocon_std_msgs/Remapping.h>
#include <rocon_std_msgs/KeyValue.h>

namespace rocon_interaction_msgs
{
template <class ContainerAllocator>
struct Pairing_
{
  typedef Pairing_<ContainerAllocator> Type;

  Pairing_()
    : rapp()
    , remappings()
    , parameters()  {
    }
  Pairing_(const ContainerAllocator& _alloc)
    : rapp(_alloc)
    , remappings(_alloc)
    , parameters(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _rapp_type;
  _rapp_type rapp;

   typedef std::vector< ::rocon_std_msgs::Remapping_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rocon_std_msgs::Remapping_<ContainerAllocator> >::other >  _remappings_type;
  _remappings_type remappings;

   typedef std::vector< ::rocon_std_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::rocon_std_msgs::KeyValue_<ContainerAllocator> >::other >  _parameters_type;
  _parameters_type parameters;




  typedef boost::shared_ptr< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> const> ConstPtr;

}; // struct Pairing_

typedef ::rocon_interaction_msgs::Pairing_<std::allocator<void> > Pairing;

typedef boost::shared_ptr< ::rocon_interaction_msgs::Pairing > PairingPtr;
typedef boost::shared_ptr< ::rocon_interaction_msgs::Pairing const> PairingConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_interaction_msgs::Pairing_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2a37586e7b5f4eb13fa7aa69cfea487";
  }

  static const char* value(const ::rocon_interaction_msgs::Pairing_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2a37586e7b5f4ebULL;
  static const uint64_t static_value2 = 0x13fa7aa69cfea487ULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_interaction_msgs/Pairing";
  }

  static const char* value(const ::rocon_interaction_msgs::Pairing_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Properties of a paired app that is destined to work with a rocon interaction.\n\
\n\
# ros resource name of the rapp, e.g. rocon_apps/talker\n\
string rapp\n\
\n\
rocon_std_msgs/Remapping[] remappings\n\
\n\
# Key value pairs representing rapp parameters\n\
rocon_std_msgs/KeyValue[] parameters\n\
\n\
================================================================================\n\
MSG: rocon_std_msgs/Remapping\n\
# Describes your typical ros remapping\n\
\n\
string remap_from\n\
string remap_to\n\
\n\
================================================================================\n\
MSG: rocon_std_msgs/KeyValue\n\
string key\n\
string value\n\
";
  }

  static const char* value(const ::rocon_interaction_msgs::Pairing_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rapp);
      stream.next(m.remappings);
      stream.next(m.parameters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pairing_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_interaction_msgs::Pairing_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_interaction_msgs::Pairing_<ContainerAllocator>& v)
  {
    s << indent << "rapp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rapp);
    s << indent << "remappings[]" << std::endl;
    for (size_t i = 0; i < v.remappings.size(); ++i)
    {
      s << indent << "  remappings[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rocon_std_msgs::Remapping_<ContainerAllocator> >::stream(s, indent + "    ", v.remappings[i]);
    }
    s << indent << "parameters[]" << std::endl;
    for (size_t i = 0; i < v.parameters.size(); ++i)
    {
      s << indent << "  parameters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rocon_std_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.parameters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_INTERACTION_MSGS_MESSAGE_PAIRING_H
