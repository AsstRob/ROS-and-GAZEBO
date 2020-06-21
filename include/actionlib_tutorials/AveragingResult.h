// Generated by gencpp from file actionlib_tutorials/AveragingResult.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_TUTORIALS_MESSAGE_AVERAGINGRESULT_H
#define ACTIONLIB_TUTORIALS_MESSAGE_AVERAGINGRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib_tutorials
{
template <class ContainerAllocator>
struct AveragingResult_
{
  typedef AveragingResult_<ContainerAllocator> Type;

  AveragingResult_()
    : mean(0.0)
    , std_dev(0.0)  {
    }
  AveragingResult_(const ContainerAllocator& _alloc)
    : mean(0.0)
    , std_dev(0.0)  {
  (void)_alloc;
    }



   typedef float _mean_type;
  _mean_type mean;

   typedef float _std_dev_type;
  _std_dev_type std_dev;




  typedef boost::shared_ptr< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> const> ConstPtr;

}; // struct AveragingResult_

typedef ::actionlib_tutorials::AveragingResult_<std::allocator<void> > AveragingResult;

typedef boost::shared_ptr< ::actionlib_tutorials::AveragingResult > AveragingResultPtr;
typedef boost::shared_ptr< ::actionlib_tutorials::AveragingResult const> AveragingResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_tutorials::AveragingResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'actionlib_tutorials': ['/tmp/binarydeb/ros-indigo-actionlib-tutorials-0.1.10/obj-x86_64-linux-gnu/devel/share/actionlib_tutorials/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5c7decf6df75ffb4367a05c1bcc7612";
  }

  static const char* value(const ::actionlib_tutorials::AveragingResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5c7decf6df75ffbULL;
  static const uint64_t static_value2 = 0x4367a05c1bcc7612ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_tutorials/AveragingResult";
  }

  static const char* value(const ::actionlib_tutorials::AveragingResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
float32 mean\n\
float32 std_dev\n\
";
  }

  static const char* value(const ::actionlib_tutorials::AveragingResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mean);
      stream.next(m.std_dev);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AveragingResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_tutorials::AveragingResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_tutorials::AveragingResult_<ContainerAllocator>& v)
  {
    s << indent << "mean: ";
    Printer<float>::stream(s, indent + "  ", v.mean);
    s << indent << "std_dev: ";
    Printer<float>::stream(s, indent + "  ", v.std_dev);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_TUTORIALS_MESSAGE_AVERAGINGRESULT_H
