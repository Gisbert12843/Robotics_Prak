// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_spot_msgs:srv/BlockPose.idl
// generated code does not contain a copyright notice
#include "webots_spot_msgs/srv/detail/block_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `block`
#include "rosidl_runtime_c/string_functions.h"

bool
webots_spot_msgs__srv__BlockPose_Request__init(webots_spot_msgs__srv__BlockPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // block
  if (!rosidl_runtime_c__String__init(&msg->block)) {
    webots_spot_msgs__srv__BlockPose_Request__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__srv__BlockPose_Request__fini(webots_spot_msgs__srv__BlockPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // block
  rosidl_runtime_c__String__fini(&msg->block);
}

bool
webots_spot_msgs__srv__BlockPose_Request__are_equal(const webots_spot_msgs__srv__BlockPose_Request * lhs, const webots_spot_msgs__srv__BlockPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // block
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->block), &(rhs->block)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__srv__BlockPose_Request__copy(
  const webots_spot_msgs__srv__BlockPose_Request * input,
  webots_spot_msgs__srv__BlockPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // block
  if (!rosidl_runtime_c__String__copy(
      &(input->block), &(output->block)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__srv__BlockPose_Request *
webots_spot_msgs__srv__BlockPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__srv__BlockPose_Request * msg = (webots_spot_msgs__srv__BlockPose_Request *)allocator.allocate(sizeof(webots_spot_msgs__srv__BlockPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__srv__BlockPose_Request));
  bool success = webots_spot_msgs__srv__BlockPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__srv__BlockPose_Request__destroy(webots_spot_msgs__srv__BlockPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__srv__BlockPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__srv__BlockPose_Request__Sequence__init(webots_spot_msgs__srv__BlockPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__srv__BlockPose_Request * data = NULL;

  if (size) {
    data = (webots_spot_msgs__srv__BlockPose_Request *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__srv__BlockPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__srv__BlockPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__srv__BlockPose_Request__fini(&data[i - 1]);
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
webots_spot_msgs__srv__BlockPose_Request__Sequence__fini(webots_spot_msgs__srv__BlockPose_Request__Sequence * array)
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
      webots_spot_msgs__srv__BlockPose_Request__fini(&array->data[i]);
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

webots_spot_msgs__srv__BlockPose_Request__Sequence *
webots_spot_msgs__srv__BlockPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__srv__BlockPose_Request__Sequence * array = (webots_spot_msgs__srv__BlockPose_Request__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__srv__BlockPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__srv__BlockPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__srv__BlockPose_Request__Sequence__destroy(webots_spot_msgs__srv__BlockPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__srv__BlockPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__srv__BlockPose_Request__Sequence__are_equal(const webots_spot_msgs__srv__BlockPose_Request__Sequence * lhs, const webots_spot_msgs__srv__BlockPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__srv__BlockPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__srv__BlockPose_Request__Sequence__copy(
  const webots_spot_msgs__srv__BlockPose_Request__Sequence * input,
  webots_spot_msgs__srv__BlockPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__srv__BlockPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__srv__BlockPose_Request * data =
      (webots_spot_msgs__srv__BlockPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__srv__BlockPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__srv__BlockPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__srv__BlockPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `location`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
webots_spot_msgs__srv__BlockPose_Response__init(webots_spot_msgs__srv__BlockPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    webots_spot_msgs__srv__BlockPose_Response__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__srv__BlockPose_Response__fini(webots_spot_msgs__srv__BlockPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // location
  rosidl_runtime_c__String__fini(&msg->location);
}

bool
webots_spot_msgs__srv__BlockPose_Response__are_equal(const webots_spot_msgs__srv__BlockPose_Response * lhs, const webots_spot_msgs__srv__BlockPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__srv__BlockPose_Response__copy(
  const webots_spot_msgs__srv__BlockPose_Response * input,
  webots_spot_msgs__srv__BlockPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__srv__BlockPose_Response *
webots_spot_msgs__srv__BlockPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__srv__BlockPose_Response * msg = (webots_spot_msgs__srv__BlockPose_Response *)allocator.allocate(sizeof(webots_spot_msgs__srv__BlockPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__srv__BlockPose_Response));
  bool success = webots_spot_msgs__srv__BlockPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__srv__BlockPose_Response__destroy(webots_spot_msgs__srv__BlockPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__srv__BlockPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__srv__BlockPose_Response__Sequence__init(webots_spot_msgs__srv__BlockPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__srv__BlockPose_Response * data = NULL;

  if (size) {
    data = (webots_spot_msgs__srv__BlockPose_Response *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__srv__BlockPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__srv__BlockPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__srv__BlockPose_Response__fini(&data[i - 1]);
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
webots_spot_msgs__srv__BlockPose_Response__Sequence__fini(webots_spot_msgs__srv__BlockPose_Response__Sequence * array)
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
      webots_spot_msgs__srv__BlockPose_Response__fini(&array->data[i]);
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

webots_spot_msgs__srv__BlockPose_Response__Sequence *
webots_spot_msgs__srv__BlockPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__srv__BlockPose_Response__Sequence * array = (webots_spot_msgs__srv__BlockPose_Response__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__srv__BlockPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__srv__BlockPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__srv__BlockPose_Response__Sequence__destroy(webots_spot_msgs__srv__BlockPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__srv__BlockPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__srv__BlockPose_Response__Sequence__are_equal(const webots_spot_msgs__srv__BlockPose_Response__Sequence * lhs, const webots_spot_msgs__srv__BlockPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__srv__BlockPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__srv__BlockPose_Response__Sequence__copy(
  const webots_spot_msgs__srv__BlockPose_Response__Sequence * input,
  webots_spot_msgs__srv__BlockPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__srv__BlockPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__srv__BlockPose_Response * data =
      (webots_spot_msgs__srv__BlockPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__srv__BlockPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__srv__BlockPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__srv__BlockPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
