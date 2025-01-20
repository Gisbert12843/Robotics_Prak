// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_spot_msgs:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__INT32__TRAITS_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__INT32__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_spot_msgs/msg/detail/int32__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webots_spot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Int32 & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Int32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Int32 & msg, bool use_flow_style = false)
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
  const webots_spot_msgs::msg::Int32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::msg::Int32 & msg)
{
  return webots_spot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::msg::Int32>()
{
  return "webots_spot_msgs::msg::Int32";
}

template<>
inline const char * name<webots_spot_msgs::msg::Int32>()
{
  return "webots_spot_msgs/msg/Int32";
}

template<>
struct has_fixed_size<webots_spot_msgs::msg::Int32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webots_spot_msgs::msg::Int32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webots_spot_msgs::msg::Int32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__INT32__TRAITS_HPP_
