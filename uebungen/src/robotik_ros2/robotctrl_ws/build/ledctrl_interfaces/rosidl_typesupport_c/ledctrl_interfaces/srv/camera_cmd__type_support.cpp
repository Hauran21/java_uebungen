// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ledctrl_interfaces/srv/detail/camera_cmd__struct.h"
#include "ledctrl_interfaces/srv/detail/camera_cmd__type_support.h"
#include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CameraCmd_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraCmd_Request_type_support_ids_t;

static const _CameraCmd_Request_type_support_ids_t _CameraCmd_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CameraCmd_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraCmd_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraCmd_Request_type_support_symbol_names_t _CameraCmd_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, CameraCmd_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, CameraCmd_Request)),
  }
};

typedef struct _CameraCmd_Request_type_support_data_t
{
  void * data[2];
} _CameraCmd_Request_type_support_data_t;

static _CameraCmd_Request_type_support_data_t _CameraCmd_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraCmd_Request_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_CameraCmd_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CameraCmd_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CameraCmd_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraCmd_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraCmd_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__CameraCmd_Request__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd_Request__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, CameraCmd_Request)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::CameraCmd_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__type_support.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CameraCmd_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraCmd_Response_type_support_ids_t;

static const _CameraCmd_Response_type_support_ids_t _CameraCmd_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CameraCmd_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraCmd_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraCmd_Response_type_support_symbol_names_t _CameraCmd_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, CameraCmd_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, CameraCmd_Response)),
  }
};

typedef struct _CameraCmd_Response_type_support_data_t
{
  void * data[2];
} _CameraCmd_Response_type_support_data_t;

static _CameraCmd_Response_type_support_data_t _CameraCmd_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraCmd_Response_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_CameraCmd_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CameraCmd_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CameraCmd_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraCmd_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraCmd_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__CameraCmd_Response__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd_Response__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, CameraCmd_Response)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::CameraCmd_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__type_support.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CameraCmd_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraCmd_Event_type_support_ids_t;

static const _CameraCmd_Event_type_support_ids_t _CameraCmd_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CameraCmd_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraCmd_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraCmd_Event_type_support_symbol_names_t _CameraCmd_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, CameraCmd_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, CameraCmd_Event)),
  }
};

typedef struct _CameraCmd_Event_type_support_data_t
{
  void * data[2];
} _CameraCmd_Event_type_support_data_t;

static _CameraCmd_Event_type_support_data_t _CameraCmd_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraCmd_Event_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_CameraCmd_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CameraCmd_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CameraCmd_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraCmd_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraCmd_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__CameraCmd_Event__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd_Event__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, CameraCmd_Event)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::CameraCmd_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/camera_cmd__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ledctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CameraCmd_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraCmd_type_support_ids_t;

static const _CameraCmd_type_support_ids_t _CameraCmd_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CameraCmd_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraCmd_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraCmd_type_support_symbol_names_t _CameraCmd_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, CameraCmd)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, CameraCmd)),
  }
};

typedef struct _CameraCmd_type_support_data_t
{
  void * data[2];
} _CameraCmd_type_support_data_t;

static _CameraCmd_type_support_data_t _CameraCmd_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraCmd_service_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_CameraCmd_service_typesupport_ids.typesupport_identifier[0],
  &_CameraCmd_service_typesupport_symbol_names.symbol_name[0],
  &_CameraCmd_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CameraCmd_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraCmd_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CameraCmd_Request_message_type_support_handle,
  &CameraCmd_Response_message_type_support_handle,
  &CameraCmd_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ledctrl_interfaces,
    srv,
    CameraCmd
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ledctrl_interfaces,
    srv,
    CameraCmd
  ),
  &ledctrl_interfaces__srv__CameraCmd__get_type_hash,
  &ledctrl_interfaces__srv__CameraCmd__get_type_description,
  &ledctrl_interfaces__srv__CameraCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, CameraCmd)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::CameraCmd_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
