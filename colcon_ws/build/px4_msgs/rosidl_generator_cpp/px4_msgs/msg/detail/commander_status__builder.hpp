// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CommanderStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/commander_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CommanderStatus_state
{
public:
  explicit Init_CommanderStatus_state(::px4_msgs::msg::CommanderStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CommanderStatus state(::px4_msgs::msg::CommanderStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CommanderStatus msg_;
};

class Init_CommanderStatus_timestamp
{
public:
  Init_CommanderStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommanderStatus_state timestamp(::px4_msgs::msg::CommanderStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CommanderStatus_state(msg_);
  }

private:
  ::px4_msgs::msg::CommanderStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CommanderStatus>()
{
  return px4_msgs::msg::builder::Init_CommanderStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_STATUS__BUILDER_HPP_
