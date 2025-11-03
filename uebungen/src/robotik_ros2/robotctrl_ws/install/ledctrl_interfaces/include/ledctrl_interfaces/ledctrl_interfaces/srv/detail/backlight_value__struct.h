// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ledctrl_interfaces:srv/BacklightValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/backlight_value.h"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__STRUCT_H_
#define LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/BacklightValue in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__BacklightValue_Request
{
  int8_t side;
  uint8_t brightness_percent;
} ledctrl_interfaces__srv__BacklightValue_Request;

// Struct for a sequence of ledctrl_interfaces__srv__BacklightValue_Request.
typedef struct ledctrl_interfaces__srv__BacklightValue_Request__Sequence
{
  ledctrl_interfaces__srv__BacklightValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__BacklightValue_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/BacklightValue in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__BacklightValue_Response
{
  bool status;
} ledctrl_interfaces__srv__BacklightValue_Response;

// Struct for a sequence of ledctrl_interfaces__srv__BacklightValue_Response.
typedef struct ledctrl_interfaces__srv__BacklightValue_Response__Sequence
{
  ledctrl_interfaces__srv__BacklightValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__BacklightValue_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ledctrl_interfaces__srv__BacklightValue_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ledctrl_interfaces__srv__BacklightValue_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/BacklightValue in the package ledctrl_interfaces.
typedef struct ledctrl_interfaces__srv__BacklightValue_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ledctrl_interfaces__srv__BacklightValue_Request__Sequence request;
  ledctrl_interfaces__srv__BacklightValue_Response__Sequence response;
} ledctrl_interfaces__srv__BacklightValue_Event;

// Struct for a sequence of ledctrl_interfaces__srv__BacklightValue_Event.
typedef struct ledctrl_interfaces__srv__BacklightValue_Event__Sequence
{
  ledctrl_interfaces__srv__BacklightValue_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ledctrl_interfaces__srv__BacklightValue_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__STRUCT_H_
