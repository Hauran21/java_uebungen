// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motorctrl_interfaces:srv/SetMotorConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motorctrl_interfaces/srv/detail/set_motor_config__rosidl_typesupport_introspection_c.h"
#include "motorctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"
#include "motorctrl_interfaces/srv/detail/set_motor_config__struct.h"


// Include directives for member types
// Member `uart_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motorctrl_interfaces__srv__SetMotorConfig_Request__init(message_memory);
}

void motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_fini_function(void * message_memory)
{
  motorctrl_interfaces__srv__SetMotorConfig_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_member_array[5] = {
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Request, motor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uart_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Request, uart_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uart_baudrate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Request, uart_baudrate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_id_new",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Request, motor_id_new),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uart_baudrate_new",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Request, uart_baudrate_new),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_members = {
  "motorctrl_interfaces__srv",  // message namespace
  "SetMotorConfig_Request",  // message name
  5,  // number of fields
  sizeof(motorctrl_interfaces__srv__SetMotorConfig_Request),
  false,  // has_any_key_member_
  motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_member_array,  // message members
  motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_type_support_handle = {
  0,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_members,
  get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Request)() {
  if (!motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_type_support_handle.typesupport_identifier) {
    motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "motorctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motorctrl_interfaces__srv__SetMotorConfig_Response__init(message_memory);
}

void motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_fini_function(void * message_memory)
{
  motorctrl_interfaces__srv__SetMotorConfig_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_members = {
  "motorctrl_interfaces__srv",  // message namespace
  "SetMotorConfig_Response",  // message name
  2,  // number of fields
  sizeof(motorctrl_interfaces__srv__SetMotorConfig_Response),
  false,  // has_any_key_member_
  motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_member_array,  // message members
  motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle = {
  0,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_members,
  get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Response)() {
  if (!motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle.typesupport_identifier) {
    motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "motorctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "motorctrl_interfaces/srv/set_motor_config.h"
// Member `request`
// Member `response`
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motorctrl_interfaces__srv__SetMotorConfig_Event__init(message_memory);
}

void motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_fini_function(void * message_memory)
{
  motorctrl_interfaces__srv__SetMotorConfig_Event__fini(message_memory);
}

size_t motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__size_function__SetMotorConfig_Event__request(
  const void * untyped_member)
{
  const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * member =
    (const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetMotorConfig_Event__request(
  const void * untyped_member, size_t index)
{
  const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * member =
    (const motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_function__SetMotorConfig_Event__request(
  void * untyped_member, size_t index)
{
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * member =
    (motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetMotorConfig_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const motorctrl_interfaces__srv__SetMotorConfig_Request * item =
    ((const motorctrl_interfaces__srv__SetMotorConfig_Request *)
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetMotorConfig_Event__request(untyped_member, index));
  motorctrl_interfaces__srv__SetMotorConfig_Request * value =
    (motorctrl_interfaces__srv__SetMotorConfig_Request *)(untyped_value);
  *value = *item;
}

void motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetMotorConfig_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  motorctrl_interfaces__srv__SetMotorConfig_Request * item =
    ((motorctrl_interfaces__srv__SetMotorConfig_Request *)
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_function__SetMotorConfig_Event__request(untyped_member, index));
  const motorctrl_interfaces__srv__SetMotorConfig_Request * value =
    (const motorctrl_interfaces__srv__SetMotorConfig_Request *)(untyped_value);
  *item = *value;
}

bool motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetMotorConfig_Event__request(
  void * untyped_member, size_t size)
{
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence * member =
    (motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence *)(untyped_member);
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__fini(member);
  return motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence__init(member, size);
}

size_t motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__size_function__SetMotorConfig_Event__response(
  const void * untyped_member)
{
  const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * member =
    (const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetMotorConfig_Event__response(
  const void * untyped_member, size_t index)
{
  const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * member =
    (const motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_function__SetMotorConfig_Event__response(
  void * untyped_member, size_t index)
{
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * member =
    (motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetMotorConfig_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const motorctrl_interfaces__srv__SetMotorConfig_Response * item =
    ((const motorctrl_interfaces__srv__SetMotorConfig_Response *)
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetMotorConfig_Event__response(untyped_member, index));
  motorctrl_interfaces__srv__SetMotorConfig_Response * value =
    (motorctrl_interfaces__srv__SetMotorConfig_Response *)(untyped_value);
  *value = *item;
}

void motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetMotorConfig_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  motorctrl_interfaces__srv__SetMotorConfig_Response * item =
    ((motorctrl_interfaces__srv__SetMotorConfig_Response *)
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_function__SetMotorConfig_Event__response(untyped_member, index));
  const motorctrl_interfaces__srv__SetMotorConfig_Response * value =
    (const motorctrl_interfaces__srv__SetMotorConfig_Response *)(untyped_value);
  *item = *value;
}

bool motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetMotorConfig_Event__response(
  void * untyped_member, size_t size)
{
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence * member =
    (motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence *)(untyped_member);
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__fini(member);
  return motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Event, request),  // bytes offset in struct
    NULL,  // default value
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__size_function__SetMotorConfig_Event__request,  // size() function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetMotorConfig_Event__request,  // get_const(index) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_function__SetMotorConfig_Event__request,  // get(index) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetMotorConfig_Event__request,  // fetch(index, &value) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetMotorConfig_Event__request,  // assign(index, value) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetMotorConfig_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(motorctrl_interfaces__srv__SetMotorConfig_Event, response),  // bytes offset in struct
    NULL,  // default value
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__size_function__SetMotorConfig_Event__response,  // size() function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_const_function__SetMotorConfig_Event__response,  // get_const(index) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__get_function__SetMotorConfig_Event__response,  // get(index) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__fetch_function__SetMotorConfig_Event__response,  // fetch(index, &value) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__assign_function__SetMotorConfig_Event__response,  // assign(index, value) function pointer
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__resize_function__SetMotorConfig_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_members = {
  "motorctrl_interfaces__srv",  // message namespace
  "SetMotorConfig_Event",  // message name
  3,  // number of fields
  sizeof(motorctrl_interfaces__srv__SetMotorConfig_Event),
  false,  // has_any_key_member_
  motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_member_array,  // message members
  motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_type_support_handle = {
  0,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_members,
  get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Event)() {
  motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Request)();
  motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Response)();
  if (!motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_type_support_handle.typesupport_identifier) {
    motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motorctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_members = {
  "motorctrl_interfaces__srv",  // service namespace
  "SetMotorConfig",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_type_support_handle,
  NULL,  // response message
  // motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle
  NULL  // event_message
  // motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle
};


static rosidl_service_type_support_t motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_type_support_handle = {
  0,
  &motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_members,
  get_service_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__rosidl_typesupport_introspection_c__SetMotorConfig_Request_message_type_support_handle,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__rosidl_typesupport_introspection_c__SetMotorConfig_Response_message_type_support_handle,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__rosidl_typesupport_introspection_c__SetMotorConfig_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    motorctrl_interfaces,
    srv,
    SetMotorConfig
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    motorctrl_interfaces,
    srv,
    SetMotorConfig
  ),
  &motorctrl_interfaces__srv__SetMotorConfig__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig)(void) {
  if (!motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_type_support_handle.typesupport_identifier) {
    motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Event)()->data;
  }

  return &motorctrl_interfaces__srv__detail__set_motor_config__rosidl_typesupport_introspection_c__SetMotorConfig_service_type_support_handle;
}
