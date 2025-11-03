// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ledctrl_interfaces:srv/BacklightValue.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ledctrl_interfaces/srv/detail/backlight_value__struct.h"
#include "ledctrl_interfaces/srv/detail/backlight_value__type_support.h"
#include "ledctrl_interfaces/srv/detail/backlight_value__functions.h"
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

typedef struct _BacklightValue_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BacklightValue_Request_type_support_ids_t;

static const _BacklightValue_Request_type_support_ids_t _BacklightValue_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BacklightValue_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BacklightValue_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BacklightValue_Request_type_support_symbol_names_t _BacklightValue_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, BacklightValue_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, BacklightValue_Request)),
  }
};

typedef struct _BacklightValue_Request_type_support_data_t
{
  void * data[2];
} _BacklightValue_Request_type_support_data_t;

static _BacklightValue_Request_type_support_data_t _BacklightValue_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BacklightValue_Request_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_BacklightValue_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BacklightValue_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BacklightValue_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BacklightValue_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BacklightValue_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__BacklightValue_Request__get_type_hash,
  &ledctrl_interfaces__srv__BacklightValue_Request__get_type_description,
  &ledctrl_interfaces__srv__BacklightValue_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, BacklightValue_Request)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::BacklightValue_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__type_support.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__functions.h"
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

typedef struct _BacklightValue_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BacklightValue_Response_type_support_ids_t;

static const _BacklightValue_Response_type_support_ids_t _BacklightValue_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BacklightValue_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BacklightValue_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BacklightValue_Response_type_support_symbol_names_t _BacklightValue_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, BacklightValue_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, BacklightValue_Response)),
  }
};

typedef struct _BacklightValue_Response_type_support_data_t
{
  void * data[2];
} _BacklightValue_Response_type_support_data_t;

static _BacklightValue_Response_type_support_data_t _BacklightValue_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BacklightValue_Response_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_BacklightValue_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BacklightValue_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BacklightValue_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BacklightValue_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BacklightValue_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__BacklightValue_Response__get_type_hash,
  &ledctrl_interfaces__srv__BacklightValue_Response__get_type_description,
  &ledctrl_interfaces__srv__BacklightValue_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, BacklightValue_Response)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::BacklightValue_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__type_support.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__functions.h"
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

typedef struct _BacklightValue_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BacklightValue_Event_type_support_ids_t;

static const _BacklightValue_Event_type_support_ids_t _BacklightValue_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BacklightValue_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BacklightValue_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BacklightValue_Event_type_support_symbol_names_t _BacklightValue_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, BacklightValue_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, BacklightValue_Event)),
  }
};

typedef struct _BacklightValue_Event_type_support_data_t
{
  void * data[2];
} _BacklightValue_Event_type_support_data_t;

static _BacklightValue_Event_type_support_data_t _BacklightValue_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BacklightValue_Event_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_BacklightValue_Event_message_typesupport_ids.typesupport_identifier[0],
  &_BacklightValue_Event_message_typesupport_symbol_names.symbol_name[0],
  &_BacklightValue_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BacklightValue_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BacklightValue_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__BacklightValue_Event__get_type_hash,
  &ledctrl_interfaces__srv__BacklightValue_Event__get_type_description,
  &ledctrl_interfaces__srv__BacklightValue_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, BacklightValue_Event)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::BacklightValue_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/backlight_value__type_support.h"
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
typedef struct _BacklightValue_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BacklightValue_type_support_ids_t;

static const _BacklightValue_type_support_ids_t _BacklightValue_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BacklightValue_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BacklightValue_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BacklightValue_type_support_symbol_names_t _BacklightValue_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, BacklightValue)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, BacklightValue)),
  }
};

typedef struct _BacklightValue_type_support_data_t
{
  void * data[2];
} _BacklightValue_type_support_data_t;

static _BacklightValue_type_support_data_t _BacklightValue_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BacklightValue_service_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_BacklightValue_service_typesupport_ids.typesupport_identifier[0],
  &_BacklightValue_service_typesupport_symbol_names.symbol_name[0],
  &_BacklightValue_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BacklightValue_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BacklightValue_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &BacklightValue_Request_message_type_support_handle,
  &BacklightValue_Response_message_type_support_handle,
  &BacklightValue_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ledctrl_interfaces,
    srv,
    BacklightValue
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ledctrl_interfaces,
    srv,
    BacklightValue
  ),
  &ledctrl_interfaces__srv__BacklightValue__get_type_hash,
  &ledctrl_interfaces__srv__BacklightValue__get_type_description,
  &ledctrl_interfaces__srv__BacklightValue__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, BacklightValue)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::BacklightValue_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
