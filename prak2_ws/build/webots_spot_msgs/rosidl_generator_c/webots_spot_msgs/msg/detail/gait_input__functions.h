// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__FUNCTIONS_H_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "webots_spot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "webots_spot_msgs/msg/detail/gait_input__struct.h"

/// Initialize msg/GaitInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__msg__GaitInput
 * )) before or use
 * webots_spot_msgs__msg__GaitInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__msg__GaitInput__init(webots_spot_msgs__msg__GaitInput * msg);

/// Finalize msg/GaitInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__msg__GaitInput__fini(webots_spot_msgs__msg__GaitInput * msg);

/// Create msg/GaitInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__msg__GaitInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__msg__GaitInput *
webots_spot_msgs__msg__GaitInput__create();

/// Destroy msg/GaitInput message.
/**
 * It calls
 * webots_spot_msgs__msg__GaitInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__msg__GaitInput__destroy(webots_spot_msgs__msg__GaitInput * msg);

/// Check for msg/GaitInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__msg__GaitInput__are_equal(const webots_spot_msgs__msg__GaitInput * lhs, const webots_spot_msgs__msg__GaitInput * rhs);

/// Copy a msg/GaitInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__msg__GaitInput__copy(
  const webots_spot_msgs__msg__GaitInput * input,
  webots_spot_msgs__msg__GaitInput * output);

/// Initialize array of msg/GaitInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__msg__GaitInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__msg__GaitInput__Sequence__init(webots_spot_msgs__msg__GaitInput__Sequence * array, size_t size);

/// Finalize array of msg/GaitInput messages.
/**
 * It calls
 * webots_spot_msgs__msg__GaitInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__msg__GaitInput__Sequence__fini(webots_spot_msgs__msg__GaitInput__Sequence * array);

/// Create array of msg/GaitInput messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__msg__GaitInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__msg__GaitInput__Sequence *
webots_spot_msgs__msg__GaitInput__Sequence__create(size_t size);

/// Destroy array of msg/GaitInput messages.
/**
 * It calls
 * webots_spot_msgs__msg__GaitInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__msg__GaitInput__Sequence__destroy(webots_spot_msgs__msg__GaitInput__Sequence * array);

/// Check for msg/GaitInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__msg__GaitInput__Sequence__are_equal(const webots_spot_msgs__msg__GaitInput__Sequence * lhs, const webots_spot_msgs__msg__GaitInput__Sequence * rhs);

/// Copy an array of msg/GaitInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__msg__GaitInput__Sequence__copy(
  const webots_spot_msgs__msg__GaitInput__Sequence * input,
  webots_spot_msgs__msg__GaitInput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__FUNCTIONS_H_
