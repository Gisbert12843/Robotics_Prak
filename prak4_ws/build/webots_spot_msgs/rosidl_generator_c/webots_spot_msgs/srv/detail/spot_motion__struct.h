// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_spot_msgs:srv/SpotMotion.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__STRUCT_H_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpotMotion in the package webots_spot_msgs.
typedef struct webots_spot_msgs__srv__SpotMotion_Request
{
  bool override;
} webots_spot_msgs__srv__SpotMotion_Request;

// Struct for a sequence of webots_spot_msgs__srv__SpotMotion_Request.
typedef struct webots_spot_msgs__srv__SpotMotion_Request__Sequence
{
  webots_spot_msgs__srv__SpotMotion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__srv__SpotMotion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'answer'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpotMotion in the package webots_spot_msgs.
typedef struct webots_spot_msgs__srv__SpotMotion_Response
{
  rosidl_runtime_c__String answer;
} webots_spot_msgs__srv__SpotMotion_Response;

// Struct for a sequence of webots_spot_msgs__srv__SpotMotion_Response.
typedef struct webots_spot_msgs__srv__SpotMotion_Response__Sequence
{
  webots_spot_msgs__srv__SpotMotion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__srv__SpotMotion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__STRUCT_H_
