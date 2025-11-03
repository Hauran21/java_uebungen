// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cameractrl_interfaces:srv/TriggerSnapshot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cameractrl_interfaces/srv/trigger_snapshot.h"


#ifndef CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__STRUCT_H_
#define CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TriggerSnapshot in the package cameractrl_interfaces.
typedef struct cameractrl_interfaces__srv__TriggerSnapshot_Request
{
  /// frame rate in Hz -1 single shot
  float fr;
} cameractrl_interfaces__srv__TriggerSnapshot_Request;

// Struct for a sequence of cameractrl_interfaces__srv__TriggerSnapshot_Request.
typedef struct cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence
{
  cameractrl_interfaces__srv__TriggerSnapshot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TriggerSnapshot in the package cameractrl_interfaces.
typedef struct cameractrl_interfaces__srv__TriggerSnapshot_Response
{
  bool success;
} cameractrl_interfaces__srv__TriggerSnapshot_Response;

// Struct for a sequence of cameractrl_interfaces__srv__TriggerSnapshot_Response.
typedef struct cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence
{
  cameractrl_interfaces__srv__TriggerSnapshot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cameractrl_interfaces__srv__TriggerSnapshot_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cameractrl_interfaces__srv__TriggerSnapshot_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TriggerSnapshot in the package cameractrl_interfaces.
typedef struct cameractrl_interfaces__srv__TriggerSnapshot_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cameractrl_interfaces__srv__TriggerSnapshot_Request__Sequence request;
  cameractrl_interfaces__srv__TriggerSnapshot_Response__Sequence response;
} cameractrl_interfaces__srv__TriggerSnapshot_Event;

// Struct for a sequence of cameractrl_interfaces__srv__TriggerSnapshot_Event.
typedef struct cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence
{
  cameractrl_interfaces__srv__TriggerSnapshot_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cameractrl_interfaces__srv__TriggerSnapshot_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__STRUCT_H_
