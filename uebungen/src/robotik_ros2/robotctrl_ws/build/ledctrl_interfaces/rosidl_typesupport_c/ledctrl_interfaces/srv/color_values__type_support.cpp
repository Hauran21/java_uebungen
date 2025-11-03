// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ledctrl_interfaces:srv/ColorValues.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ledctrl_interfaces/srv/detail/color_values__struct.h"
#include "ledctrl_interfaces/srv/detail/color_values__type_support.h"
#include "ledctrl_interfaces/srv/detail/color_values__functions.h"
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

typedef struct _ColorValues_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ColorValues_Request_type_support_ids_t;

static const _ColorValues_Request_type_support_ids_t _ColorValues_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorValues_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ColorValues_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorValues_Request_type_support_symbol_names_t _ColorValues_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, ColorValues_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Request)),
  }
};

typedef struct _ColorValues_Request_type_support_data_t
{
  void * data[2];
} _ColorValues_Request_type_support_data_t;

static _ColorValues_Request_type_support_data_t _ColorValues_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorValues_Request_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_ColorValues_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ColorValues_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ColorValues_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ColorValues_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorValues_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Request__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues_Request__get_type_description,
  &ledctrl_interfaces__srv__ColorValues_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, ColorValues_Request)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::ColorValues_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__type_support.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__functions.h"
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

typedef struct _ColorValues_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ColorValues_Response_type_support_ids_t;

static const _ColorValues_Response_type_support_ids_t _ColorValues_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorValues_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ColorValues_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorValues_Response_type_support_symbol_names_t _ColorValues_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, ColorValues_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Response)),
  }
};

typedef struct _ColorValues_Response_type_support_data_t
{
  void * data[2];
} _ColorValues_Response_type_support_data_t;

static _ColorValues_Response_type_support_data_t _ColorValues_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorValues_Response_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_ColorValues_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ColorValues_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ColorValues_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ColorValues_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorValues_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Response__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues_Response__get_type_description,
  &ledctrl_interfaces__srv__ColorValues_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, ColorValues_Response)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::ColorValues_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__type_support.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__functions.h"
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

typedef struct _ColorValues_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ColorValues_Event_type_support_ids_t;

static const _ColorValues_Event_type_support_ids_t _ColorValues_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorValues_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ColorValues_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorValues_Event_type_support_symbol_names_t _ColorValues_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, ColorValues_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues_Event)),
  }
};

typedef struct _ColorValues_Event_type_support_data_t
{
  void * data[2];
} _ColorValues_Event_type_support_data_t;

static _ColorValues_Event_type_support_data_t _ColorValues_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorValues_Event_message_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_ColorValues_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ColorValues_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ColorValues_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ColorValues_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorValues_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ledctrl_interfaces__srv__ColorValues_Event__get_type_hash,
  &ledctrl_interfaces__srv__ColorValues_Event__get_type_description,
  &ledctrl_interfaces__srv__ColorValues_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, ColorValues_Event)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::ColorValues_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ledctrl_interfaces/srv/detail/color_values__type_support.h"
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
typedef struct _ColorValues_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ColorValues_type_support_ids_t;

static const _ColorValues_type_support_ids_t _ColorValues_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorValues_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ColorValues_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorValues_type_support_symbol_names_t _ColorValues_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ledctrl_interfaces, srv, ColorValues)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ledctrl_interfaces, srv, ColorValues)),
  }
};

typedef struct _ColorValues_type_support_data_t
{
  void * data[2];
} _ColorValues_type_support_data_t;

static _ColorValues_type_support_data_t _ColorValues_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorValues_service_typesupport_map = {
  2,
  "ledctrl_interfaces",
  &_ColorValues_service_typesupport_ids.typesupport_identifier[0],
  &_ColorValues_service_typesupport_symbol_names.symbol_name[0],
  &_ColorValues_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ColorValues_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorValues_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ColorValues_Request_message_type_support_handle,
  &ColorValues_Response_message_type_support_handle,
  &ColorValues_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ledctrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ledctrl_interfaces, srv, ColorValues)() {
  return &::ledctrl_interfaces::srv::rosidl_typesupport_c::ColorValues_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
