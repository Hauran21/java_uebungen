// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motorctrl_interfaces:srv/SetGUIParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/set_gui_parameters.h"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SET_GUI_PARAMETERS__STRUCT_H_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SET_GUI_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uart_name'
#include "rosidl_runtime_c/string.h"
// Member 'motor_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetGUIParameters in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__SetGUIParameters_Request
{
  rosidl_runtime_c__String uart_name;
  uint32_t uart_baudrate;
  rosidl_runtime_c__uint8__Sequence motor_ids;
  float wheel_radius;
  float wheel_separation;
} motorctrl_interfaces__srv__SetGUIParameters_Request;

// Struct for a sequence of motorctrl_interfaces__srv__SetGUIParameters_Request.
typedef struct motorctrl_interfaces__srv__SetGUIParameters_Request__Sequence
{
  motorctrl_interfaces__srv__SetGUIParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__SetGUIParameters_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetGUIParameters in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__SetGUIParameters_Response
{
  bool status;
} motorctrl_interfaces__srv__SetGUIParameters_Response;

// Struct for a sequence of motorctrl_interfaces__srv__SetGUIParameters_Response.
typedef struct motorctrl_interfaces__srv__SetGUIParameters_Response__Sequence
{
  motorctrl_interfaces__srv__SetGUIParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__SetGUIParameters_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  motorctrl_interfaces__srv__SetGUIParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  motorctrl_interfaces__srv__SetGUIParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGUIParameters in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__SetGUIParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  motorctrl_interfaces__srv__SetGUIParameters_Request__Sequence request;
  motorctrl_interfaces__srv__SetGUIParameters_Response__Sequence response;
} motorctrl_interfaces__srv__SetGUIParameters_Event;

// Struct for a sequence of motorctrl_interfaces__srv__SetGUIParameters_Event.
typedef struct motorctrl_interfaces__srv__SetGUIParameters_Event__Sequence
{
  motorctrl_interfaces__srv__SetGUIParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__SetGUIParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SET_GUI_PARAMETERS__STRUCT_H_
