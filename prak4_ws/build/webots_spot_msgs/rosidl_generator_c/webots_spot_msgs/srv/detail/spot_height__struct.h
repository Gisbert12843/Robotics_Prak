// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_spot_msgs:srv/SpotHeight.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_HEIGHT__STRUCT_H_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_HEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpotHeight in the package webots_spot_msgs.
typedef struct webots_spot_msgs__srv__SpotHeight_Request
{
  double height;
} webots_spot_msgs__srv__SpotHeight_Request;

// Struct for a sequence of webots_spot_msgs__srv__SpotHeight_Request.
typedef struct webots_spot_msgs__srv__SpotHeight_Request__Sequence
{
  webots_spot_msgs__srv__SpotHeight_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__srv__SpotHeight_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'answer'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpotHeight in the package webots_spot_msgs.
typedef struct webots_spot_msgs__srv__SpotHeight_Response
{
  rosidl_runtime_c__String answer;
} webots_spot_msgs__srv__SpotHeight_Response;

// Struct for a sequence of webots_spot_msgs__srv__SpotHeight_Response.
typedef struct webots_spot_msgs__srv__SpotHeight_Response__Sequence
{
  webots_spot_msgs__srv__SpotHeight_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__srv__SpotHeight_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_HEIGHT__STRUCT_H_
