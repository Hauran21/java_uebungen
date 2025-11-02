// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ledctrl_interfaces:srv/ColorValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ledctrl_interfaces/srv/detail/color_values__rosidl_typesupport_introspection_c.h"
#include "ledctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ledctrl_interfaces/srv/detail/color_values__functions.h"
#include "ledctrl_interfaces/srv/detail/color_values__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ledctrl_interfaces__srv__ColorValues_Request__init(message_memory);
}

void ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_fini_function(void * message_memory)
{
  ledctrl_interfaces__srv__ColorValues_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces__srv__ColorValues_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_members = {
  "ledctrl_interfaces__srv",  // message namespace
  "ColorValues_Request",  // message name
  1,  // number of fields
  sizeof(ledctrl_interfaces__srv__ColorValues_Request),
  false,  // has_any_key_member_
  ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_member_array,  // message members
  ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_type_support_handle = {
  0,
  &ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_members,
  get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Request__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues_Request__get_type_description,
  &ledctrl_interfaces__srv__ColorValues_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ledctrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Request)() {
  if (!ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_type_support_handle.typesupport_identifier) {
    ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ledctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__functions.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__struct.h"


// Include directives for member types
// Member `colors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ledctrl_interfaces__srv__ColorValues_Response__init(message_memory);
}

void ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_fini_function(void * message_memory)
{
  ledctrl_interfaces__srv__ColorValues_Response__fini(message_memory);
}

size_t ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__size_function__ColorValues_Response__colors(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Response__colors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__get_function__ColorValues_Response__colors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__fetch_function__ColorValues_Response__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Response__colors(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__assign_function__ColorValues_Response__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__get_function__ColorValues_Response__colors(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__resize_function__ColorValues_Response__colors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_member_array[2] = {
  {
    "colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces__srv__ColorValues_Response, colors),  // bytes offset in struct
    NULL,  // default value
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__size_function__ColorValues_Response__colors,  // size() function pointer
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Response__colors,  // get_const(index) function pointer
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__get_function__ColorValues_Response__colors,  // get(index) function pointer
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__fetch_function__ColorValues_Response__colors,  // fetch(index, &value) function pointer
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__assign_function__ColorValues_Response__colors,  // assign(index, value) function pointer
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__resize_function__ColorValues_Response__colors  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces__srv__ColorValues_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_members = {
  "ledctrl_interfaces__srv",  // message namespace
  "ColorValues_Response",  // message name
  2,  // number of fields
  sizeof(ledctrl_interfaces__srv__ColorValues_Response),
  false,  // has_any_key_member_
  ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_member_array,  // message members
  ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle = {
  0,
  &ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_members,
  get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Response__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues_Response__get_type_description,
  &ledctrl_interfaces__srv__ColorValues_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ledctrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Response)() {
  if (!ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle.typesupport_identifier) {
    ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ledctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__functions.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ledctrl_interfaces/srv/color_values.h"
// Member `request`
// Member `response`
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ledctrl_interfaces__srv__ColorValues_Event__init(message_memory);
}

void ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_fini_function(void * message_memory)
{
  ledctrl_interfaces__srv__ColorValues_Event__fini(message_memory);
}

size_t ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__size_function__ColorValues_Event__request(
  const void * untyped_member)
{
  const ledctrl_interfaces__srv__ColorValues_Request__Sequence * member =
    (const ledctrl_interfaces__srv__ColorValues_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Event__request(
  const void * untyped_member, size_t index)
{
  const ledctrl_interfaces__srv__ColorValues_Request__Sequence * member =
    (const ledctrl_interfaces__srv__ColorValues_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_function__ColorValues_Event__request(
  void * untyped_member, size_t index)
{
  ledctrl_interfaces__srv__ColorValues_Request__Sequence * member =
    (ledctrl_interfaces__srv__ColorValues_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__fetch_function__ColorValues_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ledctrl_interfaces__srv__ColorValues_Request * item =
    ((const ledctrl_interfaces__srv__ColorValues_Request *)
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Event__request(untyped_member, index));
  ledctrl_interfaces__srv__ColorValues_Request * value =
    (ledctrl_interfaces__srv__ColorValues_Request *)(untyped_value);
  *value = *item;
}

void ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__assign_function__ColorValues_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ledctrl_interfaces__srv__ColorValues_Request * item =
    ((ledctrl_interfaces__srv__ColorValues_Request *)
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_function__ColorValues_Event__request(untyped_member, index));
  const ledctrl_interfaces__srv__ColorValues_Request * value =
    (const ledctrl_interfaces__srv__ColorValues_Request *)(untyped_value);
  *item = *value;
}

bool ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__resize_function__ColorValues_Event__request(
  void * untyped_member, size_t size)
{
  ledctrl_interfaces__srv__ColorValues_Request__Sequence * member =
    (ledctrl_interfaces__srv__ColorValues_Request__Sequence *)(untyped_member);
  ledctrl_interfaces__srv__ColorValues_Request__Sequence__fini(member);
  return ledctrl_interfaces__srv__ColorValues_Request__Sequence__init(member, size);
}

size_t ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__size_function__ColorValues_Event__response(
  const void * untyped_member)
{
  const ledctrl_interfaces__srv__ColorValues_Response__Sequence * member =
    (const ledctrl_interfaces__srv__ColorValues_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Event__response(
  const void * untyped_member, size_t index)
{
  const ledctrl_interfaces__srv__ColorValues_Response__Sequence * member =
    (const ledctrl_interfaces__srv__ColorValues_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_function__ColorValues_Event__response(
  void * untyped_member, size_t index)
{
  ledctrl_interfaces__srv__ColorValues_Response__Sequence * member =
    (ledctrl_interfaces__srv__ColorValues_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__fetch_function__ColorValues_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ledctrl_interfaces__srv__ColorValues_Response * item =
    ((const ledctrl_interfaces__srv__ColorValues_Response *)
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Event__response(untyped_member, index));
  ledctrl_interfaces__srv__ColorValues_Response * value =
    (ledctrl_interfaces__srv__ColorValues_Response *)(untyped_value);
  *value = *item;
}

void ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__assign_function__ColorValues_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ledctrl_interfaces__srv__ColorValues_Response * item =
    ((ledctrl_interfaces__srv__ColorValues_Response *)
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_function__ColorValues_Event__response(untyped_member, index));
  const ledctrl_interfaces__srv__ColorValues_Response * value =
    (const ledctrl_interfaces__srv__ColorValues_Response *)(untyped_value);
  *item = *value;
}

bool ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__resize_function__ColorValues_Event__response(
  void * untyped_member, size_t size)
{
  ledctrl_interfaces__srv__ColorValues_Response__Sequence * member =
    (ledctrl_interfaces__srv__ColorValues_Response__Sequence *)(untyped_member);
  ledctrl_interfaces__srv__ColorValues_Response__Sequence__fini(member);
  return ledctrl_interfaces__srv__ColorValues_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces__srv__ColorValues_Event, info),  // bytes offset in struct
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
    offsetof(ledctrl_interfaces__srv__ColorValues_Event, request),  // bytes offset in struct
    NULL,  // default value
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__size_function__ColorValues_Event__request,  // size() function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Event__request,  // get_const(index) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_function__ColorValues_Event__request,  // get(index) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__fetch_function__ColorValues_Event__request,  // fetch(index, &value) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__assign_function__ColorValues_Event__request,  // assign(index, value) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__resize_function__ColorValues_Event__request  // resize(index) function pointer
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
    offsetof(ledctrl_interfaces__srv__ColorValues_Event, response),  // bytes offset in struct
    NULL,  // default value
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__size_function__ColorValues_Event__response,  // size() function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_const_function__ColorValues_Event__response,  // get_const(index) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__get_function__ColorValues_Event__response,  // get(index) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__fetch_function__ColorValues_Event__response,  // fetch(index, &value) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__assign_function__ColorValues_Event__response,  // assign(index, value) function pointer
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__resize_function__ColorValues_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_members = {
  "ledctrl_interfaces__srv",  // message namespace
  "ColorValues_Event",  // message name
  3,  // number of fields
  sizeof(ledctrl_interfaces__srv__ColorValues_Event),
  false,  // has_any_key_member_
  ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_member_array,  // message members
  ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_type_support_handle = {
  0,
  &ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_members,
  get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Event__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues_Event__get_type_description,
  &ledctrl_interfaces__srv__ColorValues_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ledctrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Event)() {
  ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Request)();
  ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Response)();
  if (!ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_type_support_handle.typesupport_identifier) {
    ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_members = {
  "ledctrl_interfaces__srv",  // service namespace
  "ColorValues",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_Request_message_type_support_handle,
  NULL,  // response message
  // ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle
  NULL  // event_message
  // ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle
};


static rosidl_service_type_support_t ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_type_support_handle = {
  0,
  &ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_members,
  get_service_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Request__rosidl_typesupport_introspection_c__ColorValues_Request_message_type_support_handle,
  &ledctrl_interfaces__srv__ColorValues_Response__rosidl_typesupport_introspection_c__ColorValues_Response_message_type_support_handle,
  &ledctrl_interfaces__srv__ColorValues_Event__rosidl_typesupport_introspection_c__ColorValues_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ledctrl_interfaces,
    srv,
    ColorValues
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ledctrl_interfaces,
    srv,
    ColorValues
  ),
  &ledctrl_interfaces__srv__ColorValues__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues__get_type_description,
  &ledctrl_interfaces__srv__ColorValues__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ledctrl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues)(void) {
  if (!ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_type_support_handle.typesupport_identifier) {
    ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Event)()->data;
  }

  return &ledctrl_interfaces__srv__detail__color_values__rosidl_typesupport_introspection_c__ColorValues_service_type_support_handle;
}
