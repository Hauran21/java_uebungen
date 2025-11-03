// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cameractrl_interfaces:srv/TriggerSnapshot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__rosidl_typesupport_introspection_c.h"
#include "cameractrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cameractrl_interfaces__srv__TriggerSnapshot_Request__init(message_memory);
}

void cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_fini_function(void * message_memory)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_member_array[1] = {
  {
    "fr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cameractrl_interfaces__srv__TriggerSnapshot_Request, fr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_members = {
  "cameractrl_interfaces__srv",  // message namespace
  "TriggerSnapshot_Request",  // message name
  1,  // number of fields
  sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Request),
  false,  // has_any_key_member_
  cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_member_array,  // message members
  cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_type_support_handle = {
  0,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_members,
  get_message_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cameractrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)() {
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_type_support_handle.typesupport_identifier) {
    cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cameractrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cameractrl_interfaces__srv__TriggerSnapshot_Response__init(message_memory);
}

void cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_fini_function(void * message_memory)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cameractrl_interfaces__srv__TriggerSnapshot_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_members = {
  "cameractrl_interfaces__srv",  // message namespace
  "TriggerSnapshot_Response",  // message name
  1,  // number of fields
  sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Response),
  false,  // has_any_key_member_
  cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_member_array,  // message members
  cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle = {
  0,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_members,
  get_message_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cameractrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)() {
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle.typesupport_identifier) {
    cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cameractrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "cameractrl_interfaces/srv/trigger_snapshot.h"
// Member `request`
// Member `response`
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cameractrl_interfaces__srv__TriggerSnapshot_Event__init(message_memory);
}

void cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_fini_function(void * message_memory)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Event__fini(message_memory);
}

size_t cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__size_function__TriggerSnapshot_Event__request(
  const void * untyped_member)
{
  const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * member =
    (const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerSnapshot_Event__request(
  const void * untyped_member, size_t index)
{
  const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * member =
    (const cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_function__TriggerSnapshot_Event__request(
  void * untyped_member, size_t index)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * member =
    (cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerSnapshot_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cameractrl_interfaces__srv__TriggerSnapshot_Request * item =
    ((const cameractrl_interfaces__srv__TriggerSnapshot_Request *)
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerSnapshot_Event__request(untyped_member, index));
  cameractrl_interfaces__srv__TriggerSnapshot_Request * value =
    (cameractrl_interfaces__srv__TriggerSnapshot_Request *)(untyped_value);
  *value = *item;
}

void cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__assign_function__TriggerSnapshot_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Request * item =
    ((cameractrl_interfaces__srv__TriggerSnapshot_Request *)
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_function__TriggerSnapshot_Event__request(untyped_member, index));
  const cameractrl_interfaces__srv__TriggerSnapshot_Request * value =
    (const cameractrl_interfaces__srv__TriggerSnapshot_Request *)(untyped_value);
  *item = *value;
}

bool cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__resize_function__TriggerSnapshot_Event__request(
  void * untyped_member, size_t size)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence * member =
    (cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence *)(untyped_member);
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__fini(member);
  return cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence__init(member, size);
}

size_t cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__size_function__TriggerSnapshot_Event__response(
  const void * untyped_member)
{
  const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * member =
    (const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerSnapshot_Event__response(
  const void * untyped_member, size_t index)
{
  const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * member =
    (const cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_function__TriggerSnapshot_Event__response(
  void * untyped_member, size_t index)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * member =
    (cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerSnapshot_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cameractrl_interfaces__srv__TriggerSnapshot_Response * item =
    ((const cameractrl_interfaces__srv__TriggerSnapshot_Response *)
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerSnapshot_Event__response(untyped_member, index));
  cameractrl_interfaces__srv__TriggerSnapshot_Response * value =
    (cameractrl_interfaces__srv__TriggerSnapshot_Response *)(untyped_value);
  *value = *item;
}

void cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__assign_function__TriggerSnapshot_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Response * item =
    ((cameractrl_interfaces__srv__TriggerSnapshot_Response *)
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_function__TriggerSnapshot_Event__response(untyped_member, index));
  const cameractrl_interfaces__srv__TriggerSnapshot_Response * value =
    (const cameractrl_interfaces__srv__TriggerSnapshot_Response *)(untyped_value);
  *item = *value;
}

bool cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__resize_function__TriggerSnapshot_Event__response(
  void * untyped_member, size_t size)
{
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence * member =
    (cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence *)(untyped_member);
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__fini(member);
  return cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cameractrl_interfaces__srv__TriggerSnapshot_Event, info),  // bytes offset in struct
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
    offsetof(cameractrl_interfaces__srv__TriggerSnapshot_Event, request),  // bytes offset in struct
    NULL,  // default value
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__size_function__TriggerSnapshot_Event__request,  // size() function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerSnapshot_Event__request,  // get_const(index) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_function__TriggerSnapshot_Event__request,  // get(index) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerSnapshot_Event__request,  // fetch(index, &value) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__assign_function__TriggerSnapshot_Event__request,  // assign(index, value) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__resize_function__TriggerSnapshot_Event__request  // resize(index) function pointer
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
    offsetof(cameractrl_interfaces__srv__TriggerSnapshot_Event, response),  // bytes offset in struct
    NULL,  // default value
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__size_function__TriggerSnapshot_Event__response,  // size() function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerSnapshot_Event__response,  // get_const(index) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__get_function__TriggerSnapshot_Event__response,  // get(index) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerSnapshot_Event__response,  // fetch(index, &value) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__assign_function__TriggerSnapshot_Event__response,  // assign(index, value) function pointer
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__resize_function__TriggerSnapshot_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_members = {
  "cameractrl_interfaces__srv",  // message namespace
  "TriggerSnapshot_Event",  // message name
  3,  // number of fields
  sizeof(cameractrl_interfaces__srv__TriggerSnapshot_Event),
  false,  // has_any_key_member_
  cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_member_array,  // message members
  cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_type_support_handle = {
  0,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_members,
  get_message_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cameractrl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Event)() {
  cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)();
  cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)();
  if (!cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_type_support_handle.typesupport_identifier) {
    cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cameractrl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_members = {
  "cameractrl_interfaces__srv",  // service namespace
  "TriggerSnapshot",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_type_support_handle,
  NULL,  // response message
  // cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle
  NULL  // event_message
  // cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle
};


static rosidl_service_type_support_t cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_type_support_handle = {
  0,
  &cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_members,
  get_service_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__rosidl_typesupport_introspection_c__TriggerSnapshot_Request_message_type_support_handle,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__rosidl_typesupport_introspection_c__TriggerSnapshot_Response_message_type_support_handle,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__rosidl_typesupport_introspection_c__TriggerSnapshot_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    cameractrl_interfaces,
    srv,
    TriggerSnapshot
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    cameractrl_interfaces,
    srv,
    TriggerSnapshot
  ),
  &cameractrl_interfaces__srv__TriggerSnapshot__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cameractrl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot)(void) {
  if (!cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_type_support_handle.typesupport_identifier) {
    cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Event)()->data;
  }

  return &cameractrl_interfaces__srv__detail__trigger_snapshot__rosidl_typesupport_introspection_c__TriggerSnapshot_service_type_support_handle;
}
