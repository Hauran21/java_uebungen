// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motorctrl_interfaces:srv/TurnRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/turn_robot.h"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__TURN_ROBOT__STRUCT_H_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__TURN_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurnRobot in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__TurnRobot_Request
{
  /// angle in radians
  float angle;
} motorctrl_interfaces__srv__TurnRobot_Request;

// Struct for a sequence of motorctrl_interfaces__srv__TurnRobot_Request.
typedef struct motorctrl_interfaces__srv__TurnRobot_Request__Sequence
{
  motorctrl_interfaces__srv__TurnRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__TurnRobot_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TurnRobot in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__TurnRobot_Response
{
  bool status;
} motorctrl_interfaces__srv__TurnRobot_Response;

// Struct for a sequence of motorctrl_interfaces__srv__TurnRobot_Response.
typedef struct motorctrl_interfaces__srv__TurnRobot_Response__Sequence
{
  motorctrl_interfaces__srv__TurnRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__TurnRobot_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  motorctrl_interfaces__srv__TurnRobot_Event__request__MAX_SIZE = 1
};
// response
enum
{
  motorctrl_interfaces__srv__TurnRobot_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TurnRobot in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__TurnRobot_Event
{
  service_msgs__msg__ServiceEventInfo info;
  motorctrl_interfaces__srv__TurnRobot_Request__Sequence request;
  motorctrl_interfaces__srv__TurnRobot_Response__Sequence response;
} motorctrl_interfaces__srv__TurnRobot_Event;

// Struct for a sequence of motorctrl_interfaces__srv__TurnRobot_Event.
typedef struct motorctrl_interfaces__srv__TurnRobot_Event__Sequence
{
  motorctrl_interfaces__srv__TurnRobot_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__TurnRobot_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__TURN_ROBOT__STRUCT_H_
