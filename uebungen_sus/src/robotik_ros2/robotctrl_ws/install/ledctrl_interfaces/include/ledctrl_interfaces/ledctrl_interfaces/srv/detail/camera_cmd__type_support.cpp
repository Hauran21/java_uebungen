// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
#include "ledctrl_interfaces/srv/detail/camera_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraCmd_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ledctrl_interfaces::srv::CameraCmd_Request(_init);
}

void CameraCmd_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ledctrl_interfaces::srv::CameraCmd_Request *>(message_memory);
  typed_message->~CameraCmd_Request();
}

size_t size_function__CameraCmd_Request__color_on(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraCmd_Request__color_on(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraCmd_Request__color_on(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraCmd_Request__color_on(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__CameraCmd_Request__color_on(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__CameraCmd_Request__color_on(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__CameraCmd_Request__color_on(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__CameraCmd_Request__color_on(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CameraCmd_Request__color_off(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraCmd_Request__color_off(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraCmd_Request__color_off(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraCmd_Request__color_off(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__CameraCmd_Request__color_off(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__CameraCmd_Request__color_off(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__CameraCmd_Request__color_off(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__CameraCmd_Request__color_off(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraCmd_Request_message_member_array[7] = {
  {
    "cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "side",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, side),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "color_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, color_on),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraCmd_Request__color_on,  // size() function pointer
    get_const_function__CameraCmd_Request__color_on,  // get_const(index) function pointer
    get_function__CameraCmd_Request__color_on,  // get(index) function pointer
    fetch_function__CameraCmd_Request__color_on,  // fetch(index, &value) function pointer
    assign_function__CameraCmd_Request__color_on,  // assign(index, value) function pointer
    resize_function__CameraCmd_Request__color_on  // resize(index) function pointer
  },
  {
    "color_off",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, color_off),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraCmd_Request__color_off,  // size() function pointer
    get_const_function__CameraCmd_Request__color_off,  // get_const(index) function pointer
    get_function__CameraCmd_Request__color_off,  // get(index) function pointer
    fetch_function__CameraCmd_Request__color_off,  // fetch(index, &value) function pointer
    assign_function__CameraCmd_Request__color_off,  // assign(index, value) function pointer
    resize_function__CameraCmd_Request__color_off  // resize(index) function pointer
  },
  {
    "duration_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, duration_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration_off",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, duration_off),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "repetitions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Request, repetitions),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraCmd_Request_message_members = {
  "ledctrl_interfaces::srv",  // message namespace
  "CameraCmd_Request",  // message name
  7,  // number of fields
  sizeof(ledctrl_interfaces::srv::CameraCmd_Request),
  false,  // has_any_key_member_
  CameraCmd_Request_message_member_array,  // message members
  CameraCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraCmd_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraCmd_Request_message_members,
  get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__CameraCmd_Request__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd_Request__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ledctrl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Request>()
{
  return &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ledctrl_interfaces, srv, CameraCmd_Request)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraCmd_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ledctrl_interfaces::srv::CameraCmd_Response(_init);
}

void CameraCmd_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ledctrl_interfaces::srv::CameraCmd_Response *>(message_memory);
  typed_message->~CameraCmd_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraCmd_Response_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraCmd_Response_message_members = {
  "ledctrl_interfaces::srv",  // message namespace
  "CameraCmd_Response",  // message name
  1,  // number of fields
  sizeof(ledctrl_interfaces::srv::CameraCmd_Response),
  false,  // has_any_key_member_
  CameraCmd_Response_message_member_array,  // message members
  CameraCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraCmd_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraCmd_Response_message_members,
  get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__CameraCmd_Response__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd_Response__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ledctrl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Response>()
{
  return &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ledctrl_interfaces, srv, CameraCmd_Response)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraCmd_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ledctrl_interfaces::srv::CameraCmd_Event(_init);
}

void CameraCmd_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ledctrl_interfaces::srv::CameraCmd_Event *>(message_memory);
  typed_message->~CameraCmd_Event();
}

size_t size_function__CameraCmd_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ledctrl_interfaces::srv::CameraCmd_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraCmd_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ledctrl_interfaces::srv::CameraCmd_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraCmd_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ledctrl_interfaces::srv::CameraCmd_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraCmd_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ledctrl_interfaces::srv::CameraCmd_Request *>(
    get_const_function__CameraCmd_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ledctrl_interfaces::srv::CameraCmd_Request *>(untyped_value);
  value = item;
}

void assign_function__CameraCmd_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ledctrl_interfaces::srv::CameraCmd_Request *>(
    get_function__CameraCmd_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ledctrl_interfaces::srv::CameraCmd_Request *>(untyped_value);
  item = value;
}

void resize_function__CameraCmd_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ledctrl_interfaces::srv::CameraCmd_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CameraCmd_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ledctrl_interfaces::srv::CameraCmd_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraCmd_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ledctrl_interfaces::srv::CameraCmd_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraCmd_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ledctrl_interfaces::srv::CameraCmd_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraCmd_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ledctrl_interfaces::srv::CameraCmd_Response *>(
    get_const_function__CameraCmd_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ledctrl_interfaces::srv::CameraCmd_Response *>(untyped_value);
  value = item;
}

void assign_function__CameraCmd_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ledctrl_interfaces::srv::CameraCmd_Response *>(
    get_function__CameraCmd_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ledctrl_interfaces::srv::CameraCmd_Response *>(untyped_value);
  item = value;
}

void resize_function__CameraCmd_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ledctrl_interfaces::srv::CameraCmd_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraCmd_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraCmd_Event__request,  // size() function pointer
    get_const_function__CameraCmd_Event__request,  // get_const(index) function pointer
    get_function__CameraCmd_Event__request,  // get(index) function pointer
    fetch_function__CameraCmd_Event__request,  // fetch(index, &value) function pointer
    assign_function__CameraCmd_Event__request,  // assign(index, value) function pointer
    resize_function__CameraCmd_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ledctrl_interfaces::srv::CameraCmd_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraCmd_Event__response,  // size() function pointer
    get_const_function__CameraCmd_Event__response,  // get_const(index) function pointer
    get_function__CameraCmd_Event__response,  // get(index) function pointer
    fetch_function__CameraCmd_Event__response,  // fetch(index, &value) function pointer
    assign_function__CameraCmd_Event__response,  // assign(index, value) function pointer
    resize_function__CameraCmd_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraCmd_Event_message_members = {
  "ledctrl_interfaces::srv",  // message namespace
  "CameraCmd_Event",  // message name
  3,  // number of fields
  sizeof(ledctrl_interfaces::srv::CameraCmd_Event),
  false,  // has_any_key_member_
  CameraCmd_Event_message_member_array,  // message members
  CameraCmd_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraCmd_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraCmd_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraCmd_Event_message_members,
  get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__CameraCmd_Event__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd_Event__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ledctrl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Event>()
{
  return &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ledctrl_interfaces, srv, CameraCmd_Event)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CameraCmd_service_members = {
  "ledctrl_interfaces::srv",  // service namespace
  "CameraCmd",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<ledctrl_interfaces::srv::CameraCmd>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t CameraCmd_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraCmd_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ledctrl_interfaces::srv::CameraCmd_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ledctrl_interfaces::srv::CameraCmd>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ledctrl_interfaces::srv::CameraCmd>,
  &ledctrl_interfaces__srv__CameraCmd__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ledctrl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ledctrl_interfaces::srv::CameraCmd>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ledctrl_interfaces::srv::rosidl_typesupport_introspection_cpp::CameraCmd_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ledctrl_interfaces::srv::CameraCmd_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ledctrl_interfaces::srv::CameraCmd_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ledctrl_interfaces::srv::CameraCmd_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ledctrl_interfaces, srv, CameraCmd)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ledctrl_interfaces::srv::CameraCmd>();
}

#ifdef __cplusplus
}
#endif
