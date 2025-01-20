// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webots_spot_msgs:action/PeakAndDetectObject.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__TRAITS_HPP_
#define WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webots_spot_msgs/action/detail/peak_and_detect_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    rosidl_generator_traits::value_to_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image: ";
    rosidl_generator_traits::value_to_yaml(msg.image, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_Goal & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_Goal>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_Goal";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_Goal>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_Goal";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: object
  {
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_Result & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_Result>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_Result";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_Result>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_Result";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_Feedback & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_Feedback>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_Feedback";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_Feedback>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_Feedback";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "webots_spot_msgs/action/detail/peak_and_detect_object__traits.hpp"

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_SendGoal_Request";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_Goal>::value> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_Goal>::value> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_SendGoal_Response";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_SendGoal>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_SendGoal";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_SendGoal>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_SendGoal";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>::value &&
    has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>::value &&
    has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<webots_spot_msgs::action::PeakAndDetectObject_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_GetResult_Request";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "webots_spot_msgs/action/detail/peak_and_detect_object__traits.hpp"

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_GetResult_Response";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_Result>::value> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_Result>::value> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_GetResult>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_GetResult";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_GetResult>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_GetResult";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>::value &&
    has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>::value &&
    has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>::value
  >
{
};

template<>
struct is_service<webots_spot_msgs::action::PeakAndDetectObject_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "webots_spot_msgs/action/detail/peak_and_detect_object__traits.hpp"

namespace webots_spot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PeakAndDetectObject_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PeakAndDetectObject_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PeakAndDetectObject_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace webots_spot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webots_spot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  webots_spot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webots_spot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage & msg)
{
  return webots_spot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage>()
{
  return "webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage";
}

template<>
inline const char * name<webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage>()
{
  return "webots_spot_msgs/action/PeakAndDetectObject_FeedbackMessage";
}

template<>
struct has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<webots_spot_msgs::action::PeakAndDetectObject_Feedback>::value> {};

template<>
struct has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<webots_spot_msgs::action::PeakAndDetectObject_Feedback>::value> {};

template<>
struct is_message<webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<webots_spot_msgs::action::PeakAndDetectObject>
  : std::true_type
{
};

template<>
struct is_action_goal<webots_spot_msgs::action::PeakAndDetectObject_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<webots_spot_msgs::action::PeakAndDetectObject_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<webots_spot_msgs::action::PeakAndDetectObject_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__TRAITS_HPP_
