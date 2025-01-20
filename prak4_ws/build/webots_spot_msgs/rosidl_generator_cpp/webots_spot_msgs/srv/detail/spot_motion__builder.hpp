// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_spot_msgs:srv/SpotMotion.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__BUILDER_HPP_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_spot_msgs/srv/detail/spot_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_spot_msgs
{

namespace srv
{

namespace builder
{

class Init_SpotMotion_Request_override
{
public:
  Init_SpotMotion_Request_override()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::srv::SpotMotion_Request override(::webots_spot_msgs::srv::SpotMotion_Request::_override_type arg)
  {
    msg_.override = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::srv::SpotMotion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::srv::SpotMotion_Request>()
{
  return webots_spot_msgs::srv::builder::Init_SpotMotion_Request_override();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace srv
{

namespace builder
{

class Init_SpotMotion_Response_answer
{
public:
  Init_SpotMotion_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::srv::SpotMotion_Response answer(::webots_spot_msgs::srv::SpotMotion_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::srv::SpotMotion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::srv::SpotMotion_Response>()
{
  return webots_spot_msgs::srv::builder::Init_SpotMotion_Response_answer();
}

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__BUILDER_HPP_
