// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cameractrl_interfaces:srv/TriggerSnapshot.idl
// generated code does not contain a copyright notice
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cameractrl_interfaces__srv__TriggerSnapshot_Request__init(cameractrl_interfaces__srv__TriggerSnapshot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // fr
  return true;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Request__fini(cameractrl_interfaces__srv__TriggerSnapshot_Request * msg)
{
  if (!msg) {
    return;
  }
  // fr
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Request__are_equal(const cameractrl_interfaces__srv__TriggerSnapshot_Request * lhs, const cameractrl_interfaces__srv__TriggerSnapshot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fr
  if (lhs->fr != rhs->fr) {
    return false;
  }
  return true;
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Request__copy(
  const cameractrl_interfaces__srv__TriggerSnapshot_Request * input,
  cameractrl_interfaces__srv__TriggerSnapshot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // fr
  output->fr = input->fr;
  return true;
}

cameractrl_interfaces__srv__TriggerSnapshot_Request *
cameractrl_interfaces__srv__TriggerSnapshot_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Request * msg = (cameractrl_interfaces__srv__TriggerSnapshot_Request *)allocator.allocate(sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Request));
  bool success = cameractrl_interfaces__srv__TriggerSnapshot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Request__destroy(cameractrl_interfaces__srv__TriggerSnapshot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cameractrl_interfaces__srv__TriggerSnapshot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__init(cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Request * data = NULL;

  if (size) {
    data = (cameractrl_interfaces__srv__TriggerSnapshot_Request *)allocator.zero_allocate(size, sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cameractrl_interfaces__srv__TriggerSnapshot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cameractrl_interfaces__srv__TriggerSnapshot_Request__fini(&data[i - 1]);
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
cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__fini(cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * array)
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
      cameractrl_interfaces__srv__TriggerSnapshot_Request__fini(&array->data[i]);
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

cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence *
cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * array = (cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence *)allocator.allocate(sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__destroy(cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__are_equal(const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * lhs, const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__copy(
  const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * input,
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cameractrl_interfaces__srv__TriggerSnapshot_Request * data =
      (cameractrl_interfaces__srv__TriggerSnapshot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cameractrl_interfaces__srv__TriggerSnapshot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cameractrl_interfaces__srv__TriggerSnapshot_Response__init(cameractrl_interfaces__srv__TriggerSnapshot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Response__fini(cameractrl_interfaces__srv__TriggerSnapshot_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Response__are_equal(const cameractrl_interfaces__srv__TriggerSnapshot_Response * lhs, const cameractrl_interfaces__srv__TriggerSnapshot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Response__copy(
  const cameractrl_interfaces__srv__TriggerSnapshot_Response * input,
  cameractrl_interfaces__srv__TriggerSnapshot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

cameractrl_interfaces__srv__TriggerSnapshot_Response *
cameractrl_interfaces__srv__TriggerSnapshot_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Response * msg = (cameractrl_interfaces__srv__TriggerSnapshot_Response *)allocator.allocate(sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Response));
  bool success = cameractrl_interfaces__srv__TriggerSnapshot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Response__destroy(cameractrl_interfaces__srv__TriggerSnapshot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cameractrl_interfaces__srv__TriggerSnapshot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__init(cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Response * data = NULL;

  if (size) {
    data = (cameractrl_interfaces__srv__TriggerSnapshot_Response *)allocator.zero_allocate(size, sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cameractrl_interfaces__srv__TriggerSnapshot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cameractrl_interfaces__srv__TriggerSnapshot_Response__fini(&data[i - 1]);
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
cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__fini(cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * array)
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
      cameractrl_interfaces__srv__TriggerSnapshot_Response__fini(&array->data[i]);
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

cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence *
cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * array = (cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence *)allocator.allocate(sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__destroy(cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__are_equal(const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * lhs, const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__copy(
  const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * input,
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cameractrl_interfaces__srv__TriggerSnapshot_Response * data =
      (cameractrl_interfaces__srv__TriggerSnapshot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cameractrl_interfaces__srv__TriggerSnapshot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"

bool
cameractrl_interfaces__srv__TriggerSnapshot_Event__init(cameractrl_interfaces__srv__TriggerSnapshot_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(msg);
    return false;
  }
  // request
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__init(&msg->request, 0)) {
    cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(msg);
    return false;
  }
  // response
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__init(&msg->response, 0)) {
    cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(msg);
    return false;
  }
  return true;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(cameractrl_interfaces__srv__TriggerSnapshot_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__fini(&msg->request);
  // response
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__fini(&msg->response);
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Event__are_equal(const cameractrl_interfaces__srv__TriggerSnapshot_Event * lhs, const cameractrl_interfaces__srv__TriggerSnapshot_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Event__copy(
  const cameractrl_interfaces__srv__TriggerSnapshot_Event * input,
  cameractrl_interfaces__srv__TriggerSnapshot_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

cameractrl_interfaces__srv__TriggerSnapshot_Event *
cameractrl_interfaces__srv__TriggerSnapshot_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Event * msg = (cameractrl_interfaces__srv__TriggerSnapshot_Event *)allocator.allocate(sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Event));
  bool success = cameractrl_interfaces__srv__TriggerSnapshot_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Event__destroy(cameractrl_interfaces__srv__TriggerSnapshot_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__init(cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Event * data = NULL;

  if (size) {
    data = (cameractrl_interfaces__srv__TriggerSnapshot_Event *)allocator.zero_allocate(size, sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cameractrl_interfaces__srv__TriggerSnapshot_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(&data[i - 1]);
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
cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__fini(cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * array)
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
      cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(&array->data[i]);
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

cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence *
cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * array = (cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence *)allocator.allocate(sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__destroy(cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__are_equal(const cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * lhs, const cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cameractrl_interfaces__srv__TriggerSnapshot_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence__copy(
  const cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * input,
  cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cameractrl_interfaces__srv__TriggerSnapshot_Event * data =
      (cameractrl_interfaces__srv__TriggerSnapshot_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cameractrl_interfaces__srv__TriggerSnapshot_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cameractrl_interfaces__srv__TriggerSnapshot_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
