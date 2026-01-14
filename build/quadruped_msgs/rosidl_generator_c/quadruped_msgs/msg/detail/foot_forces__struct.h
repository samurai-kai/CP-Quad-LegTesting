// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadruped_msgs:msg/FootForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_forces.h"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__STRUCT_H_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'foot1_force'
// Member 'foot2_force'
// Member 'foot3_force'
// Member 'foot4_force'
// Member 'total_force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/FootForces in the package quadruped_msgs.
/**
  * Message to hold force commands for each foot
  * Each foot has a 3D force vector (x, y, z)
 */
typedef struct quadruped_msgs__msg__FootForces
{
  /// Force vectors (N) for each foot in the foot frame
  /// Positive z is pushing the foot down
  /// Front left
  geometry_msgs__msg__Vector3 foot1_force;
  /// Front right
  geometry_msgs__msg__Vector3 foot2_force;
  /// Rear left
  geometry_msgs__msg__Vector3 foot3_force;
  /// Rear right
  geometry_msgs__msg__Vector3 foot4_force;
  /// Sum of all foot forces
  geometry_msgs__msg__Vector3 total_force;
} quadruped_msgs__msg__FootForces;

// Struct for a sequence of quadruped_msgs__msg__FootForces.
typedef struct quadruped_msgs__msg__FootForces__Sequence
{
  quadruped_msgs__msg__FootForces * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadruped_msgs__msg__FootForces__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__STRUCT_H_
