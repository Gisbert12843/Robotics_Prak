// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__STRUCT_H_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GaitInput in the package webots_spot_msgs.
typedef struct webots_spot_msgs__msg__GaitInput
{
  double x;
  double y;
  double z;
  double roll;
  double pitch;
  double yaw;
  double step_length;
  double lateral_fraction;
  double yaw_rate;
  double step_velocity;
  double clearance_height;
  double penetration_depth;
  double swing_period;
  double yaw_control;
  double yaw_control_on;
} webots_spot_msgs__msg__GaitInput;

// Struct for a sequence of webots_spot_msgs__msg__GaitInput.
typedef struct webots_spot_msgs__msg__GaitInput__Sequence
{
  webots_spot_msgs__msg__GaitInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__msg__GaitInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__STRUCT_H_
