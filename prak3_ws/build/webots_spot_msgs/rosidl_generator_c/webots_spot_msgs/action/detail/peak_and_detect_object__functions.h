// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from webots_spot_msgs:action/PeakAndDetectObject.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__FUNCTIONS_H_
#define WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "webots_spot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "webots_spot_msgs/action/detail/peak_and_detect_object__struct.h"

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_Goal
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Goal__init(webots_spot_msgs__action__PeakAndDetectObject_Goal * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Goal__fini(webots_spot_msgs__action__PeakAndDetectObject_Goal * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_Goal *
webots_spot_msgs__action__PeakAndDetectObject_Goal__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Goal__destroy(webots_spot_msgs__action__PeakAndDetectObject_Goal * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Goal__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_Goal * lhs, const webots_spot_msgs__action__PeakAndDetectObject_Goal * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_Goal__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_Goal * input,
  webots_spot_msgs__action__PeakAndDetectObject_Goal * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_Goal__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_Result
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Result__init(webots_spot_msgs__action__PeakAndDetectObject_Result * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Result__fini(webots_spot_msgs__action__PeakAndDetectObject_Result * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_Result *
webots_spot_msgs__action__PeakAndDetectObject_Result__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Result__destroy(webots_spot_msgs__action__PeakAndDetectObject_Result * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Result__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_Result * lhs, const webots_spot_msgs__action__PeakAndDetectObject_Result * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_Result__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_Result * input,
  webots_spot_msgs__action__PeakAndDetectObject_Result * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_Result__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Feedback__init(webots_spot_msgs__action__PeakAndDetectObject_Feedback * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Feedback__fini(webots_spot_msgs__action__PeakAndDetectObject_Feedback * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_Feedback *
webots_spot_msgs__action__PeakAndDetectObject_Feedback__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Feedback__destroy(webots_spot_msgs__action__PeakAndDetectObject_Feedback * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Feedback__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_Feedback * lhs, const webots_spot_msgs__action__PeakAndDetectObject_Feedback * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_Feedback__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_Feedback * input,
  webots_spot_msgs__action__PeakAndDetectObject_Feedback * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_Feedback__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__init(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__fini(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request *
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__destroy(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * lhs, const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * input,
  webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Request__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__init(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__fini(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response *
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__destroy(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * lhs, const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * input,
  webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_SendGoal_Response__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__init(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__fini(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request *
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__destroy(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * lhs, const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * input,
  webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_GetResult_Request__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__init(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__fini(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response *
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__destroy(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * lhs, const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * input,
  webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_GetResult_Response__Sequence * output);

/// Initialize action/PeakAndDetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage
 * )) before or use
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__init(webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * msg);

/// Finalize action/PeakAndDetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__fini(webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * msg);

/// Create action/PeakAndDetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage *
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__create();

/// Destroy action/PeakAndDetectObject message.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__destroy(webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * msg);

/// Check for action/PeakAndDetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * lhs, const webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * rhs);

/// Copy a action/PeakAndDetectObject message.
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
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * input,
  webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage * output);

/// Initialize array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__init(webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__fini(webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * array);

/// Create array of action/PeakAndDetectObject messages.
/**
 * It allocates the memory for the array and calls
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence *
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PeakAndDetectObject messages.
/**
 * It calls
 * webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
void
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__destroy(webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * array);

/// Check for action/PeakAndDetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webots_spot_msgs
bool
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__are_equal(const webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * lhs, const webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/PeakAndDetectObject messages.
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
webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence__copy(
  const webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * input,
  webots_spot_msgs__action__PeakAndDetectObject_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__FUNCTIONS_H_
