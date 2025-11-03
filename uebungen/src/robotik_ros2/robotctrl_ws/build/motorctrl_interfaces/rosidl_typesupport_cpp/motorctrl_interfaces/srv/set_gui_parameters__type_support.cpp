// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from motorctrl_interfaces:srv/SetGUIParameters.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motorctrl_interfaces/srv/detail/set_gui_parameters__functions.h"
#include "motorctrl_interfaces/srv/detail/set_gui_parameters__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGUIParameters_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGUIParameters_Request_type_support_ids_t;

static const _SetGUIParameters_Request_type_support_ids_t _SetGUIParameters_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGUIParameters_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGUIParameters_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGUIParameters_Request_type_support_symbol_names_t _SetGUIParameters_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, SetGUIParameters_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, SetGUIParameters_Request)),
  }
};

typedef struct _SetGUIParameters_Request_type_support_data_t
{
  void * data[2];
} _SetGUIParameters_Request_type_support_data_t;

static _SetGUIParameters_Request_type_support_data_t _SetGUIParameters_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGUIParameters_Request_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetGUIParameters_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetGUIParameters_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetGUIParameters_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGUIParameters_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGUIParameters_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_hash,
  &motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_description,
  &motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Request>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::SetGUIParameters_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, SetGUIParameters_Request)() {
  return get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_gui_parameters__functions.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_gui_parameters__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGUIParameters_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGUIParameters_Response_type_support_ids_t;

static const _SetGUIParameters_Response_type_support_ids_t _SetGUIParameters_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGUIParameters_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGUIParameters_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGUIParameters_Response_type_support_symbol_names_t _SetGUIParameters_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, SetGUIParameters_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, SetGUIParameters_Response)),
  }
};

typedef struct _SetGUIParameters_Response_type_support_data_t
{
  void * data[2];
} _SetGUIParameters_Response_type_support_data_t;

static _SetGUIParameters_Response_type_support_data_t _SetGUIParameters_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGUIParameters_Response_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetGUIParameters_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetGUIParameters_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetGUIParameters_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGUIParameters_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGUIParameters_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_hash,
  &motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_description,
  &motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Response>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::SetGUIParameters_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, SetGUIParameters_Response)() {
  return get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_gui_parameters__functions.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_gui_parameters__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGUIParameters_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGUIParameters_Event_type_support_ids_t;

static const _SetGUIParameters_Event_type_support_ids_t _SetGUIParameters_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGUIParameters_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGUIParameters_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGUIParameters_Event_type_support_symbol_names_t _SetGUIParameters_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, SetGUIParameters_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, SetGUIParameters_Event)),
  }
};

typedef struct _SetGUIParameters_Event_type_support_data_t
{
  void * data[2];
} _SetGUIParameters_Event_type_support_data_t;

static _SetGUIParameters_Event_type_support_data_t _SetGUIParameters_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGUIParameters_Event_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetGUIParameters_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetGUIParameters_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetGUIParameters_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetGUIParameters_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGUIParameters_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_hash,
  &motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_description,
  &motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Event>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::SetGUIParameters_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, SetGUIParameters_Event)() {
  return get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "motorctrl_interfaces/srv/detail/set_gui_parameters__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motorctrl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetGUIParameters_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetGUIParameters_type_support_ids_t;

static const _SetGUIParameters_type_support_ids_t _SetGUIParameters_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetGUIParameters_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetGUIParameters_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetGUIParameters_type_support_symbol_names_t _SetGUIParameters_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, SetGUIParameters)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, SetGUIParameters)),
  }
};

typedef struct _SetGUIParameters_type_support_data_t
{
  void * data[2];
} _SetGUIParameters_type_support_data_t;

static _SetGUIParameters_type_support_data_t _SetGUIParameters_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetGUIParameters_service_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_SetGUIParameters_service_typesupport_ids.typesupport_identifier[0],
  &_SetGUIParameters_service_typesupport_symbol_names.symbol_name[0],
  &_SetGUIParameters_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetGUIParameters_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetGUIParameters_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<motorctrl_interfaces::srv::SetGUIParameters>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<motorctrl_interfaces::srv::SetGUIParameters>,
  &motorctrl_interfaces__srv__SetGUIParameters__get_type_hash,
  &motorctrl_interfaces__srv__SetGUIParameters__get_type_description,
  &motorctrl_interfaces__srv__SetGUIParameters__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::SetGUIParameters_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, SetGUIParameters)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motorctrl_interfaces::srv::SetGUIParameters>();
}

#ifdef __cplusplus
}
#endif
