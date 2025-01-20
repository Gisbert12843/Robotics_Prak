// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice
#include "webots_spot_msgs/msg/detail/gait_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
webots_spot_msgs__msg__GaitInput__init(webots_spot_msgs__msg__GaitInput * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // step_length
  // lateral_fraction
  // yaw_rate
  // step_velocity
  // clearance_height
  // penetration_depth
  // swing_period
  // yaw_control
  // yaw_control_on
  return true;
}

void
webots_spot_msgs__msg__GaitInput__fini(webots_spot_msgs__msg__GaitInput * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // roll
  // pitch
  // yaw
  // step_length
  // lateral_fraction
  // yaw_rate
  // step_velocity
  // clearance_height
  // penetration_depth
  // swing_period
  // yaw_control
  // yaw_control_on
}

bool
webots_spot_msgs__msg__GaitInput__are_equal(const webots_spot_msgs__msg__GaitInput * lhs, const webots_spot_msgs__msg__GaitInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // step_length
  if (lhs->step_length != rhs->step_length) {
    return false;
  }
  // lateral_fraction
  if (lhs->lateral_fraction != rhs->lateral_fraction) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // step_velocity
  if (lhs->step_velocity != rhs->step_velocity) {
    return false;
  }
  // clearance_height
  if (lhs->clearance_height != rhs->clearance_height) {
    return false;
  }
  // penetration_depth
  if (lhs->penetration_depth != rhs->penetration_depth) {
    return false;
  }
  // swing_period
  if (lhs->swing_period != rhs->swing_period) {
    return false;
  }
  // yaw_control
  if (lhs->yaw_control != rhs->yaw_control) {
    return false;
  }
  // yaw_control_on
  if (lhs->yaw_control_on != rhs->yaw_control_on) {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__msg__GaitInput__copy(
  const webots_spot_msgs__msg__GaitInput * input,
  webots_spot_msgs__msg__GaitInput * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // step_length
  output->step_length = input->step_length;
  // lateral_fraction
  output->lateral_fraction = input->lateral_fraction;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // step_velocity
  output->step_velocity = input->step_velocity;
  // clearance_height
  output->clearance_height = input->clearance_height;
  // penetration_depth
  output->penetration_depth = input->penetration_depth;
  // swing_period
  output->swing_period = input->swing_period;
  // yaw_control
  output->yaw_control = input->yaw_control;
  // yaw_control_on
  output->yaw_control_on = input->yaw_control_on;
  return true;
}

webots_spot_msgs__msg__GaitInput *
webots_spot_msgs__msg__GaitInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__msg__GaitInput * msg = (webots_spot_msgs__msg__GaitInput *)allocator.allocate(sizeof(webots_spot_msgs__msg__GaitInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__msg__GaitInput));
  bool success = webots_spot_msgs__msg__GaitInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__msg__GaitInput__destroy(webots_spot_msgs__msg__GaitInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__msg__GaitInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__msg__GaitInput__Sequence__init(webots_spot_msgs__msg__GaitInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__msg__GaitInput * data = NULL;

  if (size) {
    data = (webots_spot_msgs__msg__GaitInput *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__msg__GaitInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__msg__GaitInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__msg__GaitInput__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
webots_spot_msgs__msg__GaitInput__Sequence__fini(webots_spot_msgs__msg__GaitInput__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_spot_msgs__msg__GaitInput__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

webots_spot_msgs__msg__GaitInput__Sequence *
webots_spot_msgs__msg__GaitInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__msg__GaitInput__Sequence * array = (webots_spot_msgs__msg__GaitInput__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__msg__GaitInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__msg__GaitInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__msg__GaitInput__Sequence__destroy(webots_spot_msgs__msg__GaitInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__msg__GaitInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__msg__GaitInput__Sequence__are_equal(const webots_spot_msgs__msg__GaitInput__Sequence * lhs, const webots_spot_msgs__msg__GaitInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__msg__GaitInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__msg__GaitInput__Sequence__copy(
  const webots_spot_msgs__msg__GaitInput__Sequence * input,
  webots_spot_msgs__msg__GaitInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__msg__GaitInput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__msg__GaitInput * data =
      (webots_spot_msgs__msg__GaitInput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__msg__GaitInput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__msg__GaitInput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__msg__GaitInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
