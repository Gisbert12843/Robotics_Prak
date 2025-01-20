// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_spot_msgs:action/Stack.idl
// generated code does not contain a copyright notice
#include "webots_spot_msgs/action/detail/stack__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `block`
// Member `location`
#include "rosidl_runtime_c/string_functions.h"

bool
webots_spot_msgs__action__Stack_Goal__init(webots_spot_msgs__action__Stack_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // block
  if (!rosidl_runtime_c__String__init(&msg->block)) {
    webots_spot_msgs__action__Stack_Goal__fini(msg);
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    webots_spot_msgs__action__Stack_Goal__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__action__Stack_Goal__fini(webots_spot_msgs__action__Stack_Goal * msg)
{
  if (!msg) {
    return;
  }
  // block
  rosidl_runtime_c__String__fini(&msg->block);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
}

bool
webots_spot_msgs__action__Stack_Goal__are_equal(const webots_spot_msgs__action__Stack_Goal * lhs, const webots_spot_msgs__action__Stack_Goal * rhs)
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
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_Goal__copy(
  const webots_spot_msgs__action__Stack_Goal * input,
  webots_spot_msgs__action__Stack_Goal * output)
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
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__action__Stack_Goal *
webots_spot_msgs__action__Stack_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Goal * msg = (webots_spot_msgs__action__Stack_Goal *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_Goal));
  bool success = webots_spot_msgs__action__Stack_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_Goal__destroy(webots_spot_msgs__action__Stack_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_Goal__Sequence__init(webots_spot_msgs__action__Stack_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Goal * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_Goal *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_Goal__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_Goal__Sequence__fini(webots_spot_msgs__action__Stack_Goal__Sequence * array)
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
      webots_spot_msgs__action__Stack_Goal__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_Goal__Sequence *
webots_spot_msgs__action__Stack_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Goal__Sequence * array = (webots_spot_msgs__action__Stack_Goal__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_Goal__Sequence__destroy(webots_spot_msgs__action__Stack_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_Goal__Sequence__are_equal(const webots_spot_msgs__action__Stack_Goal__Sequence * lhs, const webots_spot_msgs__action__Stack_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_Goal__Sequence__copy(
  const webots_spot_msgs__action__Stack_Goal__Sequence * input,
  webots_spot_msgs__action__Stack_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_Goal * data =
      (webots_spot_msgs__action__Stack_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
webots_spot_msgs__action__Stack_Result__init(webots_spot_msgs__action__Stack_Result * msg)
{
  if (!msg) {
    return false;
  }
  // stacked
  return true;
}

void
webots_spot_msgs__action__Stack_Result__fini(webots_spot_msgs__action__Stack_Result * msg)
{
  if (!msg) {
    return;
  }
  // stacked
}

bool
webots_spot_msgs__action__Stack_Result__are_equal(const webots_spot_msgs__action__Stack_Result * lhs, const webots_spot_msgs__action__Stack_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stacked
  if (lhs->stacked != rhs->stacked) {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_Result__copy(
  const webots_spot_msgs__action__Stack_Result * input,
  webots_spot_msgs__action__Stack_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // stacked
  output->stacked = input->stacked;
  return true;
}

webots_spot_msgs__action__Stack_Result *
webots_spot_msgs__action__Stack_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Result * msg = (webots_spot_msgs__action__Stack_Result *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_Result));
  bool success = webots_spot_msgs__action__Stack_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_Result__destroy(webots_spot_msgs__action__Stack_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_Result__Sequence__init(webots_spot_msgs__action__Stack_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Result * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_Result *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_Result__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_Result__Sequence__fini(webots_spot_msgs__action__Stack_Result__Sequence * array)
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
      webots_spot_msgs__action__Stack_Result__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_Result__Sequence *
webots_spot_msgs__action__Stack_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Result__Sequence * array = (webots_spot_msgs__action__Stack_Result__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_Result__Sequence__destroy(webots_spot_msgs__action__Stack_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_Result__Sequence__are_equal(const webots_spot_msgs__action__Stack_Result__Sequence * lhs, const webots_spot_msgs__action__Stack_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_Result__Sequence__copy(
  const webots_spot_msgs__action__Stack_Result__Sequence * input,
  webots_spot_msgs__action__Stack_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_Result * data =
      (webots_spot_msgs__action__Stack_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
webots_spot_msgs__action__Stack_Feedback__init(webots_spot_msgs__action__Stack_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // stacking
  return true;
}

void
webots_spot_msgs__action__Stack_Feedback__fini(webots_spot_msgs__action__Stack_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // stacking
}

bool
webots_spot_msgs__action__Stack_Feedback__are_equal(const webots_spot_msgs__action__Stack_Feedback * lhs, const webots_spot_msgs__action__Stack_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stacking
  if (lhs->stacking != rhs->stacking) {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_Feedback__copy(
  const webots_spot_msgs__action__Stack_Feedback * input,
  webots_spot_msgs__action__Stack_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // stacking
  output->stacking = input->stacking;
  return true;
}

webots_spot_msgs__action__Stack_Feedback *
webots_spot_msgs__action__Stack_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Feedback * msg = (webots_spot_msgs__action__Stack_Feedback *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_Feedback));
  bool success = webots_spot_msgs__action__Stack_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_Feedback__destroy(webots_spot_msgs__action__Stack_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_Feedback__Sequence__init(webots_spot_msgs__action__Stack_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Feedback * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_Feedback *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_Feedback__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_Feedback__Sequence__fini(webots_spot_msgs__action__Stack_Feedback__Sequence * array)
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
      webots_spot_msgs__action__Stack_Feedback__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_Feedback__Sequence *
webots_spot_msgs__action__Stack_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_Feedback__Sequence * array = (webots_spot_msgs__action__Stack_Feedback__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_Feedback__Sequence__destroy(webots_spot_msgs__action__Stack_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_Feedback__Sequence__are_equal(const webots_spot_msgs__action__Stack_Feedback__Sequence * lhs, const webots_spot_msgs__action__Stack_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_Feedback__Sequence__copy(
  const webots_spot_msgs__action__Stack_Feedback__Sequence * input,
  webots_spot_msgs__action__Stack_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_Feedback * data =
      (webots_spot_msgs__action__Stack_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "webots_spot_msgs/action/detail/stack__functions.h"

bool
webots_spot_msgs__action__Stack_SendGoal_Request__init(webots_spot_msgs__action__Stack_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    webots_spot_msgs__action__Stack_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!webots_spot_msgs__action__Stack_Goal__init(&msg->goal)) {
    webots_spot_msgs__action__Stack_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__action__Stack_SendGoal_Request__fini(webots_spot_msgs__action__Stack_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  webots_spot_msgs__action__Stack_Goal__fini(&msg->goal);
}

bool
webots_spot_msgs__action__Stack_SendGoal_Request__are_equal(const webots_spot_msgs__action__Stack_SendGoal_Request * lhs, const webots_spot_msgs__action__Stack_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!webots_spot_msgs__action__Stack_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_SendGoal_Request__copy(
  const webots_spot_msgs__action__Stack_SendGoal_Request * input,
  webots_spot_msgs__action__Stack_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!webots_spot_msgs__action__Stack_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__action__Stack_SendGoal_Request *
webots_spot_msgs__action__Stack_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_SendGoal_Request * msg = (webots_spot_msgs__action__Stack_SendGoal_Request *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_SendGoal_Request));
  bool success = webots_spot_msgs__action__Stack_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_SendGoal_Request__destroy(webots_spot_msgs__action__Stack_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__init(webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_SendGoal_Request * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_SendGoal_Request *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_SendGoal_Request__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__fini(webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * array)
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
      webots_spot_msgs__action__Stack_SendGoal_Request__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_SendGoal_Request__Sequence *
webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * array = (webots_spot_msgs__action__Stack_SendGoal_Request__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__destroy(webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__are_equal(const webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * lhs, const webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_SendGoal_Request__Sequence__copy(
  const webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * input,
  webots_spot_msgs__action__Stack_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_SendGoal_Request * data =
      (webots_spot_msgs__action__Stack_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
webots_spot_msgs__action__Stack_SendGoal_Response__init(webots_spot_msgs__action__Stack_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    webots_spot_msgs__action__Stack_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__action__Stack_SendGoal_Response__fini(webots_spot_msgs__action__Stack_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
webots_spot_msgs__action__Stack_SendGoal_Response__are_equal(const webots_spot_msgs__action__Stack_SendGoal_Response * lhs, const webots_spot_msgs__action__Stack_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_SendGoal_Response__copy(
  const webots_spot_msgs__action__Stack_SendGoal_Response * input,
  webots_spot_msgs__action__Stack_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__action__Stack_SendGoal_Response *
webots_spot_msgs__action__Stack_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_SendGoal_Response * msg = (webots_spot_msgs__action__Stack_SendGoal_Response *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_SendGoal_Response));
  bool success = webots_spot_msgs__action__Stack_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_SendGoal_Response__destroy(webots_spot_msgs__action__Stack_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__init(webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_SendGoal_Response * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_SendGoal_Response *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_SendGoal_Response__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__fini(webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * array)
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
      webots_spot_msgs__action__Stack_SendGoal_Response__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_SendGoal_Response__Sequence *
webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * array = (webots_spot_msgs__action__Stack_SendGoal_Response__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__destroy(webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__are_equal(const webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * lhs, const webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_SendGoal_Response__Sequence__copy(
  const webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * input,
  webots_spot_msgs__action__Stack_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_SendGoal_Response * data =
      (webots_spot_msgs__action__Stack_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
webots_spot_msgs__action__Stack_GetResult_Request__init(webots_spot_msgs__action__Stack_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    webots_spot_msgs__action__Stack_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__action__Stack_GetResult_Request__fini(webots_spot_msgs__action__Stack_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
webots_spot_msgs__action__Stack_GetResult_Request__are_equal(const webots_spot_msgs__action__Stack_GetResult_Request * lhs, const webots_spot_msgs__action__Stack_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_GetResult_Request__copy(
  const webots_spot_msgs__action__Stack_GetResult_Request * input,
  webots_spot_msgs__action__Stack_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__action__Stack_GetResult_Request *
webots_spot_msgs__action__Stack_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_GetResult_Request * msg = (webots_spot_msgs__action__Stack_GetResult_Request *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_GetResult_Request));
  bool success = webots_spot_msgs__action__Stack_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_GetResult_Request__destroy(webots_spot_msgs__action__Stack_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_GetResult_Request__Sequence__init(webots_spot_msgs__action__Stack_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_GetResult_Request * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_GetResult_Request *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_GetResult_Request__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_GetResult_Request__Sequence__fini(webots_spot_msgs__action__Stack_GetResult_Request__Sequence * array)
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
      webots_spot_msgs__action__Stack_GetResult_Request__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_GetResult_Request__Sequence *
webots_spot_msgs__action__Stack_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_GetResult_Request__Sequence * array = (webots_spot_msgs__action__Stack_GetResult_Request__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_GetResult_Request__Sequence__destroy(webots_spot_msgs__action__Stack_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_GetResult_Request__Sequence__are_equal(const webots_spot_msgs__action__Stack_GetResult_Request__Sequence * lhs, const webots_spot_msgs__action__Stack_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_GetResult_Request__Sequence__copy(
  const webots_spot_msgs__action__Stack_GetResult_Request__Sequence * input,
  webots_spot_msgs__action__Stack_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_GetResult_Request * data =
      (webots_spot_msgs__action__Stack_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "webots_spot_msgs/action/detail/stack__functions.h"

bool
webots_spot_msgs__action__Stack_GetResult_Response__init(webots_spot_msgs__action__Stack_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!webots_spot_msgs__action__Stack_Result__init(&msg->result)) {
    webots_spot_msgs__action__Stack_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__action__Stack_GetResult_Response__fini(webots_spot_msgs__action__Stack_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  webots_spot_msgs__action__Stack_Result__fini(&msg->result);
}

bool
webots_spot_msgs__action__Stack_GetResult_Response__are_equal(const webots_spot_msgs__action__Stack_GetResult_Response * lhs, const webots_spot_msgs__action__Stack_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!webots_spot_msgs__action__Stack_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_GetResult_Response__copy(
  const webots_spot_msgs__action__Stack_GetResult_Response * input,
  webots_spot_msgs__action__Stack_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!webots_spot_msgs__action__Stack_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__action__Stack_GetResult_Response *
webots_spot_msgs__action__Stack_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_GetResult_Response * msg = (webots_spot_msgs__action__Stack_GetResult_Response *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_GetResult_Response));
  bool success = webots_spot_msgs__action__Stack_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_GetResult_Response__destroy(webots_spot_msgs__action__Stack_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_GetResult_Response__Sequence__init(webots_spot_msgs__action__Stack_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_GetResult_Response * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_GetResult_Response *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_GetResult_Response__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_GetResult_Response__Sequence__fini(webots_spot_msgs__action__Stack_GetResult_Response__Sequence * array)
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
      webots_spot_msgs__action__Stack_GetResult_Response__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_GetResult_Response__Sequence *
webots_spot_msgs__action__Stack_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_GetResult_Response__Sequence * array = (webots_spot_msgs__action__Stack_GetResult_Response__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_GetResult_Response__Sequence__destroy(webots_spot_msgs__action__Stack_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_GetResult_Response__Sequence__are_equal(const webots_spot_msgs__action__Stack_GetResult_Response__Sequence * lhs, const webots_spot_msgs__action__Stack_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_GetResult_Response__Sequence__copy(
  const webots_spot_msgs__action__Stack_GetResult_Response__Sequence * input,
  webots_spot_msgs__action__Stack_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_GetResult_Response * data =
      (webots_spot_msgs__action__Stack_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "webots_spot_msgs/action/detail/stack__functions.h"

bool
webots_spot_msgs__action__Stack_FeedbackMessage__init(webots_spot_msgs__action__Stack_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    webots_spot_msgs__action__Stack_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!webots_spot_msgs__action__Stack_Feedback__init(&msg->feedback)) {
    webots_spot_msgs__action__Stack_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
webots_spot_msgs__action__Stack_FeedbackMessage__fini(webots_spot_msgs__action__Stack_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  webots_spot_msgs__action__Stack_Feedback__fini(&msg->feedback);
}

bool
webots_spot_msgs__action__Stack_FeedbackMessage__are_equal(const webots_spot_msgs__action__Stack_FeedbackMessage * lhs, const webots_spot_msgs__action__Stack_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!webots_spot_msgs__action__Stack_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_FeedbackMessage__copy(
  const webots_spot_msgs__action__Stack_FeedbackMessage * input,
  webots_spot_msgs__action__Stack_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!webots_spot_msgs__action__Stack_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

webots_spot_msgs__action__Stack_FeedbackMessage *
webots_spot_msgs__action__Stack_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_FeedbackMessage * msg = (webots_spot_msgs__action__Stack_FeedbackMessage *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_spot_msgs__action__Stack_FeedbackMessage));
  bool success = webots_spot_msgs__action__Stack_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_spot_msgs__action__Stack_FeedbackMessage__destroy(webots_spot_msgs__action__Stack_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_spot_msgs__action__Stack_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__init(webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_FeedbackMessage * data = NULL;

  if (size) {
    data = (webots_spot_msgs__action__Stack_FeedbackMessage *)allocator.zero_allocate(size, sizeof(webots_spot_msgs__action__Stack_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_spot_msgs__action__Stack_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_spot_msgs__action__Stack_FeedbackMessage__fini(&data[i - 1]);
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
webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__fini(webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * array)
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
      webots_spot_msgs__action__Stack_FeedbackMessage__fini(&array->data[i]);
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

webots_spot_msgs__action__Stack_FeedbackMessage__Sequence *
webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * array = (webots_spot_msgs__action__Stack_FeedbackMessage__Sequence *)allocator.allocate(sizeof(webots_spot_msgs__action__Stack_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__destroy(webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__are_equal(const webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * lhs, const webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_spot_msgs__action__Stack_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_spot_msgs__action__Stack_FeedbackMessage__Sequence__copy(
  const webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * input,
  webots_spot_msgs__action__Stack_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_spot_msgs__action__Stack_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_spot_msgs__action__Stack_FeedbackMessage * data =
      (webots_spot_msgs__action__Stack_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_spot_msgs__action__Stack_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_spot_msgs__action__Stack_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_spot_msgs__action__Stack_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
