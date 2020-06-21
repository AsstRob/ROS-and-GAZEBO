// Generated by gencpp from file rospy_message_converter/TestArray.msg
// DO NOT EDIT!


#ifndef ROSPY_MESSAGE_CONVERTER_MESSAGE_TESTARRAY_H
#define ROSPY_MESSAGE_CONVERTER_MESSAGE_TESTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rospy_message_converter
{
template <class ContainerAllocator>
struct TestArray_
{
  typedef TestArray_<ContainerAllocator> Type;

  TestArray_()
    : data()  {
    }
  TestArray_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::rospy_message_converter::TestArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rospy_message_converter::TestArray_<ContainerAllocator> const> ConstPtr;

}; // struct TestArray_

typedef ::rospy_message_converter::TestArray_<std::allocator<void> > TestArray;

typedef boost::shared_ptr< ::rospy_message_converter::TestArray > TestArrayPtr;
typedef boost::shared_ptr< ::rospy_message_converter::TestArray const> TestArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rospy_message_converter::TestArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rospy_message_converter::TestArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rospy_message_converter

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rospy_message_converter': ['/tmp/binarydeb/ros-indigo-rospy-message-converter-0.5.0/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rospy_message_converter::TestArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rospy_message_converter::TestArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rospy_message_converter::TestArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rospy_message_converter::TestArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rospy_message_converter::TestArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rospy_message_converter::TestArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rospy_message_converter::TestArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "788898178a3da2c3718461eecda8f714";
  }

  static const char* value(const ::rospy_message_converter::TestArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x788898178a3da2c3ULL;
  static const uint64_t static_value2 = 0x718461eecda8f714ULL;
};

template<class ContainerAllocator>
struct DataType< ::rospy_message_converter::TestArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rospy_message_converter/TestArray";
  }

  static const char* value(const ::rospy_message_converter::TestArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rospy_message_converter::TestArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] data\n\
";
  }

  static const char* value(const ::rospy_message_converter::TestArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rospy_message_converter::TestArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rospy_message_converter::TestArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rospy_message_converter::TestArray_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPY_MESSAGE_CONVERTER_MESSAGE_TESTARRAY_H
