// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webots_spot_msgs:action/Stack.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__ACTION__DETAIL__STACK__STRUCT_H_
#define WEBOTS_SPOT_MSGS__ACTION__DETAIL__STACK__STRUCT_H_

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
// Member 'location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_Goal
{
  rosidl_runtime_c__String block;
  rosidl_runtime_c__String location;
} webots_spot_msgs__action__Stack_Goal;

// Struct for a sequence of webots_spot_msgs__action__Stack_Goal.
typedef struct webots_spot_msgs__action__Stack_Goal__Sequence
{
  webots_spot_msgs__action__Stack_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_Result
{
  bool stacked;
} webots_spot_msgs__action__Stack_Result;

// Struct for a sequence of webots_spot_msgs__action__Stack_Result.
typedef struct webots_spot_msgs__action__Stack_Result__Sequence
{
  webots_spot_msgs__action__Stack_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_Feedback
{
  bool stacking;
} webots_spot_msgs__action__Stack_Feedback;

// Struct for a sequence of webots_spot_msgs__action__Stack_Feedback.
typedef struct webots_spot_msgs__action__Stack_Feedback__Sequence
{
  webots_spot_msgs__action__Stack_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "webots_spot_msgs/action/detail/stack__struct.h"

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  webots_spot_msgs__action__Stack_Goal goal;
} webots_spot_msgs__action__Stack_SendGoal_Request;

// Struct for a sequence of webots_spot_msgs__action__Stack_SendGoal_Request.
typedef struct webots_spot_msgs__action__Stack_SendGoal_Request__Sequence
{
  webots_spot_msgs__action__Stack_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} webots_spot_msgs__action__Stack_SendGoal_Response;

// Struct for a sequence of webots_spot_msgs__action__Stack_SendGoal_Response.
typedef struct webots_spot_msgs__action__Stack_SendGoal_Response__Sequence
{
  webots_spot_msgs__action__Stack_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} webots_spot_msgs__action__Stack_GetResult_Request;

// Struct for a sequence of webots_spot_msgs__action__Stack_GetResult_Request.
typedef struct webots_spot_msgs__action__Stack_GetResult_Request__Sequence
{
  webots_spot_msgs__action__Stack_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "webots_spot_msgs/action/detail/stack__struct.h"

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_GetResult_Response
{
  int8_t status;
  webots_spot_msgs__action__Stack_Result result;
} webots_spot_msgs__action__Stack_GetResult_Response;

// Struct for a sequence of webots_spot_msgs__action__Stack_GetResult_Response.
typedef struct webots_spot_msgs__action__Stack_GetResult_Response__Sequence
{
  webots_spot_msgs__action__Stack_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "webots_spot_msgs/action/detail/stack__struct.h"

/// Struct defined in action/Stack in the package webots_spot_msgs.
typedef struct webots_spot_msgs__action__Stack_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  webots_spot_msgs__action__Stack_Feedback feedback;
} webots_spot_msgs__action__Stack_FeedbackMessage;

// Struct for a sequence of webots_spot_msgs__action__Stack_FeedbackMessage.
typedef struct webots_spot_msgs__action__Stack_FeedbackMessage__Sequence
{
  webots_spot_msgs__action__Stack_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webots_spot_msgs__action__Stack_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__ACTION__DETAIL__STACK__STRUCT_H_
