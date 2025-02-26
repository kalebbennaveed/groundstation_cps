// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ParameterReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ParameterReq __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ParameterReq __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParameterReq_
{
  using Type = ParameterReq_<ContainerAllocator>;

  explicit ParameterReq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 16>::iterator, uint8_t>(this->param_name.begin(), this->param_name.end(), 0);
      this->set = false;
      this->value = 0.0f;
    }
  }

  explicit ParameterReq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 16>::iterator, uint8_t>(this->param_name.begin(), this->param_name.end(), 0);
      this->set = false;
      this->value = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _param_name_type =
    std::array<uint8_t, 16>;
  _param_name_type param_name;
  using _set_type =
    bool;
  _set_type set;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__param_name(
    const std::array<uint8_t, 16> & _arg)
  {
    this->param_name = _arg;
    return *this;
  }
  Type & set__set(
    const bool & _arg)
  {
    this->set = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::ParameterReq_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ParameterReq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ParameterReq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ParameterReq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ParameterReq
    std::shared_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ParameterReq
    std::shared_ptr<px4_msgs::msg::ParameterReq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParameterReq_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->param_name != other.param_name) {
      return false;
    }
    if (this->set != other.set) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParameterReq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParameterReq_

// alias to use template instance with default allocator
using ParameterReq =
  px4_msgs::msg::ParameterReq_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__STRUCT_HPP_
