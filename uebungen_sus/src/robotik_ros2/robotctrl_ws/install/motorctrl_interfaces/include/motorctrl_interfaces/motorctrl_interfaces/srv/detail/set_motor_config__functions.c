// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motorctrl_interfaces:srv/SetMotorConfig.idl
// generated code does not contain a copyright notice
#include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `uart_name`
#include "rosidl_runtime_c/string_functions.h"

bool
motorctrl_interfaces__srv__SetMotorConfig_Request__init(motorctrl_interfaces__srv__SetMotorConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // uart_name
  if (!rosidl_runtime_c__String__init(&msg->uart_name)) {
    motorctrl_interfaces__srv__SetMotorConfig_Request__fini(msg);
    return false;
  }
  // uart_baudrate
  // motor_id_new
  // uart_baudrate_new
  return true;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Request__fini(motorctrl_interfaces__srv__SetMotorConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // uart_name
  rosidl_runtime_c__String__fini(&msg->uart_name);
  // uart_baudrate
  // motor_id_new
  // uart_baudrate_new
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Request__are_equal(const motorctrl_interfaces__srv__SetMotorConfig_Request * lhs, const motorctrl_interfaces__srv__SetMotorConfig_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // uart_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uart_name), &(rhs->uart_name)))
  {
    return false;
  }
  // uart_baudrate
  if (lhs->uart_baudrate != rhs->uart_baudrate) {
    return false;
  }
  // motor_id_new
  if (lhs->motor_id_new != rhs->motor_id_new) {
    return false;
  }
  // uart_baudrate_new
  if (lhs->uart_baudrate_new != rhs->uart_baudrate_new) {
    return false;
  }
  return true;
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Request__copy(
  const motorctrl_interfaces__srv__SetMotorConfig_Request * input,
  motorctrl_interfaces__srv__SetMotorConfig_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // uart_name
  if (!rosidl_runtime_c__String__copy(
      &(input->uart_name), &(output->uart_name)))
  {
    return false;
  }
  // uart_baudrate
  output->uart_baudrate = input->uart_baudrate;
  // motor_id_new
  output->motor_id_new = input->motor_id_new;
  // uart_baudrate_new
  output->uart_baudrate_new = input->uart_baudrate_new;
  return true;
}

motorctrl_interfaces__srv__SetMotorConfig_Request *
motorctrl_interfaces__srv__SetMotorConfig_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Request * msg = (motorctrl_interfaces__srv__SetMotorConfig_Request *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SetMotorConfig_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motorctrl_interfaces__srv__SetMotorConfig_Request));
  bool success = motorctrl_interfaces__srv__SetMotorConfig_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Request__destroy(motorctrl_interfaces__srv__SetMotorConfig_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motorctrl_interfaces__srv__SetMotorConfig_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__init(motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Request * data = NULL;

  if (size) {
    data = (motorctrl_interfaces__srv__SetMotorConfig_Request *)allocator.zero_allocate(size, sizeof(motorctrl_interfaces__srv__SetMotorConfig_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motorctrl_interfaces__srv__SetMotorConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motorctrl_interfaces__srv__SetMotorConfig_Request__fini(&data[i - 1]);
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
motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__fini(motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * array)
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
      motorctrl_interfaces__srv__SetMotorConfig_Request__fini(&array->data[i]);
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

motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence *
motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * array = (motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__destroy(motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__are_equal(const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * lhs, const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motorctrl_interfaces__srv__SetMotorConfig_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__copy(
  const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * input,
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motorctrl_interfaces__srv__SetMotorConfig_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motorctrl_interfaces__srv__SetMotorConfig_Request * data =
      (motorctrl_interfaces__srv__SetMotorConfig_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motorctrl_interfaces__srv__SetMotorConfig_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motorctrl_interfaces__srv__SetMotorConfig_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motorctrl_interfaces__srv__SetMotorConfig_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
motorctrl_interfaces__srv__SetMotorConfig_Response__init(motorctrl_interfaces__srv__SetMotorConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    motorctrl_interfaces__srv__SetMotorConfig_Response__fini(msg);
    return false;
  }
  return true;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Response__fini(motorctrl_interfaces__srv__SetMotorConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Response__are_equal(const motorctrl_interfaces__srv__SetMotorConfig_Response * lhs, const motorctrl_interfaces__srv__SetMotorConfig_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Response__copy(
  const motorctrl_interfaces__srv__SetMotorConfig_Response * input,
  motorctrl_interfaces__srv__SetMotorConfig_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

motorctrl_interfaces__srv__SetMotorConfig_Response *
motorctrl_interfaces__srv__SetMotorConfig_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Response * msg = (motorctrl_interfaces__srv__SetMotorConfig_Response *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SetMotorConfig_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motorctrl_interfaces__srv__SetMotorConfig_Response));
  bool success = motorctrl_interfaces__srv__SetMotorConfig_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Response__destroy(motorctrl_interfaces__srv__SetMotorConfig_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motorctrl_interfaces__srv__SetMotorConfig_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__init(motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Response * data = NULL;

  if (size) {
    data = (motorctrl_interfaces__srv__SetMotorConfig_Response *)allocator.zero_allocate(size, sizeof(motorctrl_interfaces__srv__SetMotorConfig_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motorctrl_interfaces__srv__SetMotorConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motorctrl_interfaces__srv__SetMotorConfig_Response__fini(&data[i - 1]);
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
motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__fini(motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * array)
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
      motorctrl_interfaces__srv__SetMotorConfig_Response__fini(&array->data[i]);
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

motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence *
motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * array = (motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__destroy(motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__are_equal(const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * lhs, const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motorctrl_interfaces__srv__SetMotorConfig_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__copy(
  const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * input,
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motorctrl_interfaces__srv__SetMotorConfig_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motorctrl_interfaces__srv__SetMotorConfig_Response * data =
      (motorctrl_interfaces__srv__SetMotorConfig_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motorctrl_interfaces__srv__SetMotorConfig_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motorctrl_interfaces__srv__SetMotorConfig_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motorctrl_interfaces__srv__SetMotorConfig_Response__copy(
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
// #include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"

bool
motorctrl_interfaces__srv__SetMotorConfig_Event__init(motorctrl_interfaces__srv__SetMotorConfig_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    motorctrl_interfaces__srv__SetMotorConfig_Event__fini(msg);
    return false;
  }
  // request
  if (!motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__init(&msg->request, 0)) {
    motorctrl_interfaces__srv__SetMotorConfig_Event__fini(msg);
    return false;
  }
  // response
  if (!motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__init(&msg->response, 0)) {
    motorctrl_interfaces__srv__SetMotorConfig_Event__fini(msg);
    return false;
  }
  return true;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Event__fini(motorctrl_interfaces__srv__SetMotorConfig_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__fini(&msg->request);
  // response
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__fini(&msg->response);
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Event__are_equal(const motorctrl_interfaces__srv__SetMotorConfig_Event * lhs, const motorctrl_interfaces__srv__SetMotorConfig_Event * rhs)
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
  if (!motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Event__copy(
  const motorctrl_interfaces__srv__SetMotorConfig_Event * input,
  motorctrl_interfaces__srv__SetMotorConfig_Event * output)
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
  if (!motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

motorctrl_interfaces__srv__SetMotorConfig_Event *
motorctrl_interfaces__srv__SetMotorConfig_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Event * msg = (motorctrl_interfaces__srv__SetMotorConfig_Event *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SetMotorConfig_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motorctrl_interfaces__srv__SetMotorConfig_Event));
  bool success = motorctrl_interfaces__srv__SetMotorConfig_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Event__destroy(motorctrl_interfaces__srv__SetMotorConfig_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motorctrl_interfaces__srv__SetMotorConfig_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__init(motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Event * data = NULL;

  if (size) {
    data = (motorctrl_interfaces__srv__SetMotorConfig_Event *)allocator.zero_allocate(size, sizeof(motorctrl_interfaces__srv__SetMotorConfig_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motorctrl_interfaces__srv__SetMotorConfig_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motorctrl_interfaces__srv__SetMotorConfig_Event__fini(&data[i - 1]);
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
motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__fini(motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * array)
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
      motorctrl_interfaces__srv__SetMotorConfig_Event__fini(&array->data[i]);
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

motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence *
motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * array = (motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence *)allocator.allocate(sizeof(motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__destroy(motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__are_equal(const motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * lhs, const motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motorctrl_interfaces__srv__SetMotorConfig_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence__copy(
  const motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * input,
  motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motorctrl_interfaces__srv__SetMotorConfig_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motorctrl_interfaces__srv__SetMotorConfig_Event * data =
      (motorctrl_interfaces__srv__SetMotorConfig_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motorctrl_interfaces__srv__SetMotorConfig_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motorctrl_interfaces__srv__SetMotorConfig_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motorctrl_interfaces__srv__SetMotorConfig_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
