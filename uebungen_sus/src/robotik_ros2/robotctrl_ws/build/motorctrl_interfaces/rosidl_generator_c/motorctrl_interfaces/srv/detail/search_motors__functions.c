// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motorctrl_interfaces:srv/SearchMotors.idl
// generated code does not contain a copyright notice
#include "motorctrl_interfaces/srv/detail/search_motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `uart_port`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
motorctrl_interfaces__srv__SearchMotors_Request__init(motorctrl_interfaces__srv__SearchMotors_Request * msg)
{
  if (!msg) {
    return false;
  }
  // uart_port
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->uart_port, 0)) {
    motorctrl_interfaces__srv__SearchMotors_Request__fini(msg);
    return false;
  }
  // baudrate
  return true;
}

void
motorctrl_interfaces__srv__SearchMotors_Request__fini(motorctrl_interfaces__srv__SearchMotors_Request * msg)
{
  if (!msg) {
    return;
  }
  // uart_port
  rosidl_runtime_c__uint8__Sequence__fini(&msg->uart_port);
  // baudrate
}

bool
motorctrl_interfaces__srv__SearchMotors_Request__are_equal(const motorctrl_interfaces__srv__SearchMotors_Request * lhs, const motorctrl_interfaces__srv__SearchMotors_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uart_port
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->uart_port), &(rhs->uart_port)))
  {
    return false;
  }
  // baudrate
  if (lhs->baudrate != rhs->baudrate) {
    return false;
  }
  return true;
}

bool
motorctrl_interfaces__srv__SearchMotors_Request__copy(
  const motorctrl_interfaces__srv__SearchMotors_Request * input,
  motorctrl_interfaces__srv__SearchMotors_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // uart_port
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->uart_port), &(output->uart_port)))
  {
    return false;
  }
  // baudrate
  output->baudrate = input->baudrate;
  return true;
}

motorctrl_interfaces__srv__SearchMotors_Request *
motorctrl_interfaces__srv__SearchMotors_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Request * msg = (motorctrl_interfaces__srv__SearchMotors_Request *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SearchMotors_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motorctrl_interfaces__srv__SearchMotors_Request));
  bool success = motorctrl_interfaces__srv__SearchMotors_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motorctrl_interfaces__srv__SearchMotors_Request__destroy(motorctrl_interfaces__srv__SearchMotors_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motorctrl_interfaces__srv__SearchMotors_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motorctrl_interfaces__srv__SearchMotors_Request__Sequence__init(motorctrl_interfaces__srv__SearchMotors_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Request * data = NULL;

  if (size) {
    data = (motorctrl_interfaces__srv__SearchMotors_Request *)allocator.zero_allocate(size, sizeof(motorctrl_interfaces__srv__SearchMotors_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motorctrl_interfaces__srv__SearchMotors_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motorctrl_interfaces__srv__SearchMotors_Request__fini(&data[i - 1]);
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
motorctrl_interfaces__srv__SearchMotors_Request__Sequence__fini(motorctrl_interfaces__srv__SearchMotors_Request__Sequence * array)
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
      motorctrl_interfaces__srv__SearchMotors_Request__fini(&array->data[i]);
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

motorctrl_interfaces__srv__SearchMotors_Request__Sequence *
motorctrl_interfaces__srv__SearchMotors_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Request__Sequence * array = (motorctrl_interfaces__srv__SearchMotors_Request__Sequence *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SearchMotors_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motorctrl_interfaces__srv__SearchMotors_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motorctrl_interfaces__srv__SearchMotors_Request__Sequence__destroy(motorctrl_interfaces__srv__SearchMotors_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motorctrl_interfaces__srv__SearchMotors_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motorctrl_interfaces__srv__SearchMotors_Request__Sequence__are_equal(const motorctrl_interfaces__srv__SearchMotors_Request__Sequence * lhs, const motorctrl_interfaces__srv__SearchMotors_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motorctrl_interfaces__srv__SearchMotors_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motorctrl_interfaces__srv__SearchMotors_Request__Sequence__copy(
  const motorctrl_interfaces__srv__SearchMotors_Request__Sequence * input,
  motorctrl_interfaces__srv__SearchMotors_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motorctrl_interfaces__srv__SearchMotors_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motorctrl_interfaces__srv__SearchMotors_Request * data =
      (motorctrl_interfaces__srv__SearchMotors_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motorctrl_interfaces__srv__SearchMotors_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motorctrl_interfaces__srv__SearchMotors_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motorctrl_interfaces__srv__SearchMotors_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `motor_ids`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
motorctrl_interfaces__srv__SearchMotors_Response__init(motorctrl_interfaces__srv__SearchMotors_Response * msg)
{
  if (!msg) {
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->motor_ids, 0)) {
    motorctrl_interfaces__srv__SearchMotors_Response__fini(msg);
    return false;
  }
  // status
  return true;
}

void
motorctrl_interfaces__srv__SearchMotors_Response__fini(motorctrl_interfaces__srv__SearchMotors_Response * msg)
{
  if (!msg) {
    return;
  }
  // motor_ids
  rosidl_runtime_c__uint8__Sequence__fini(&msg->motor_ids);
  // status
}

bool
motorctrl_interfaces__srv__SearchMotors_Response__are_equal(const motorctrl_interfaces__srv__SearchMotors_Response * lhs, const motorctrl_interfaces__srv__SearchMotors_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->motor_ids), &(rhs->motor_ids)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
motorctrl_interfaces__srv__SearchMotors_Response__copy(
  const motorctrl_interfaces__srv__SearchMotors_Response * input,
  motorctrl_interfaces__srv__SearchMotors_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_ids
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->motor_ids), &(output->motor_ids)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

motorctrl_interfaces__srv__SearchMotors_Response *
motorctrl_interfaces__srv__SearchMotors_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Response * msg = (motorctrl_interfaces__srv__SearchMotors_Response *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SearchMotors_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motorctrl_interfaces__srv__SearchMotors_Response));
  bool success = motorctrl_interfaces__srv__SearchMotors_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motorctrl_interfaces__srv__SearchMotors_Response__destroy(motorctrl_interfaces__srv__SearchMotors_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motorctrl_interfaces__srv__SearchMotors_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motorctrl_interfaces__srv__SearchMotors_Response__Sequence__init(motorctrl_interfaces__srv__SearchMotors_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Response * data = NULL;

  if (size) {
    data = (motorctrl_interfaces__srv__SearchMotors_Response *)allocator.zero_allocate(size, sizeof(motorctrl_interfaces__srv__SearchMotors_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motorctrl_interfaces__srv__SearchMotors_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motorctrl_interfaces__srv__SearchMotors_Response__fini(&data[i - 1]);
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
motorctrl_interfaces__srv__SearchMotors_Response__Sequence__fini(motorctrl_interfaces__srv__SearchMotors_Response__Sequence * array)
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
      motorctrl_interfaces__srv__SearchMotors_Response__fini(&array->data[i]);
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

motorctrl_interfaces__srv__SearchMotors_Response__Sequence *
motorctrl_interfaces__srv__SearchMotors_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Response__Sequence * array = (motorctrl_interfaces__srv__SearchMotors_Response__Sequence *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SearchMotors_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motorctrl_interfaces__srv__SearchMotors_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motorctrl_interfaces__srv__SearchMotors_Response__Sequence__destroy(motorctrl_interfaces__srv__SearchMotors_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motorctrl_interfaces__srv__SearchMotors_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motorctrl_interfaces__srv__SearchMotors_Response__Sequence__are_equal(const motorctrl_interfaces__srv__SearchMotors_Response__Sequence * lhs, const motorctrl_interfaces__srv__SearchMotors_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motorctrl_interfaces__srv__SearchMotors_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motorctrl_interfaces__srv__SearchMotors_Response__Sequence__copy(
  const motorctrl_interfaces__srv__SearchMotors_Response__Sequence * input,
  motorctrl_interfaces__srv__SearchMotors_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motorctrl_interfaces__srv__SearchMotors_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motorctrl_interfaces__srv__SearchMotors_Response * data =
      (motorctrl_interfaces__srv__SearchMotors_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motorctrl_interfaces__srv__SearchMotors_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motorctrl_interfaces__srv__SearchMotors_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motorctrl_interfaces__srv__SearchMotors_Response__copy(
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
// #include "motorctrl_interfaces/srv/detail/search_motors__functions.h"

bool
motorctrl_interfaces__srv__SearchMotors_Event__init(motorctrl_interfaces__srv__SearchMotors_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    motorctrl_interfaces__srv__SearchMotors_Event__fini(msg);
    return false;
  }
  // request
  if (!motorctrl_interfaces__srv__SearchMotors_Request__Sequence__init(&msg->request, 0)) {
    motorctrl_interfaces__srv__SearchMotors_Event__fini(msg);
    return false;
  }
  // response
  if (!motorctrl_interfaces__srv__SearchMotors_Response__Sequence__init(&msg->response, 0)) {
    motorctrl_interfaces__srv__SearchMotors_Event__fini(msg);
    return false;
  }
  return true;
}

void
motorctrl_interfaces__srv__SearchMotors_Event__fini(motorctrl_interfaces__srv__SearchMotors_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  motorctrl_interfaces__srv__SearchMotors_Request__Sequence__fini(&msg->request);
  // response
  motorctrl_interfaces__srv__SearchMotors_Response__Sequence__fini(&msg->response);
}

bool
motorctrl_interfaces__srv__SearchMotors_Event__are_equal(const motorctrl_interfaces__srv__SearchMotors_Event * lhs, const motorctrl_interfaces__srv__SearchMotors_Event * rhs)
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
  if (!motorctrl_interfaces__srv__SearchMotors_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!motorctrl_interfaces__srv__SearchMotors_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
motorctrl_interfaces__srv__SearchMotors_Event__copy(
  const motorctrl_interfaces__srv__SearchMotors_Event * input,
  motorctrl_interfaces__srv__SearchMotors_Event * output)
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
  if (!motorctrl_interfaces__srv__SearchMotors_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!motorctrl_interfaces__srv__SearchMotors_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

motorctrl_interfaces__srv__SearchMotors_Event *
motorctrl_interfaces__srv__SearchMotors_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Event * msg = (motorctrl_interfaces__srv__SearchMotors_Event *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SearchMotors_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motorctrl_interfaces__srv__SearchMotors_Event));
  bool success = motorctrl_interfaces__srv__SearchMotors_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motorctrl_interfaces__srv__SearchMotors_Event__destroy(motorctrl_interfaces__srv__SearchMotors_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motorctrl_interfaces__srv__SearchMotors_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motorctrl_interfaces__srv__SearchMotors_Event__Sequence__init(motorctrl_interfaces__srv__SearchMotors_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Event * data = NULL;

  if (size) {
    data = (motorctrl_interfaces__srv__SearchMotors_Event *)allocator.zero_allocate(size, sizeof(motorctrl_interfaces__srv__SearchMotors_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motorctrl_interfaces__srv__SearchMotors_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motorctrl_interfaces__srv__SearchMotors_Event__fini(&data[i - 1]);
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
motorctrl_interfaces__srv__SearchMotors_Event__Sequence__fini(motorctrl_interfaces__srv__SearchMotors_Event__Sequence * array)
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
      motorctrl_interfaces__srv__SearchMotors_Event__fini(&array->data[i]);
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

motorctrl_interfaces__srv__SearchMotors_Event__Sequence *
motorctrl_interfaces__srv__SearchMotors_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SearchMotors_Event__Sequence * array = (motorctrl_interfaces__srv__SearchMotors_Event__Sequence *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SearchMotors_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motorctrl_interfaces__srv__SearchMotors_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motorctrl_interfaces__srv__SearchMotors_Event__Sequence__destroy(motorctrl_interfaces__srv__SearchMotors_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motorctrl_interfaces__srv__SearchMotors_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motorctrl_interfaces__srv__SearchMotors_Event__Sequence__are_equal(const motorctrl_interfaces__srv__SearchMotors_Event__Sequence * lhs, const motorctrl_interfaces__srv__SearchMotors_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motorctrl_interfaces__srv__SearchMotors_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motorctrl_interfaces__srv__SearchMotors_Event__Sequence__copy(
  const motorctrl_interfaces__srv__SearchMotors_Event__Sequence * input,
  motorctrl_interfaces__srv__SearchMotors_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motorctrl_interfaces__srv__SearchMotors_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motorctrl_interfaces__srv__SearchMotors_Event * data =
      (motorctrl_interfaces__srv__SearchMotors_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motorctrl_interfaces__srv__SearchMotors_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motorctrl_interfaces__srv__SearchMotors_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motorctrl_interfaces__srv__SearchMotors_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
