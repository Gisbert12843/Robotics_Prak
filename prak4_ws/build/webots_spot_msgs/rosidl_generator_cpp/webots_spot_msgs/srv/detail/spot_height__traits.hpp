// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_spot_msgs:srv/SpotHeight.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_HEIGHT__TRAITS_HPP_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_HEIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_spot_msgs/srv/detail/spot_height__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webots_spot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpotHeight_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpotHeight_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpotHeight_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::srv::SpotHeight_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::srv::SpotHeight_Request & msg)
{
  return webots_spot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::srv::SpotHeight_Request>()
{
  return "webots_spot_msgs::srv::SpotHeight_Request";
}

template<>
inline const char * name<webots_spot_msgs::srv::SpotHeight_Request>()
{
  return "webots_spot_msgs/srv/SpotHeight_Request";
}

template<>
struct has_fixed_size<webots_spot_msgs::srv::SpotHeight_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webots_spot_msgs::srv::SpotHeight_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webots_spot_msgs::srv::SpotHeight_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace webots_spot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpotHeight_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpotHeight_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpotHeight_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::srv::SpotHeight_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::srv::SpotHeight_Response & msg)
{
  return webots_spot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::srv::SpotHeight_Response>()
{
  return "webots_spot_msgs::srv::SpotHeight_Response";
}

template<>
inline const char * name<webots_spot_msgs::srv::SpotHeight_Response>()
{
  return "webots_spot_msgs/srv/SpotHeight_Response";
}

template<>
struct has_fixed_size<webots_spot_msgs::srv::SpotHeight_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_spot_msgs::srv::SpotHeight_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_spot_msgs::srv::SpotHeight_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_spot_msgs::srv::SpotHeight>()
{
  return "webots_spot_msgs::srv::SpotHeight";
}

template<>
inline const char * name<webots_spot_msgs::srv::SpotHeight>()
{
  return "webots_spot_msgs/srv/SpotHeight";
}

template<>
struct has_fixed_size<webots_spot_msgs::srv::SpotHeight>
  : std::integral_constant<
    bool,
    has_fixed_size<webots_spot_msgs::srv::SpotHeight_Request>::value &&
    has_fixed_size<webots_spot_msgs::srv::SpotHeight_Response>::value
  >
{
};

template<>
struct has_bounded_size<webots_spot_msgs::srv::SpotHeight>
  : std::integral_constant<
    bool,
    has_bounded_size<webots_spot_msgs::srv::SpotHeight_Request>::value &&
    has_bounded_size<webots_spot_msgs::srv::SpotHeight_Response>::value
  >
{
};

template<>
struct is_service<webots_spot_msgs::srv::SpotHeight>
  : std::true_type
{
};

template<>
struct is_service_request<webots_spot_msgs::srv::SpotHeight_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webots_spot_msgs::srv::SpotHeight_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_HEIGHT__TRAITS_HPP_
