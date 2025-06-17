// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ledctrl_interfaces:srv/ColorValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/color_values.h"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__STRUCT_H_
#define LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ColorValues in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__ColorValues_Request
{
  uint8_t structure_needs_at_least_one_member;
} ledctrl_interfaces__srv__ColorValues_Request;

// Struct for a sequence of ledctrl_interfaces__srv__ColorValues_Request.
typedef struct ledctrl_interfaces__srv__ColorValues_Request__Sequence
{
  ledctrl_interfaces__srv__ColorValues_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__ColorValues_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'colors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ColorValues in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__ColorValues_Response
{
  /// LED-Nr. and RGBW values for each LED
  rosidl_runtime_c__uint8__Sequence colors;
  bool status;
} ledctrl_interfaces__srv__ColorValues_Response;

// Struct for a sequence of ledctrl_interfaces__srv__ColorValues_Response.
typedef struct ledctrl_interfaces__srv__ColorValues_Response__Sequence
{
  ledctrl_interfaces__srv__ColorValues_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__ColorValues_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ledctrl_interfaces__srv__ColorValues_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ledctrl_interfaces__srv__ColorValues_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ColorValues in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__ColorValues_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ledctrl_interfaces__srv__ColorValues_Request__Sequence request;
  ledctrl_interfaces__srv__ColorValues_Response__Sequence response;
} ledctrl_interfaces__srv__ColorValues_Event;

// Struct for a sequence of ledctrl_interfaces__srv__ColorValues_Event.
typedef struct ledctrl_interfaces__srv__ColorValues_Event__Sequence
{
  ledctrl_interfaces__srv__ColorValues_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__ColorValues_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__STRUCT_H_
