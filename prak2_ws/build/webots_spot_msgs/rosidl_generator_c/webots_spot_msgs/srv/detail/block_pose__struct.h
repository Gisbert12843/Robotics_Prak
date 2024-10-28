// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_spot_msgs:srv/BlockPose.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__STRUCT_H_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'block'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BlockPose in the package webots_spot_msgs.
typedef struct webots_spot_msgs__srv__BlockPose_Request
{
  rosidl_runtime_c__String block;
} webots_spot_msgs__srv__BlockPose_Request;

// Struct for a sequence of webots_spot_msgs__srv__BlockPose_Request.
typedef struct webots_spot_msgs__srv__BlockPose_Request__Sequence
{
  webots_spot_msgs__srv__BlockPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__srv__BlockPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'location'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BlockPose in the package webots_spot_msgs.
typedef struct webots_spot_msgs__srv__BlockPose_Response
{
  rosidl_runtime_c__String location;
} webots_spot_msgs__srv__BlockPose_Response;

// Struct for a sequence of webots_spot_msgs__srv__BlockPose_Response.
typedef struct webots_spot_msgs__srv__BlockPose_Response__Sequence
{
  webots_spot_msgs__srv__BlockPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__srv__BlockPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__STRUCT_H_
