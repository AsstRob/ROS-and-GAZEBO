// Generated by gencpp from file rocon_app_manager_msgs/Constants.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_CONSTANTS_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_CONSTANTS_H


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
struct Constants_
{
  typedef Constants_<ContainerAllocator> Type;

  Constants_()
    {
    }
  Constants_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }




    static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  NO_REMOTE_CONNECTION;
     static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  NO_REMOTE_CONTROLLER;
 

  typedef boost::shared_ptr< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> const> ConstPtr;

}; // struct Constants_

typedef ::rocon_app_manager_msgs::Constants_<std::allocator<void> > Constants;

typedef boost::shared_ptr< ::rocon_app_manager_msgs::Constants > ConstantsPtr;
typedef boost::shared_ptr< ::rocon_app_manager_msgs::Constants const> ConstantsConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Constants_<ContainerAllocator>::NO_REMOTE_CONNECTION =
        
          "none"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Constants_<ContainerAllocator>::NO_REMOTE_CONTROLLER =
        
          "none"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_app_manager_msgs::Constants_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_app_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rocon_std_msgs': ['/opt/ros/indigo/share/rocon_std_msgs/cmake/../msg'], 'rocon_service_pair_msgs': ['/opt/ros/indigo/share/rocon_service_pair_msgs/cmake/../msg'], 'rocon_app_manager_msgs': ['/tmp/binarydeb/ros-indigo-rocon-app-manager-msgs-0.7.12/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8dc55825f8d5b0d293568ddca66ef50f";
  }

  static const char* value(const ::rocon_app_manager_msgs::Constants_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8dc55825f8d5b0d2ULL;
  static const uint64_t static_value2 = 0x93568ddca66ef50fULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_app_manager_msgs/Constants";
  }

  static const char* value(const ::rocon_app_manager_msgs::Constants_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Rapp manager is not getting controlled, and is thus, available.\n\
string NO_REMOTE_CONNECTION=none\n\
# An alias for the above\n\
string NO_REMOTE_CONTROLLER=none\n\
";
  }

  static const char* value(const ::rocon_app_manager_msgs::Constants_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Constants_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_app_manager_msgs::Constants_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rocon_app_manager_msgs::Constants_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_CONSTANTS_H
