// Generated by gencpp from file rocon_service_pair_msgs/TestiesPair.msg
// DO NOT EDIT!


#ifndef ROCON_SERVICE_PAIR_MSGS_MESSAGE_TESTIESPAIR_H
#define ROCON_SERVICE_PAIR_MSGS_MESSAGE_TESTIESPAIR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rocon_service_pair_msgs/TestiesPairRequest.h>
#include <rocon_service_pair_msgs/TestiesPairResponse.h>

namespace rocon_service_pair_msgs
{
template <class ContainerAllocator>
struct TestiesPair_
{
  typedef TestiesPair_<ContainerAllocator> Type;

  TestiesPair_()
    : pair_request()
    , pair_response()  {
    }
  TestiesPair_(const ContainerAllocator& _alloc)
    : pair_request(_alloc)
    , pair_response(_alloc)  {
  (void)_alloc;
    }



   typedef  ::rocon_service_pair_msgs::TestiesPairRequest_<ContainerAllocator>  _pair_request_type;
  _pair_request_type pair_request;

   typedef  ::rocon_service_pair_msgs::TestiesPairResponse_<ContainerAllocator>  _pair_response_type;
  _pair_response_type pair_response;




  typedef boost::shared_ptr< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> const> ConstPtr;

}; // struct TestiesPair_

typedef ::rocon_service_pair_msgs::TestiesPair_<std::allocator<void> > TestiesPair;

typedef boost::shared_ptr< ::rocon_service_pair_msgs::TestiesPair > TestiesPairPtr;
typedef boost::shared_ptr< ::rocon_service_pair_msgs::TestiesPair const> TestiesPairConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_service_pair_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rocon_service_pair_msgs': ['/tmp/binarydeb/ros-indigo-rocon-service-pair-msgs-0.7.12/msg'], 'uuid_msgs': ['/opt/ros/indigo/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b5cb9b4ccdb74840ce04ea92d2a141d";
  }

  static const char* value(const ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b5cb9b4ccdb7484ULL;
  static const uint64_t static_value2 = 0x0ce04ea92d2a141dULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_service_pair_msgs/TestiesPair";
  }

  static const char* value(const ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
TestiesPairRequest pair_request\n\
TestiesPairResponse pair_response\n\
\n\
================================================================================\n\
MSG: rocon_service_pair_msgs/TestiesPairRequest\n\
uuid_msgs/UniqueID id\n\
TestiesRequest request\n\
\n\
================================================================================\n\
MSG: uuid_msgs/UniqueID\n\
# A universally unique identifier (UUID).\n\
#\n\
#  http://en.wikipedia.org/wiki/Universally_unique_identifier\n\
#  http://tools.ietf.org/html/rfc4122.html\n\
\n\
uint8[16] uuid\n\
\n\
================================================================================\n\
MSG: rocon_service_pair_msgs/TestiesRequest\n\
string data\n\
\n\
================================================================================\n\
MSG: rocon_service_pair_msgs/TestiesPairResponse\n\
uuid_msgs/UniqueID id\n\
TestiesResponse response\n\
\n\
================================================================================\n\
MSG: rocon_service_pair_msgs/TestiesResponse\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM A SERVICE PAIR DEFINITION ======\n\
uuid_msgs/UniqueID id\n\
string data\n\
";
  }

  static const char* value(const ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pair_request);
      stream.next(m.pair_response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestiesPair_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_service_pair_msgs::TestiesPair_<ContainerAllocator>& v)
  {
    s << indent << "pair_request: ";
    s << std::endl;
    Printer< ::rocon_service_pair_msgs::TestiesPairRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.pair_request);
    s << indent << "pair_response: ";
    s << std::endl;
    Printer< ::rocon_service_pair_msgs::TestiesPairResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.pair_response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_SERVICE_PAIR_MSGS_MESSAGE_TESTIESPAIR_H
