// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_states.h"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__FUNCTIONS_H_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__FUNCTIONS_H_

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
#include "quadruped_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "quadruped_msgs/msg/detail/foot_states__struct.h"

/// Initialize msg/FootStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * quadruped_msgs__msg__FootStates
 * )) before or use
 * quadruped_msgs__msg__FootStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
bool
quadruped_msgs__msg__FootStates__init(quadruped_msgs__msg__FootStates * msg);

/// Finalize msg/FootStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
void
quadruped_msgs__msg__FootStates__fini(quadruped_msgs__msg__FootStates * msg);

/// Create msg/FootStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * quadruped_msgs__msg__FootStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
quadruped_msgs__msg__FootStates *
quadruped_msgs__msg__FootStates__create(void);

/// Destroy msg/FootStates message.
/**
 * It calls
 * quadruped_msgs__msg__FootStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
void
quadruped_msgs__msg__FootStates__destroy(quadruped_msgs__msg__FootStates * msg);

/// Check for msg/FootStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
bool
quadruped_msgs__msg__FootStates__are_equal(const quadruped_msgs__msg__FootStates * lhs, const quadruped_msgs__msg__FootStates * rhs);

/// Copy a msg/FootStates message.
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
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
bool
quadruped_msgs__msg__FootStates__copy(
  const quadruped_msgs__msg__FootStates * input,
  quadruped_msgs__msg__FootStates * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_type_hash_t *
quadruped_msgs__msg__FootStates__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_runtime_c__type_description__TypeDescription *
quadruped_msgs__msg__FootStates__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_runtime_c__type_description__TypeSource *
quadruped_msgs__msg__FootStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadruped_msgs__msg__FootStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/FootStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * quadruped_msgs__msg__FootStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
bool
quadruped_msgs__msg__FootStates__Sequence__init(quadruped_msgs__msg__FootStates__Sequence * array, size_t size);

/// Finalize array of msg/FootStates messages.
/**
 * It calls
 * quadruped_msgs__msg__FootStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
void
quadruped_msgs__msg__FootStates__Sequence__fini(quadruped_msgs__msg__FootStates__Sequence * array);

/// Create array of msg/FootStates messages.
/**
 * It allocates the memory for the array and calls
 * quadruped_msgs__msg__FootStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
quadruped_msgs__msg__FootStates__Sequence *
quadruped_msgs__msg__FootStates__Sequence__create(size_t size);

/// Destroy array of msg/FootStates messages.
/**
 * It calls
 * quadruped_msgs__msg__FootStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
void
quadruped_msgs__msg__FootStates__Sequence__destroy(quadruped_msgs__msg__FootStates__Sequence * array);

/// Check for msg/FootStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
bool
quadruped_msgs__msg__FootStates__Sequence__are_equal(const quadruped_msgs__msg__FootStates__Sequence * lhs, const quadruped_msgs__msg__FootStates__Sequence * rhs);

/// Copy an array of msg/FootStates messages.
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
ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
bool
quadruped_msgs__msg__FootStates__Sequence__copy(
  const quadruped_msgs__msg__FootStates__Sequence * input,
  quadruped_msgs__msg__FootStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__FUNCTIONS_H_
