// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__BUILDER_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_spot_msgs/msg/detail/gait_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_spot_msgs
{

namespace msg
{

namespace builder
{

class Init_GaitInput_yaw_control_on
{
public:
  explicit Init_GaitInput_yaw_control_on(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  ::webots_spot_msgs::msg::GaitInput yaw_control_on(::webots_spot_msgs::msg::GaitInput::_yaw_control_on_type arg)
  {
    msg_.yaw_control_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_yaw_control
{
public:
  explicit Init_GaitInput_yaw_control(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_yaw_control_on yaw_control(::webots_spot_msgs::msg::GaitInput::_yaw_control_type arg)
  {
    msg_.yaw_control = std::move(arg);
    return Init_GaitInput_yaw_control_on(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_swing_period
{
public:
  explicit Init_GaitInput_swing_period(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_yaw_control swing_period(::webots_spot_msgs::msg::GaitInput::_swing_period_type arg)
  {
    msg_.swing_period = std::move(arg);
    return Init_GaitInput_yaw_control(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_penetration_depth
{
public:
  explicit Init_GaitInput_penetration_depth(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_swing_period penetration_depth(::webots_spot_msgs::msg::GaitInput::_penetration_depth_type arg)
  {
    msg_.penetration_depth = std::move(arg);
    return Init_GaitInput_swing_period(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_clearance_height
{
public:
  explicit Init_GaitInput_clearance_height(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_penetration_depth clearance_height(::webots_spot_msgs::msg::GaitInput::_clearance_height_type arg)
  {
    msg_.clearance_height = std::move(arg);
    return Init_GaitInput_penetration_depth(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_step_velocity
{
public:
  explicit Init_GaitInput_step_velocity(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_clearance_height step_velocity(::webots_spot_msgs::msg::GaitInput::_step_velocity_type arg)
  {
    msg_.step_velocity = std::move(arg);
    return Init_GaitInput_clearance_height(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_yaw_rate
{
public:
  explicit Init_GaitInput_yaw_rate(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_step_velocity yaw_rate(::webots_spot_msgs::msg::GaitInput::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_GaitInput_step_velocity(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_lateral_fraction
{
public:
  explicit Init_GaitInput_lateral_fraction(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_yaw_rate lateral_fraction(::webots_spot_msgs::msg::GaitInput::_lateral_fraction_type arg)
  {
    msg_.lateral_fraction = std::move(arg);
    return Init_GaitInput_yaw_rate(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_step_length
{
public:
  explicit Init_GaitInput_step_length(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_lateral_fraction step_length(::webots_spot_msgs::msg::GaitInput::_step_length_type arg)
  {
    msg_.step_length = std::move(arg);
    return Init_GaitInput_lateral_fraction(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_yaw
{
public:
  explicit Init_GaitInput_yaw(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_step_length yaw(::webots_spot_msgs::msg::GaitInput::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GaitInput_step_length(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_pitch
{
public:
  explicit Init_GaitInput_pitch(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_yaw pitch(::webots_spot_msgs::msg::GaitInput::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GaitInput_yaw(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_roll
{
public:
  explicit Init_GaitInput_roll(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_pitch roll(::webots_spot_msgs::msg::GaitInput::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_GaitInput_pitch(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_z
{
public:
  explicit Init_GaitInput_z(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_roll z(::webots_spot_msgs::msg::GaitInput::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GaitInput_roll(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_y
{
public:
  explicit Init_GaitInput_y(::webots_spot_msgs::msg::GaitInput & msg)
  : msg_(msg)
  {}
  Init_GaitInput_z y(::webots_spot_msgs::msg::GaitInput::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GaitInput_z(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

class Init_GaitInput_x
{
public:
  Init_GaitInput_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitInput_y x(::webots_spot_msgs::msg::GaitInput::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GaitInput_y(msg_);
  }

private:
  ::webots_spot_msgs::msg::GaitInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::msg::GaitInput>()
{
  return webots_spot_msgs::msg::builder::Init_GaitInput_x();
}

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__BUILDER_HPP_
