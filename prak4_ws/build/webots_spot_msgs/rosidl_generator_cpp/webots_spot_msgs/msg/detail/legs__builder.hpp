// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_spot_msgs:msg/Legs.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__BUILDER_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_spot_msgs/msg/detail/legs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_spot_msgs
{

namespace msg
{

namespace builder
{

class Init_Legs_leg
{
public:
  Init_Legs_leg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::msg::Legs leg(::webots_spot_msgs::msg::Legs::_leg_type arg)
  {
    msg_.leg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::msg::Legs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::msg::Legs>()
{
  return webots_spot_msgs::msg::builder::Init_Legs_leg();
}

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__BUILDER_HPP_
