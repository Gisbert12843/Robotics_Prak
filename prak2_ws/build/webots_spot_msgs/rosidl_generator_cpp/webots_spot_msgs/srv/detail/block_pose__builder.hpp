// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_spot_msgs:srv/BlockPose.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__BUILDER_HPP_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_spot_msgs/srv/detail/block_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_spot_msgs
{

namespace srv
{

namespace builder
{

class Init_BlockPose_Request_block
{
public:
  Init_BlockPose_Request_block()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::srv::BlockPose_Request block(::webots_spot_msgs::srv::BlockPose_Request::_block_type arg)
  {
    msg_.block = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::srv::BlockPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::srv::BlockPose_Request>()
{
  return webots_spot_msgs::srv::builder::Init_BlockPose_Request_block();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace srv
{

namespace builder
{

class Init_BlockPose_Response_location
{
public:
  Init_BlockPose_Response_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::srv::BlockPose_Response location(::webots_spot_msgs::srv::BlockPose_Response::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::srv::BlockPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::srv::BlockPose_Response>()
{
  return webots_spot_msgs::srv::builder::Init_BlockPose_Response_location();
}

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__BUILDER_HPP_
