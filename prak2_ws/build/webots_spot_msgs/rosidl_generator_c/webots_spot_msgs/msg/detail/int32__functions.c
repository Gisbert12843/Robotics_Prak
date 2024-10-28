// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_spot_msgs:msg/Int32.idl
// generated code does not contain a copyright notice
#include "webots_spot_msgs/msg/detail/int32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
webots_spot_msgs__msg__Int32__init(webots_spot_msgs__msg__Int32 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
webots_spot_msgs__msg__Int32__fini(webots_spot_msgs__msg__Int32 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
webots_spot_msgs__msg__Int32__are_equal(const webots_spot_msgs__msg__Int32 * lhs, const webots_spot_msgs__msg__Int32 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__msg__Int32__copy(
  const webots_spot_msgs__msg__Int32 * input,
  webots_spot_msgs__msg__Int32 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

webots_spot_msgs__msg__Int32 *
webots_spot_msgs__msg__Int32__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__msg__Int32 * msg = (webots_spot_msgs__msg__Int32 *)allocator.allocate(sizeof(webots_spot_msgs__msg__Int32), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__msg__Int32));
  bool success = webots_spot_msgs__msg__Int32__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__msg__Int32__destroy(webots_spot_msgs__msg__Int32 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__msg__Int32__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__msg__Int32__Sequence__init(webots_spot_msgs__msg__Int32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__msg__Int32 * data = NULL;

  if (size) {
    data = (webots_spot_msgs__msg__Int32 *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__msg__Int32), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__msg__Int32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__msg__Int32__fini(&data[i - 1]);
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
webots_spot_msgs__msg__Int32__Sequence__fini(webots_spot_msgs__msg__Int32__Sequence * array)
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
      webots_spot_msgs__msg__Int32__fini(&array->data[i]);
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

webots_spot_msgs__msg__Int32__Sequence *
webots_spot_msgs__msg__Int32__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__msg__Int32__Sequence * array = (webots_spot_msgs__msg__Int32__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__msg__Int32__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__msg__Int32__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__msg__Int32__Sequence__destroy(webots_spot_msgs__msg__Int32__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__msg__Int32__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__msg__Int32__Sequence__are_equal(const webots_spot_msgs__msg__Int32__Sequence * lhs, const webots_spot_msgs__msg__Int32__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__msg__Int32__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__msg__Int32__Sequence__copy(
  const webots_spot_msgs__msg__Int32__Sequence * input,
  webots_spot_msgs__msg__Int32__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__msg__Int32);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__msg__Int32 * data =
      (webots_spot_msgs__msg__Int32 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__msg__Int32__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__msg__Int32__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__msg__Int32__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
