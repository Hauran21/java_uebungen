// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/camera_cmd.h"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__FUNCTIONS_H_
#define LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "ledctrl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ledctrl_interfaces/srv/detail/camera_cmd__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/CameraCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ledctrl_interfaces__srv__CameraCmd_Request
 * )) before or use
 * ledctrl_interfaces__srv__CameraCmd_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Request__init(ledctrl_interfaces__srv__CameraCmd_Request * msg);

/// Finalize srv/CameraCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Request__fini(ledctrl_interfaces__srv__CameraCmd_Request * msg);

/// Create srv/CameraCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ledctrl_interfaces__srv__CameraCmd_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
ledctrl_interfaces__srv__CameraCmd_Request *
ledctrl_interfaces__srv__CameraCmd_Request__create(void);

/// Destroy srv/CameraCmd message.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Request__destroy(ledctrl_interfaces__srv__CameraCmd_Request * msg);

/// Check for srv/CameraCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Request__are_equal(const ledctrl_interfaces__srv__CameraCmd_Request * lhs, const ledctrl_interfaces__srv__CameraCmd_Request * rhs);

/// Copy a srv/CameraCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Request__copy(
  const ledctrl_interfaces__srv__CameraCmd_Request * input,
  ledctrl_interfaces__srv__CameraCmd_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/CameraCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * ledctrl_interfaces__srv__CameraCmd_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__init(ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array, size_t size);

/// Finalize array of srv/CameraCmd messages.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__fini(ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array);

/// Create array of srv/CameraCmd messages.
/**
 * It allocates the memory for the array and calls
 * ledctrl_interfaces__srv__CameraCmd_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
ledctrl_interfaces__srv__CameraCmd_Request__Sequence *
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__create(size_t size);

/// Destroy array of srv/CameraCmd messages.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__destroy(ledctrl_interfaces__srv__CameraCmd_Request__Sequence * array);

/// Check for srv/CameraCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__are_equal(const ledctrl_interfaces__srv__CameraCmd_Request__Sequence * lhs, const ledctrl_interfaces__srv__CameraCmd_Request__Sequence * rhs);

/// Copy an array of srv/CameraCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Request__Sequence__copy(
  const ledctrl_interfaces__srv__CameraCmd_Request__Sequence * input,
  ledctrl_interfaces__srv__CameraCmd_Request__Sequence * output);

/// Initialize srv/CameraCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ledctrl_interfaces__srv__CameraCmd_Response
 * )) before or use
 * ledctrl_interfaces__srv__CameraCmd_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Response__init(ledctrl_interfaces__srv__CameraCmd_Response * msg);

/// Finalize srv/CameraCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Response__fini(ledctrl_interfaces__srv__CameraCmd_Response * msg);

/// Create srv/CameraCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ledctrl_interfaces__srv__CameraCmd_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
ledctrl_interfaces__srv__CameraCmd_Response *
ledctrl_interfaces__srv__CameraCmd_Response__create(void);

/// Destroy srv/CameraCmd message.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Response__destroy(ledctrl_interfaces__srv__CameraCmd_Response * msg);

/// Check for srv/CameraCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Response__are_equal(const ledctrl_interfaces__srv__CameraCmd_Response * lhs, const ledctrl_interfaces__srv__CameraCmd_Response * rhs);

/// Copy a srv/CameraCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Response__copy(
  const ledctrl_interfaces__srv__CameraCmd_Response * input,
  ledctrl_interfaces__srv__CameraCmd_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/CameraCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * ledctrl_interfaces__srv__CameraCmd_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__init(ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array, size_t size);

/// Finalize array of srv/CameraCmd messages.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__fini(ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array);

/// Create array of srv/CameraCmd messages.
/**
 * It allocates the memory for the array and calls
 * ledctrl_interfaces__srv__CameraCmd_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
ledctrl_interfaces__srv__CameraCmd_Response__Sequence *
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__create(size_t size);

/// Destroy array of srv/CameraCmd messages.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__destroy(ledctrl_interfaces__srv__CameraCmd_Response__Sequence * array);

/// Check for srv/CameraCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__are_equal(const ledctrl_interfaces__srv__CameraCmd_Response__Sequence * lhs, const ledctrl_interfaces__srv__CameraCmd_Response__Sequence * rhs);

/// Copy an array of srv/CameraCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Response__Sequence__copy(
  const ledctrl_interfaces__srv__CameraCmd_Response__Sequence * input,
  ledctrl_interfaces__srv__CameraCmd_Response__Sequence * output);

/// Initialize srv/CameraCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ledctrl_interfaces__srv__CameraCmd_Event
 * )) before or use
 * ledctrl_interfaces__srv__CameraCmd_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Event__init(ledctrl_interfaces__srv__CameraCmd_Event * msg);

/// Finalize srv/CameraCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Event__fini(ledctrl_interfaces__srv__CameraCmd_Event * msg);

/// Create srv/CameraCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ledctrl_interfaces__srv__CameraCmd_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
ledctrl_interfaces__srv__CameraCmd_Event *
ledctrl_interfaces__srv__CameraCmd_Event__create(void);

/// Destroy srv/CameraCmd message.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Event__destroy(ledctrl_interfaces__srv__CameraCmd_Event * msg);

/// Check for srv/CameraCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Event__are_equal(const ledctrl_interfaces__srv__CameraCmd_Event * lhs, const ledctrl_interfaces__srv__CameraCmd_Event * rhs);

/// Copy a srv/CameraCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Event__copy(
  const ledctrl_interfaces__srv__CameraCmd_Event * input,
  ledctrl_interfaces__srv__CameraCmd_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/CameraCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * ledctrl_interfaces__srv__CameraCmd_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__init(ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array, size_t size);

/// Finalize array of srv/CameraCmd messages.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__fini(ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array);

/// Create array of srv/CameraCmd messages.
/**
 * It allocates the memory for the array and calls
 * ledctrl_interfaces__srv__CameraCmd_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
ledctrl_interfaces__srv__CameraCmd_Event__Sequence *
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__create(size_t size);

/// Destroy array of srv/CameraCmd messages.
/**
 * It calls
 * ledctrl_interfaces__srv__CameraCmd_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
void
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__destroy(ledctrl_interfaces__srv__CameraCmd_Event__Sequence * array);

/// Check for srv/CameraCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__are_equal(const ledctrl_interfaces__srv__CameraCmd_Event__Sequence * lhs, const ledctrl_interfaces__srv__CameraCmd_Event__Sequence * rhs);

/// Copy an array of srv/CameraCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
bool
ledctrl_interfaces__srv__CameraCmd_Event__Sequence__copy(
  const ledctrl_interfaces__srv__CameraCmd_Event__Sequence * input,
  ledctrl_interfaces__srv__CameraCmd_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__FUNCTIONS_H_
