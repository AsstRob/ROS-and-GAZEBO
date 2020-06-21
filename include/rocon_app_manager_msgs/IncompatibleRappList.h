// Generated by gencpp from file rocon_app_manager_msgs/IncompatibleRappList.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_INCOMPATIBLERAPPLIST_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_INCOMPATIBLERAPPLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rocon_app_manager_msgs
{
template <class ContainerAllocator>
struct IncompatibleRappList_
{
  typedef IncompatibleRappList_<ContainerAllocator> Type;

  IncompatibleRappList_()
    : blacklisted_rapps()
    , non_whitelisted_rapps()
    , platform_incompatible_rapps()
    , capabilities_incompatible_rapps()  {
    }
  IncompatibleRappList_(const ContainerAllocator& _alloc)
    : blacklisted_rapps(_alloc)
    , non_whitelisted_rapps(_alloc)
    , platform_incompatible_rapps(_alloc)
    , capabilities_incompatible_rapps(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _blacklisted_rapps_type;
  _blacklisted_rapps_type blacklisted_rapps;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _non_whitelisted_rapps_type;
  _non_whitelisted_rapps_type non_whitelisted_rapps;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _platform_incompatible_rapps_type;
  _platform_incompatible_rapps_type platform_incompatible_rapps;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _capabilities_incompatible_rapps_type;
  _capabilities_incompatible_rapps_type capabilities_incompatible_rapps;




  typedef boost::shared_ptr< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> const> ConstPtr;

}; // struct IncompatibleRappList_

typedef ::rocon_app_manager_msgs::IncompatibleRappList_<std::allocator<void> > IncompatibleRappList;

typedef boost::shared_ptr< ::rocon_app_manager_msgs::IncompatibleRappList > IncompatibleRappListPtr;
typedef boost::shared_ptr< ::rocon_app_manager_msgs::IncompatibleRappList const> IncompatibleRappListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_app_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/opt/ros/indigo/share/rocon_std_msgs/cmake/../msg'], 'rocon_service_pair_msgs': ['/opt/ros/indigo/share/rocon_service_pair_msgs/cmake/../msg'], 'rocon_app_manager_msgs': ['/tmp/binarydeb/ros-indigo-rocon-app-manager-msgs-0.7.12/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8b60bc2510b0df387f6623f3db3a079";
  }

  static const char* value(const ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8b60bc2510b0df3ULL;
  static const uint64_t static_value2 = 0x87f6623f3db3a079ULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_app_manager_msgs/IncompatibleRappList";
  }

  static const char* value(const ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# List all apps which were filtered for some reason or another\n\
\n\
string[] blacklisted_rapps\n\
string[] non_whitelisted_rapps\n\
string[] platform_incompatible_rapps\n\
string[] capabilities_incompatible_rapps\n\
";
  }

  static const char* value(const ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.blacklisted_rapps);
      stream.next(m.non_whitelisted_rapps);
      stream.next(m.platform_incompatible_rapps);
      stream.next(m.capabilities_incompatible_rapps);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IncompatibleRappList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_app_manager_msgs::IncompatibleRappList_<ContainerAllocator>& v)
  {
    s << indent << "blacklisted_rapps[]" << std::endl;
    for (size_t i = 0; i < v.blacklisted_rapps.size(); ++i)
    {
      s << indent << "  blacklisted_rapps[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.blacklisted_rapps[i]);
    }
    s << indent << "non_whitelisted_rapps[]" << std::endl;
    for (size_t i = 0; i < v.non_whitelisted_rapps.size(); ++i)
    {
      s << indent << "  non_whitelisted_rapps[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.non_whitelisted_rapps[i]);
    }
    s << indent << "platform_incompatible_rapps[]" << std::endl;
    for (size_t i = 0; i < v.platform_incompatible_rapps.size(); ++i)
    {
      s << indent << "  platform_incompatible_rapps[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.platform_incompatible_rapps[i]);
    }
    s << indent << "capabilities_incompatible_rapps[]" << std::endl;
    for (size_t i = 0; i < v.capabilities_incompatible_rapps.size(); ++i)
    {
      s << indent << "  capabilities_incompatible_rapps[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.capabilities_incompatible_rapps[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_INCOMPATIBLERAPPLIST_H
