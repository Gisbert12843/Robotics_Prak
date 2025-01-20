// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_spot_msgs:msg/Legs.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__TRAITS_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_spot_msgs/msg/detail/legs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webots_spot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Legs & msg,
  std::ostream & out)
{
  out << "{";
  // member: leg
  {
    if (msg.leg.size() == 0) {
      out << "leg: []";
    } else {
      out << "leg: [";
      size_t pending_items = msg.leg.size();
      for (auto item : msg.leg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Legs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leg.size() == 0) {
      out << "leg: []\n";
    } else {
      out << "leg:\n";
      for (auto item : msg.leg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Legs & msg, bool use_flow_style = false)
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
  const webots_spot_msgs::msg::Legs & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::msg::Legs & msg)
{
  return webots_spot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::msg::Legs>()
{
  return "webots_spot_msgs::msg::Legs";
}

template<>
inline const char * name<webots_spot_msgs::msg::Legs>()
{
  return "webots_spot_msgs/msg/Legs";
}

template<>
struct has_fixed_size<webots_spot_msgs::msg::Legs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webots_spot_msgs::msg::Legs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webots_spot_msgs::msg::Legs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__TRAITS_HPP_
