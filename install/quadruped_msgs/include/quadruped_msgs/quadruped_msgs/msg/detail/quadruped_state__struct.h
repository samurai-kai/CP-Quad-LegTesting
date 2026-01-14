// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/quadruped_state.h"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__STRUCT_H_
#define QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'p1'
// Member 'p2'
// Member 'p3'
// Member 'p4'
// Member 'pc'
// Member 'h1'
// Member 'h2'
// Member 'h3'
// Member 'h4'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'v1'
// Member 'v2'
// Member 'v3'
// Member 'v4'
// Member 'angular_velocity'
// Member 'com_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'joint_positions'
// Member 'joint_velocities'
// Member 'joint_efforts'
// Member 'j1'
// Member 'j2'
// Member 'j3'
// Member 'j4'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/QuadrupedState in the package quadruped_msgs.
/**
  * Foot positions in cartesian coordinates
 */
typedef struct quadruped_msgs__msg__QuadrupedState
{
  /// Front left foot position
  geometry_msgs__msg__Point p1;
  /// Front right foot position
  geometry_msgs__msg__Point p2;
  /// Rear left foot position
  geometry_msgs__msg__Point p3;
  /// Rear right foot position
  geometry_msgs__msg__Point p4;
  /// Center of mass position
  geometry_msgs__msg__Point pc;
  /// Foot velocities
  /// Front left foot velocity
  geometry_msgs__msg__Vector3 v1;
  /// Front right foot velocity
  geometry_msgs__msg__Vector3 v2;
  /// Rear left foot velocity
  geometry_msgs__msg__Vector3 v3;
  /// Rear right foot velocity
  geometry_msgs__msg__Vector3 v4;
  /// Hip position 1
  geometry_msgs__msg__Point h1;
  /// Hip position 2
  geometry_msgs__msg__Point h2;
  /// Hip position 3
  geometry_msgs__msg__Point h3;
  /// Hip position 4
  geometry_msgs__msg__Point h4;
  /// Joint states
  /// Joint positions (8)
  rosidl_runtime_c__double__Sequence joint_positions;
  /// Joint velocities (8)
  rosidl_runtime_c__double__Sequence joint_velocities;
  /// Joint efforts (8)
  rosidl_runtime_c__double__Sequence joint_efforts;
  /// IMU state
  /// Body orientation
  geometry_msgs__msg__Quaternion orientation;
  /// Angular velocity
  geometry_msgs__msg__Vector3 angular_velocity;
  /// Center of mass velocity
  /// Center of mass velocity
  geometry_msgs__msg__Vector3 com_velocity;
  /// Jacobians (stored as row-major arrays)
  /// Front left leg Jacobian (3x2=6 elements)
  rosidl_runtime_c__double__Sequence j1;
  /// Front right leg Jacobian (3x2=6 elements)
  rosidl_runtime_c__double__Sequence j2;
  /// Rear left leg Jacobian (3x2=6 elements)
  rosidl_runtime_c__double__Sequence j3;
  /// Rear right leg Jacobian (3x2=6 elements)
  rosidl_runtime_c__double__Sequence j4;
  /// Contact states
  /// Front left foot contact state
  bool contact_1;
  /// Front right foot contact state
  bool contact_2;
  /// Rear left foot contact state
  bool contact_3;
  /// Rear right foot contact state
  bool contact_4;
} quadruped_msgs__msg__QuadrupedState;

// Struct for a sequence of quadruped_msgs__msg__QuadrupedState.
typedef struct quadruped_msgs__msg__QuadrupedState__Sequence
{
  quadruped_msgs__msg__QuadrupedState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadruped_msgs__msg__QuadrupedState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__STRUCT_H_
