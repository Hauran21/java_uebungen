// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motorctrl_interfaces:srv/SetMotorConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/set_motor_config.h"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__STRUCT_H_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__STRUCT_H_

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

/// Struct defined in srv/SetMotorConfig in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__SetMotorConfig_Request
{
  uint8_t motor_id;
  rosidl_runtime_c__String uart_name;
  uint32_t uart_baudrate;
  uint8_t motor_id_new;
  uint32_t uart_baudrate_new;
} motorctrl_interfaces__srv__SetMotorConfig_Request;

// Struct for a sequence of motorctrl_interfaces__srv__SetMotorConfig_Request.
typedef struct motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence
{
  motorctrl_interfaces__srv__SetMotorConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMotorConfig in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__SetMotorConfig_Response
{
  bool success;
  rosidl_runtime_c__String message;
} motorctrl_interfaces__srv__SetMotorConfig_Response;

// Struct for a sequence of motorctrl_interfaces__srv__SetMotorConfig_Response.
typedef struct motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence
{
  motorctrl_interfaces__srv__SetMotorConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  motorctrl_interfaces__srv__SetMotorConfig_Event__request__MAX_SIZE = 1
};
// response
enum
{
  motorctrl_interfaces__srv__SetMotorConfig_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMotorConfig in the package motorctrl_interfaces.
typedef struct motorctrl_interfaces__srv__SetMotorConfig_Event
{
  service_msgs__msg__ServiceEventInfo info;
  motorctrl_interfaces__srv__SetMotorConfig_Request__Sequence request;
  motorctrl_interfaces__srv__SetMotorConfig_Response__Sequence response;
} motorctrl_interfaces__srv__SetMotorConfig_Event;

// Struct for a sequence of motorctrl_interfaces__srv__SetMotorConfig_Event.
typedef struct motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence
{
  motorctrl_interfaces__srv__SetMotorConfig_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motorctrl_interfaces__srv__SetMotorConfig_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__STRUCT_H_
