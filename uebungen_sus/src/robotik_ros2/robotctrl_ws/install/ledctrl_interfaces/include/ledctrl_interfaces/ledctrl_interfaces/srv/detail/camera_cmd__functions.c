// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice
#include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd`
#include "rosidl_runtime_c/string_functions.h"
// Member `color_on`
// Member `color_off`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ledctrl_interfaces__srv__CameraCmd_Request__init(ledctrl_interfaces__srv__CameraCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__init(&msg->cmd)) {
    ledctrl_interfaces__srv__CameraCmd_Request__fini(msg);
    return false;
  }
  // side
  // color_on
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->color_on, 0)) {
    ledctrl_interfaces__srv__CameraCmd_Request__fini(msg);
    return false;
  }
  // color_off
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->color_off, 0)) {
    ledctrl_interfaces__srv__CameraCmd_Request__fini(msg);
    return false;
  }
  // duration_on
  // duration_off
  // repetitions
  return true;
}

void
ledctrl_interfaces__srv__CameraCmd_Request__fini(ledctrl_interfaces__srv__CameraCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  rosidl_runtime_c__String__fini(&msg->cmd);
  // side
  // color_on
  rosidl_runtime_c__uint8__Sequence__fini(&msg->color_on);
  // color_off
  rosidl_runtime_c__uint8__Sequence__fini(&msg->color_off);
  // duration_on
  // duration_off
  // repetitions
}

bool
ledctrl_interfaces__srv__CameraCmd_Request__are_equal(const ledctrl_interfaces__srv__CameraCmd_Request * lhs, const ledctrl_interfaces__srv__CameraCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd), &(rhs->cmd)))
  {
    return false;
  }
  // side
  if (lhs->side != rhs->side) {
    return false;
  }
  // color_on
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->color_on), &(rhs->color_on)))
  {
    return false;
  }
  // color_off
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->color_off), &(rhs->color_off)))
  {
    return false;
  }
  // duration_on
  if (lhs->duration_on != rhs->duration_on) {
    return false;
  }
  // duration_off
  if (lhs->duration_off != rhs->duration_off) {
    return false;
  }
  // repetitions
  if (lhs->repetitions != rhs->repetitions) {
    return false;
  }
  return true;
}

bool
ledctrl_interfaces__srv__CameraCmd_Request__copy(
  const ledctrl_interfaces__srv__CameraCmd_Request * input,
  ledctrl_interfaces__srv__CameraCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd), &(output->cmd)))
  {
    return false;
  }
  // side
  output->side = input->side;
  // color_on
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->color_on), &(output->color_on)))
  {
    return false;
  }
  // color_off
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->color_off), &(output->color_off)))
  {
    return false;
  }
  // duration_on
  output->duration_on = input->duration_on;
  // duration_off
  output->duration_off = input->duration_off;
  // repetitions
  output->repetitions = input->repetitions;
  return true;
}

ledctrl_interfaces__srv__CameraCmd_Request *
ledctrl_interfaces__srv__CameraCmd_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Request * msg = (ledctrl_interfaces__srv__CameraCmd_Request *)allocator.allocate(sizeof(ledctrl_interfaces__srv__CameraCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ledctrl_interfaces__srv__CameraCmd_Request));
  bool success = ledctrl_interfaces__srv__CameraCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ledctrl_interfaces__srv__CameraCmd_Request__destroy(ledctrl_interfaces__srv__CameraCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ledctrl_interfaces__srv__CameraCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__init(ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Request * data = NULL;

  if (size) {
    data = (ledctrl_interfaces__srv__CameraCmd_Request *)allocator.zero_allocate(size, sizeof(ledctrl_interfaces__srv__CameraCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ledctrl_interfaces__srv__CameraCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ledctrl_interfaces__srv__CameraCmd_Request__fini(&data[i - 1]);
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
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__fini(ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array)
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
      ledctrl_interfaces__srv__CameraCmd_Request__fini(&array->data[i]);
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

ledctrl_interfaces__srv__CameraCmd_Request__Sequence *
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array = (ledctrl_interfaces__srv__CameraCmd_Request__Sequence *)allocator.allocate(sizeof(ledctrl_interfaces__srv__CameraCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ledctrl_interfaces__srv__CameraCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__destroy(ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ledctrl_interfaces__srv__CameraCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__are_equal(const ledctrl_interfaces__srv__CameraCmd_Request__Sequence * lhs, const ledctrl_interfaces__srv__CameraCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ledctrl_interfaces__srv__CameraCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__copy(
  const ledctrl_interfaces__srv__CameraCmd_Request__Sequence * input,
  ledctrl_interfaces__srv__CameraCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ledctrl_interfaces__srv__CameraCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ledctrl_interfaces__srv__CameraCmd_Request * data =
      (ledctrl_interfaces__srv__CameraCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ledctrl_interfaces__srv__CameraCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ledctrl_interfaces__srv__CameraCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ledctrl_interfaces__srv__CameraCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ledctrl_interfaces__srv__CameraCmd_Response__init(ledctrl_interfaces__srv__CameraCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
ledctrl_interfaces__srv__CameraCmd_Response__fini(ledctrl_interfaces__srv__CameraCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
ledctrl_interfaces__srv__CameraCmd_Response__are_equal(const ledctrl_interfaces__srv__CameraCmd_Response * lhs, const ledctrl_interfaces__srv__CameraCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
ledctrl_interfaces__srv__CameraCmd_Response__copy(
  const ledctrl_interfaces__srv__CameraCmd_Response * input,
  ledctrl_interfaces__srv__CameraCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

ledctrl_interfaces__srv__CameraCmd_Response *
ledctrl_interfaces__srv__CameraCmd_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Response * msg = (ledctrl_interfaces__srv__CameraCmd_Response *)allocator.allocate(sizeof(ledctrl_interfaces__srv__CameraCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ledctrl_interfaces__srv__CameraCmd_Response));
  bool success = ledctrl_interfaces__srv__CameraCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ledctrl_interfaces__srv__CameraCmd_Response__destroy(ledctrl_interfaces__srv__CameraCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ledctrl_interfaces__srv__CameraCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__init(ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Response * data = NULL;

  if (size) {
    data = (ledctrl_interfaces__srv__CameraCmd_Response *)allocator.zero_allocate(size, sizeof(ledctrl_interfaces__srv__CameraCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ledctrl_interfaces__srv__CameraCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ledctrl_interfaces__srv__CameraCmd_Response__fini(&data[i - 1]);
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
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__fini(ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array)
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
      ledctrl_interfaces__srv__CameraCmd_Response__fini(&array->data[i]);
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

ledctrl_interfaces__srv__CameraCmd_Response__Sequence *
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array = (ledctrl_interfaces__srv__CameraCmd_Response__Sequence *)allocator.allocate(sizeof(ledctrl_interfaces__srv__CameraCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ledctrl_interfaces__srv__CameraCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__destroy(ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ledctrl_interfaces__srv__CameraCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__are_equal(const ledctrl_interfaces__srv__CameraCmd_Response__Sequence * lhs, const ledctrl_interfaces__srv__CameraCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ledctrl_interfaces__srv__CameraCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__copy(
  const ledctrl_interfaces__srv__CameraCmd_Response__Sequence * input,
  ledctrl_interfaces__srv__CameraCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ledctrl_interfaces__srv__CameraCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ledctrl_interfaces__srv__CameraCmd_Response * data =
      (ledctrl_interfaces__srv__CameraCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ledctrl_interfaces__srv__CameraCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ledctrl_interfaces__srv__CameraCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ledctrl_interfaces__srv__CameraCmd_Response__copy(
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
// #include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"

bool
ledctrl_interfaces__srv__CameraCmd_Event__init(ledctrl_interfaces__srv__CameraCmd_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ledctrl_interfaces__srv__CameraCmd_Event__fini(msg);
    return false;
  }
  // request
  if (!ledctrl_interfaces__srv__CameraCmd_Request__Sequence__init(&msg->request, 0)) {
    ledctrl_interfaces__srv__CameraCmd_Event__fini(msg);
    return false;
  }
  // response
  if (!ledctrl_interfaces__srv__CameraCmd_Response__Sequence__init(&msg->response, 0)) {
    ledctrl_interfaces__srv__CameraCmd_Event__fini(msg);
    return false;
  }
  return true;
}

void
ledctrl_interfaces__srv__CameraCmd_Event__fini(ledctrl_interfaces__srv__CameraCmd_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ledctrl_interfaces__srv__CameraCmd_Request__Sequence__fini(&msg->request);
  // response
  ledctrl_interfaces__srv__CameraCmd_Response__Sequence__fini(&msg->response);
}

bool
ledctrl_interfaces__srv__CameraCmd_Event__are_equal(const ledctrl_interfaces__srv__CameraCmd_Event * lhs, const ledctrl_interfaces__srv__CameraCmd_Event * rhs)
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
  if (!ledctrl_interfaces__srv__CameraCmd_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ledctrl_interfaces__srv__CameraCmd_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ledctrl_interfaces__srv__CameraCmd_Event__copy(
  const ledctrl_interfaces__srv__CameraCmd_Event * input,
  ledctrl_interfaces__srv__CameraCmd_Event * output)
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
  if (!ledctrl_interfaces__srv__CameraCmd_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ledctrl_interfaces__srv__CameraCmd_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ledctrl_interfaces__srv__CameraCmd_Event *
ledctrl_interfaces__srv__CameraCmd_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Event * msg = (ledctrl_interfaces__srv__CameraCmd_Event *)allocator.allocate(sizeof(ledctrl_interfaces__srv__CameraCmd_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ledctrl_interfaces__srv__CameraCmd_Event));
  bool success = ledctrl_interfaces__srv__CameraCmd_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ledctrl_interfaces__srv__CameraCmd_Event__destroy(ledctrl_interfaces__srv__CameraCmd_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ledctrl_interfaces__srv__CameraCmd_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__init(ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Event * data = NULL;

  if (size) {
    data = (ledctrl_interfaces__srv__CameraCmd_Event *)allocator.zero_allocate(size, sizeof(ledctrl_interfaces__srv__CameraCmd_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ledctrl_interfaces__srv__CameraCmd_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ledctrl_interfaces__srv__CameraCmd_Event__fini(&data[i - 1]);
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
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__fini(ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array)
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
      ledctrl_interfaces__srv__CameraCmd_Event__fini(&array->data[i]);
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

ledctrl_interfaces__srv__CameraCmd_Event__Sequence *
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array = (ledctrl_interfaces__srv__CameraCmd_Event__Sequence *)allocator.allocate(sizeof(ledctrl_interfaces__srv__CameraCmd_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ledctrl_interfaces__srv__CameraCmd_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__destroy(ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ledctrl_interfaces__srv__CameraCmd_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__are_equal(const ledctrl_interfaces__srv__CameraCmd_Event__Sequence * lhs, const ledctrl_interfaces__srv__CameraCmd_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ledctrl_interfaces__srv__CameraCmd_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__copy(
  const ledctrl_interfaces__srv__CameraCmd_Event__Sequence * input,
  ledctrl_interfaces__srv__CameraCmd_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ledctrl_interfaces__srv__CameraCmd_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ledctrl_interfaces__srv__CameraCmd_Event * data =
      (ledctrl_interfaces__srv__CameraCmd_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ledctrl_interfaces__srv__CameraCmd_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ledctrl_interfaces__srv__CameraCmd_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ledctrl_interfaces__srv__CameraCmd_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
