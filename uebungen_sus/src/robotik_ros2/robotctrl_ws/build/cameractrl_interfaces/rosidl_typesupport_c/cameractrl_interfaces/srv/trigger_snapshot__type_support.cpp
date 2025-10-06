// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from cameractrl_interfaces:srv/TriggerSnapshot.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.h"
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__type_support.h"
#include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cameractrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TriggerSnapshot_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerSnapshot_Request_type_support_ids_t;

static const _TriggerSnapshot_Request_type_support_ids_t _TriggerSnapshot_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerSnapshot_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerSnapshot_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerSnapshot_Request_type_support_symbol_names_t _TriggerSnapshot_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)),
  }
};

typedef struct _TriggerSnapshot_Request_type_support_data_t
{
  void * data[2];
} _TriggerSnapshot_Request_type_support_data_t;

static _TriggerSnapshot_Request_type_support_data_t _TriggerSnapshot_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerSnapshot_Request_message_typesupport_map = {
  2,
  "cameractrl_interfaces",
  &_TriggerSnapshot_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TriggerSnapshot_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TriggerSnapshot_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggerSnapshot_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerSnapshot_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cameractrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cameractrl_interfaces, srv, TriggerSnapshot_Request)() {
  return &::cameractrl_interfaces::srv::rosidl_typesupport_c::TriggerSnapshot_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__type_support.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"
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

namespace cameractrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TriggerSnapshot_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerSnapshot_Response_type_support_ids_t;

static const _TriggerSnapshot_Response_type_support_ids_t _TriggerSnapshot_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerSnapshot_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerSnapshot_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerSnapshot_Response_type_support_symbol_names_t _TriggerSnapshot_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)),
  }
};

typedef struct _TriggerSnapshot_Response_type_support_data_t
{
  void * data[2];
} _TriggerSnapshot_Response_type_support_data_t;

static _TriggerSnapshot_Response_type_support_data_t _TriggerSnapshot_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerSnapshot_Response_message_typesupport_map = {
  2,
  "cameractrl_interfaces",
  &_TriggerSnapshot_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TriggerSnapshot_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TriggerSnapshot_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggerSnapshot_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerSnapshot_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cameractrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cameractrl_interfaces, srv, TriggerSnapshot_Response)() {
  return &::cameractrl_interfaces::srv::rosidl_typesupport_c::TriggerSnapshot_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__type_support.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__functions.h"
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

namespace cameractrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TriggerSnapshot_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerSnapshot_Event_type_support_ids_t;

static const _TriggerSnapshot_Event_type_support_ids_t _TriggerSnapshot_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerSnapshot_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerSnapshot_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerSnapshot_Event_type_support_symbol_names_t _TriggerSnapshot_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cameractrl_interfaces, srv, TriggerSnapshot_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot_Event)),
  }
};

typedef struct _TriggerSnapshot_Event_type_support_data_t
{
  void * data[2];
} _TriggerSnapshot_Event_type_support_data_t;

static _TriggerSnapshot_Event_type_support_data_t _TriggerSnapshot_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerSnapshot_Event_message_typesupport_map = {
  2,
  "cameractrl_interfaces",
  &_TriggerSnapshot_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TriggerSnapshot_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TriggerSnapshot_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggerSnapshot_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerSnapshot_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__get_type_hash,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__get_type_description,
  &cameractrl_interfaces__srv__TriggerSnapshot_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cameractrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, cameractrl_interfaces, srv, TriggerSnapshot_Event)() {
  return &::cameractrl_interfaces::srv::rosidl_typesupport_c::TriggerSnapshot_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cameractrl_interfaces/srv/detail/trigger_snapshot__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace cameractrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _TriggerSnapshot_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerSnapshot_type_support_ids_t;

static const _TriggerSnapshot_type_support_ids_t _TriggerSnapshot_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerSnapshot_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerSnapshot_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerSnapshot_type_support_symbol_names_t _TriggerSnapshot_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cameractrl_interfaces, srv, TriggerSnapshot)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cameractrl_interfaces, srv, TriggerSnapshot)),
  }
};

typedef struct _TriggerSnapshot_type_support_data_t
{
  void * data[2];
} _TriggerSnapshot_type_support_data_t;

static _TriggerSnapshot_type_support_data_t _TriggerSnapshot_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerSnapshot_service_typesupport_map = {
  2,
  "cameractrl_interfaces",
  &_TriggerSnapshot_service_typesupport_ids.typesupport_identifier[0],
  &_TriggerSnapshot_service_typesupport_symbol_names.symbol_name[0],
  &_TriggerSnapshot_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TriggerSnapshot_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerSnapshot_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TriggerSnapshot_Request_message_type_support_handle,
  &TriggerSnapshot_Response_message_type_support_handle,
  &TriggerSnapshot_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cameractrl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, cameractrl_interfaces, srv, TriggerSnapshot)() {
  return &::cameractrl_interfaces::srv::rosidl_typesupport_c::TriggerSnapshot_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
