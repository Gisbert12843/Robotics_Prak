// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from webots_spot_msgs:msg/Legs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "webots_spot_msgs/msg/detail/legs__rosidl_typesupport_introspection_c.h"
#include "webots_spot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "webots_spot_msgs/msg/detail/legs__functions.h"
#include "webots_spot_msgs/msg/detail/legs__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  webots_spot_msgs__msg__Legs__init(message_memory);
}

void webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_fini_function(void * message_memory)
{
  webots_spot_msgs__msg__Legs__fini(message_memory);
}

size_t webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__size_function__Legs__leg(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__get_const_function__Legs__leg(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__get_function__Legs__leg(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__fetch_function__Legs__leg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__get_const_function__Legs__leg(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__assign_function__Legs__leg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__get_function__Legs__leg(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_member_array[1] = {
  {
    "leg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(webots_spot_msgs__msg__Legs, leg),  // bytes offset in struct
    NULL,  // default value
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__size_function__Legs__leg,  // size() function pointer
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__get_const_function__Legs__leg,  // get_const(index) function pointer
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__get_function__Legs__leg,  // get(index) function pointer
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__fetch_function__Legs__leg,  // fetch(index, &value) function pointer
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__assign_function__Legs__leg,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_members = {
  "webots_spot_msgs__msg",  // message namespace
  "Legs",  // message name
  1,  // number of fields
  sizeof(webots_spot_msgs__msg__Legs),
  webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_member_array,  // message members
  webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_init_function,  // function to initialize message memory (memory has to be allocated)
  webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_type_support_handle = {
  0,
  &webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_webots_spot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webots_spot_msgs, msg, Legs)() {
  if (!webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_type_support_handle.typesupport_identifier) {
    webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &webots_spot_msgs__msg__Legs__rosidl_typesupport_introspection_c__Legs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
