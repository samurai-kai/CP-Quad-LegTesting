// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/gait_pattern.h"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__STRUCT_H_
#define QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'foot1_step_position'
// Member 'foot2_step_position'
// Member 'foot3_step_position'
// Member 'foot4_step_position'
// Member 'com_position'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'predicted_states'
// Member 'predicted_phases'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GaitPattern in the package quadruped_msgs.
/**
  * Desired foot impact locations
 */
typedef struct quadruped_msgs__msg__GaitPattern
{
  /// x, y, z in meters
  geometry_msgs__msg__Vector3 foot1_step_position;
  geometry_msgs__msg__Vector3 foot2_step_position;
  geometry_msgs__msg__Vector3 foot3_step_position;
  geometry_msgs__msg__Vector3 foot4_step_position;
  /// Desired COM location
  /// x, y, z in meters
  geometry_msgs__msg__Vector3 com_position;
  /// Phases for each foot (0.0 to 1.0)
  float foot1_phase;
  float foot2_phase;
  float foot3_phase;
  float foot4_phase;
  /// States for each foot
  int32_t foot1_state;
  int32_t foot2_state;
  int32_t foot3_state;
  int32_t foot4_state;
  /// Step height parameter
  float step_height;
  /// Prediction arrays (flattened 2D arrays)
  /// Format: [foot1_stage1, foot1_stage2, ..., foot2_stage1, ..., foot4_stageN]
  rosidl_runtime_c__int32__Sequence predicted_states;
  rosidl_runtime_c__float__Sequence predicted_phases;
  /// Prediction metadata
  int32_t prediction_stages;
  float prediction_horizon;
  float prediction_timestep;
} quadruped_msgs__msg__GaitPattern;

// Struct for a sequence of quadruped_msgs__msg__GaitPattern.
typedef struct quadruped_msgs__msg__GaitPattern__Sequence
{
  quadruped_msgs__msg__GaitPattern * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadruped_msgs__msg__GaitPattern__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__STRUCT_H_
