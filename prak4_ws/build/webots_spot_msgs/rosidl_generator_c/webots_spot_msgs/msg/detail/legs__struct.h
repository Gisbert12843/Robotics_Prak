// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_spot_msgs:msg/Legs.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__STRUCT_H_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Legs in the package webots_spot_msgs.
/**
  * Front left leg
  * Front right leg
  * Rear left leg
  * Rear right leg
 */
typedef struct webots_spot_msgs__msg__Legs
{
  double leg[12];
} webots_spot_msgs__msg__Legs;

// Struct for a sequence of webots_spot_msgs__msg__Legs.
typedef struct webots_spot_msgs__msg__Legs__Sequence
{
  webots_spot_msgs__msg__Legs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__msg__Legs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__STRUCT_H_
