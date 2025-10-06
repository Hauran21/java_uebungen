// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from motorctrl_interfaces:srv/TurnRobot.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motorctrl_interfaces/srv/detail/turn_robot__functions.h"
#include "motorctrl_interfaces/srv/detail/turn_robot__struct.hpp"
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

typedef struct _TurnRobot_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnRobot_Request_type_support_ids_t;

static const _TurnRobot_Request_type_support_ids_t _TurnRobot_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnRobot_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnRobot_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnRobot_Request_type_support_symbol_names_t _TurnRobot_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, TurnRobot_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, TurnRobot_Request)),
  }
};

typedef struct _TurnRobot_Request_type_support_data_t
{
  void * data[2];
} _TurnRobot_Request_type_support_data_t;

static _TurnRobot_Request_type_support_data_t _TurnRobot_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnRobot_Request_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_TurnRobot_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TurnRobot_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TurnRobot_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnRobot_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnRobot_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__TurnRobot_Request__get_type_hash,
  &motorctrl_interfaces__srv__TurnRobot_Request__get_type_description,
  &motorctrl_interfaces__srv__TurnRobot_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Request>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::TurnRobot_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, TurnRobot_Request)() {
  return get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Request>();
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
// #include "motorctrl_interfaces/srv/detail/turn_robot__functions.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/turn_robot__struct.hpp"
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

typedef struct _TurnRobot_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnRobot_Response_type_support_ids_t;

static const _TurnRobot_Response_type_support_ids_t _TurnRobot_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnRobot_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnRobot_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnRobot_Response_type_support_symbol_names_t _TurnRobot_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, TurnRobot_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, TurnRobot_Response)),
  }
};

typedef struct _TurnRobot_Response_type_support_data_t
{
  void * data[2];
} _TurnRobot_Response_type_support_data_t;

static _TurnRobot_Response_type_support_data_t _TurnRobot_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnRobot_Response_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_TurnRobot_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TurnRobot_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TurnRobot_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnRobot_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnRobot_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__TurnRobot_Response__get_type_hash,
  &motorctrl_interfaces__srv__TurnRobot_Response__get_type_description,
  &motorctrl_interfaces__srv__TurnRobot_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Response>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::TurnRobot_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, TurnRobot_Response)() {
  return get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Response>();
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
// #include "motorctrl_interfaces/srv/detail/turn_robot__functions.h"
// already included above
// #include "motorctrl_interfaces/srv/detail/turn_robot__struct.hpp"
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

typedef struct _TurnRobot_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnRobot_Event_type_support_ids_t;

static const _TurnRobot_Event_type_support_ids_t _TurnRobot_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnRobot_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnRobot_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnRobot_Event_type_support_symbol_names_t _TurnRobot_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, TurnRobot_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, TurnRobot_Event)),
  }
};

typedef struct _TurnRobot_Event_type_support_data_t
{
  void * data[2];
} _TurnRobot_Event_type_support_data_t;

static _TurnRobot_Event_type_support_data_t _TurnRobot_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnRobot_Event_message_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_TurnRobot_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TurnRobot_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TurnRobot_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurnRobot_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnRobot_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motorctrl_interfaces__srv__TurnRobot_Event__get_type_hash,
  &motorctrl_interfaces__srv__TurnRobot_Event__get_type_description,
  &motorctrl_interfaces__srv__TurnRobot_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Event>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::TurnRobot_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, TurnRobot_Event)() {
  return get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Event>();
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
// #include "motorctrl_interfaces/srv/detail/turn_robot__struct.hpp"
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

typedef struct _TurnRobot_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurnRobot_type_support_ids_t;

static const _TurnRobot_type_support_ids_t _TurnRobot_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TurnRobot_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurnRobot_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurnRobot_type_support_symbol_names_t _TurnRobot_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motorctrl_interfaces, srv, TurnRobot)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motorctrl_interfaces, srv, TurnRobot)),
  }
};

typedef struct _TurnRobot_type_support_data_t
{
  void * data[2];
} _TurnRobot_type_support_data_t;

static _TurnRobot_type_support_data_t _TurnRobot_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurnRobot_service_typesupport_map = {
  2,
  "motorctrl_interfaces",
  &_TurnRobot_service_typesupport_ids.typesupport_identifier[0],
  &_TurnRobot_service_typesupport_symbol_names.symbol_name[0],
  &_TurnRobot_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TurnRobot_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurnRobot_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motorctrl_interfaces::srv::TurnRobot_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<motorctrl_interfaces::srv::TurnRobot>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<motorctrl_interfaces::srv::TurnRobot>,
  &motorctrl_interfaces__srv__TurnRobot__get_type_hash,
  &motorctrl_interfaces__srv__TurnRobot__get_type_description,
  &motorctrl_interfaces__srv__TurnRobot__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motorctrl_interfaces::srv::TurnRobot>()
{
  return &::motorctrl_interfaces::srv::rosidl_typesupport_cpp::TurnRobot_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motorctrl_interfaces, srv, TurnRobot)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motorctrl_interfaces::srv::TurnRobot>();
}

#ifdef __cplusplus
}
#endif
