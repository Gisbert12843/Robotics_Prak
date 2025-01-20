// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from webots_spot_msgs:msg/Legs.idl
// generated code does not contain a copyright notice
#include "webots_spot_msgs/msg/detail/legs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "webots_spot_msgs/msg/detail/legs__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace webots_spot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_spot_msgs
cdr_serialize(
  const webots_spot_msgs::msg::Legs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leg
  {
    cdr << ros_message.leg;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_spot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  webots_spot_msgs::msg::Legs & ros_message)
{
  // Member: leg
  {
    cdr >> ros_message.leg;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_spot_msgs
get_serialized_size(
  const webots_spot_msgs::msg::Legs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leg
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.leg[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webots_spot_msgs
max_serialized_size_Legs(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: leg
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = webots_spot_msgs::msg::Legs;
    is_plain =
      (
      offsetof(DataType, leg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Legs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const webots_spot_msgs::msg::Legs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Legs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<webots_spot_msgs::msg::Legs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Legs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const webots_spot_msgs::msg::Legs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Legs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Legs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Legs__callbacks = {
  "webots_spot_msgs::msg",
  "Legs",
  _Legs__cdr_serialize,
  _Legs__cdr_deserialize,
  _Legs__get_serialized_size,
  _Legs__max_serialized_size
};

static rosidl_message_type_support_t _Legs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Legs__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace webots_spot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_webots_spot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_spot_msgs::msg::Legs>()
{
  return &webots_spot_msgs::msg::typesupport_fastrtps_cpp::_Legs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webots_spot_msgs, msg, Legs)() {
  return &webots_spot_msgs::msg::typesupport_fastrtps_cpp::_Legs__handle;
}

#ifdef __cplusplus
}
#endif
