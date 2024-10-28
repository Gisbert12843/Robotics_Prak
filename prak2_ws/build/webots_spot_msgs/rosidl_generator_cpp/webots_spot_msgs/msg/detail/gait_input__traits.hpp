// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__TRAITS_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_spot_msgs/msg/detail/gait_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webots_spot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GaitInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: step_length
  {
    out << "step_length: ";
    rosidl_generator_traits::value_to_yaml(msg.step_length, out);
    out << ", ";
  }

  // member: lateral_fraction
  {
    out << "lateral_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_fraction, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: step_velocity
  {
    out << "step_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.step_velocity, out);
    out << ", ";
  }

  // member: clearance_height
  {
    out << "clearance_height: ";
    rosidl_generator_traits::value_to_yaml(msg.clearance_height, out);
    out << ", ";
  }

  // member: penetration_depth
  {
    out << "penetration_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.penetration_depth, out);
    out << ", ";
  }

  // member: swing_period
  {
    out << "swing_period: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_period, out);
    out << ", ";
  }

  // member: yaw_control
  {
    out << "yaw_control: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_control, out);
    out << ", ";
  }

  // member: yaw_control_on
  {
    out << "yaw_control_on: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_control_on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GaitInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: step_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_length: ";
    rosidl_generator_traits::value_to_yaml(msg.step_length, out);
    out << "\n";
  }

  // member: lateral_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_fraction, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: step_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.step_velocity, out);
    out << "\n";
  }

  // member: clearance_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clearance_height: ";
    rosidl_generator_traits::value_to_yaml(msg.clearance_height, out);
    out << "\n";
  }

  // member: penetration_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penetration_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.penetration_depth, out);
    out << "\n";
  }

  // member: swing_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swing_period: ";
    rosidl_generator_traits::value_to_yaml(msg.swing_period, out);
    out << "\n";
  }

  // member: yaw_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_control: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_control, out);
    out << "\n";
  }

  // member: yaw_control_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_control_on: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_control_on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GaitInput & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::msg::GaitInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::msg::GaitInput & msg)
{
  return webots_spot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::msg::GaitInput>()
{
  return "webots_spot_msgs::msg::GaitInput";
}

template<>
inline const char * name<webots_spot_msgs::msg::GaitInput>()
{
  return "webots_spot_msgs/msg/GaitInput";
}

template<>
struct has_fixed_size<webots_spot_msgs::msg::GaitInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webots_spot_msgs::msg::GaitInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webots_spot_msgs::msg::GaitInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__TRAITS_HPP_
