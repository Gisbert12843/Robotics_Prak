// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_spot_msgs:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__INT32__BUILDER_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__INT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_spot_msgs/msg/detail/int32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_spot_msgs
{

namespace msg
{

namespace builder
{

class Init_Int32_data
{
public:
  Init_Int32_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::msg::Int32 data(::webots_spot_msgs::msg::Int32::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::msg::Int32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::msg::Int32>()
{
  return webots_spot_msgs::msg::builder::Init_Int32_data();
}

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__INT32__BUILDER_HPP_
