// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/camera_cmd.h"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__STRUCT_H_
#define LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"
// Member 'color_on'
// Member 'color_off'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CameraCmd in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__CameraCmd_Request
{
  /// turn signal, detection  indication, warn-signal,
  rosidl_runtime_c__String cmd;
  /// left, right, both
  int8_t side;
  /// RGBW values
  rosidl_runtime_c__uint8__Sequence color_on;
  /// RGBW values
  rosidl_runtime_c__uint8__Sequence color_off;
  /// duration in seconds
  float duration_on;
  /// duration in seconds
  float duration_off;
  int8_t repetitions;
} ledctrl_interfaces__srv__CameraCmd_Request;

// Struct for a sequence of ledctrl_interfaces__srv__CameraCmd_Request.
typedef struct ledctrl_interfaces__srv__CameraCmd_Request__Sequence
{
  ledctrl_interfaces__srv__CameraCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__CameraCmd_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CameraCmd in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__CameraCmd_Response
{
  bool status;
} ledctrl_interfaces__srv__CameraCmd_Response;

// Struct for a sequence of ledctrl_interfaces__srv__CameraCmd_Response.
typedef struct ledctrl_interfaces__srv__CameraCmd_Response__Sequence
{
  ledctrl_interfaces__srv__CameraCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__CameraCmd_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ledctrl_interfaces__srv__CameraCmd_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ledctrl_interfaces__srv__CameraCmd_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CameraCmd in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__CameraCmd_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ledctrl_interfaces__srv__CameraCmd_Request__Sequence request;
  ledctrl_interfaces__srv__CameraCmd_Response__Sequence response;
} ledctrl_interfaces__srv__CameraCmd_Event;

// Struct for a sequence of ledctrl_interfaces__srv__CameraCmd_Event.
typedef struct ledctrl_interfaces__srv__CameraCmd_Event__Sequence
{
  ledctrl_interfaces__srv__CameraCmd_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__CameraCmd_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__STRUCT_H_
