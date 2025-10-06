// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from motorctrl_interfaces:srv/SetMotorConfig.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motorctrl_interfaces/srv/detail/set_motor_config__struct.h"
#include "motorctrl_interfaces/srv/detail/set_motor_config__type_support.h"
#include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMotorConfig_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotorConfig_Request_type_support_ids_t;

static const _SetMotorConfig_Request_type_support_ids_t _SetMotorConfig_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotorConfig_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotorConfig_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotorConfig_Request_type_support_symbol_names_t _SetMotorConfig_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motorctrl_interfaces, srv, SetMotorConfig_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Request)),
  }
};

typedef struct _SetMotorConfig_Request_type_support_data_t
{
  void * data[2];
} _SetMotorConfig_Request_type_support_data_t;

static _SetMotorConfig_Request_type_support_data_t _SetMotorConfig_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotorConfig_Request_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetMotorConfig_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotorConfig_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotorConfig_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotorConfig_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotorConfig_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motorctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motorctrl_interfaces, srv, SetMotorConfig_Request)() {
  return &::motorctrl_interfaces::srv::rosidl_typesupport_c::SetMotorConfig_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__type_support.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"
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

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMotorConfig_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotorConfig_Response_type_support_ids_t;

static const _SetMotorConfig_Response_type_support_ids_t _SetMotorConfig_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotorConfig_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotorConfig_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotorConfig_Response_type_support_symbol_names_t _SetMotorConfig_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motorctrl_interfaces, srv, SetMotorConfig_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Response)),
  }
};

typedef struct _SetMotorConfig_Response_type_support_data_t
{
  void * data[2];
} _SetMotorConfig_Response_type_support_data_t;

static _SetMotorConfig_Response_type_support_data_t _SetMotorConfig_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotorConfig_Response_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetMotorConfig_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotorConfig_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotorConfig_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotorConfig_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotorConfig_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motorctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motorctrl_interfaces, srv, SetMotorConfig_Response)() {
  return &::motorctrl_interfaces::srv::rosidl_typesupport_c::SetMotorConfig_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__type_support.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__functions.h"
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

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMotorConfig_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotorConfig_Event_type_support_ids_t;

static const _SetMotorConfig_Event_type_support_ids_t _SetMotorConfig_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotorConfig_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotorConfig_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotorConfig_Event_type_support_symbol_names_t _SetMotorConfig_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motorctrl_interfaces, srv, SetMotorConfig_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig_Event)),
  }
};

typedef struct _SetMotorConfig_Event_type_support_data_t
{
  void * data[2];
} _SetMotorConfig_Event_type_support_data_t;

static _SetMotorConfig_Event_type_support_data_t _SetMotorConfig_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotorConfig_Event_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetMotorConfig_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotorConfig_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotorConfig_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotorConfig_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotorConfig_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__get_type_hash,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__get_type_description,
  &motorctrl_interfaces__srv__SetMotorConfig_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motorctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motorctrl_interfaces, srv, SetMotorConfig_Event)() {
  return &::motorctrl_interfaces::srv::rosidl_typesupport_c::SetMotorConfig_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_motor_config__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetMotorConfig_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotorConfig_type_support_ids_t;

static const _SetMotorConfig_type_support_ids_t _SetMotorConfig_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotorConfig_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotorConfig_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotorConfig_type_support_symbol_names_t _SetMotorConfig_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motorctrl_interfaces, srv, SetMotorConfig)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motorctrl_interfaces, srv, SetMotorConfig)),
  }
};

typedef struct _SetMotorConfig_type_support_data_t
{
  void * data[2];
} _SetMotorConfig_type_support_data_t;

static _SetMotorConfig_type_support_data_t _SetMotorConfig_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotorConfig_service_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetMotorConfig_service_typesupport_ids.typesupport_identifier[0],
  &_SetMotorConfig_service_typesupport_symbol_names.symbol_name[0],
  &_SetMotorConfig_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetMotorConfig_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotorConfig_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetMotorConfig_Request_message_type_support_handle,
  &SetMotorConfig_Response_message_type_support_handle,
  &SetMotorConfig_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motorctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, motorctrl_interfaces, srv, SetMotorConfig)() {
  return &::motorctrl_interfaces::srv::rosidl_typesupport_c::SetMotorConfig_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
