// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_states.h"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_H_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/FootStates in the package quadruped_msgs.
/**
  * States for each foot (0 = Stance, 1 = Swing)
 */
typedef struct quadruped_msgs__msg__FootStates
{
  int16_t foot1_state;
  int16_t foot2_state;
  int16_t foot3_state;
  int16_t foot4_state;
} quadruped_msgs__msg__FootStates;

// Struct for a sequence of quadruped_msgs__msg__FootStates.
typedef struct quadruped_msgs__msg__FootStates__Sequence
{
  quadruped_msgs__msg__FootStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadruped_msgs__msg__FootStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_H_
