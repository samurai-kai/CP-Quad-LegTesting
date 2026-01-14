// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadruped_msgs/msg/detail/quadruped_state__rosidl_typesupport_introspection_c.h"
#include "quadruped_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadruped_msgs/msg/detail/quadruped_state__functions.h"
#include "quadruped_msgs/msg/detail/quadruped_state__struct.h"


// Include directives for member types
// Member `p1`
// Member `p2`
// Member `p3`
// Member `p4`
// Member `pc`
// Member `h1`
// Member `h2`
// Member `h3`
// Member `h4`
#include "geometry_msgs/msg/point.h"
// Member `p1`
// Member `p2`
// Member `p3`
// Member `p4`
// Member `pc`
// Member `h1`
// Member `h2`
// Member `h3`
// Member `h4`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `v1`
// Member `v2`
// Member `v3`
// Member `v4`
// Member `angular_velocity`
// Member `com_velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `v1`
// Member `v2`
// Member `v3`
// Member `v4`
// Member `angular_velocity`
// Member `com_velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `joint_positions`
// Member `joint_velocities`
// Member `joint_efforts`
// Member `j1`
// Member `j2`
// Member `j3`
// Member `j4`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadruped_msgs__msg__QuadrupedState__init(message_memory);
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_fini_function(void * message_memory)
{
  quadruped_msgs__msg__QuadrupedState__fini(message_memory);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__joint_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__joint_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__joint_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__joint_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__joint_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__joint_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__joint_efforts(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_efforts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_efforts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__joint_efforts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_efforts(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__joint_efforts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_efforts(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__joint_efforts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j1(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j1(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j1(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j2(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j2(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j2(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j3(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j3(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j3(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j3(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j3(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j3(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j4(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j4(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j4(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j4(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j4(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j4(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j4(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j4(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[27] = {
  {
    "p1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, p1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, p2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, p3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, p4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, pc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, v1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, v2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, v3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, v4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, h1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, h2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, h3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, h4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, joint_positions),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__joint_positions,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_positions,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_positions,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__joint_positions,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__joint_positions,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__joint_positions  // resize(index) function pointer
  },
  {
    "joint_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, joint_velocities),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__joint_velocities,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_velocities,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_velocities,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__joint_velocities,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__joint_velocities,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__joint_velocities  // resize(index) function pointer
  },
  {
    "joint_efforts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, joint_efforts),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__joint_efforts,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__joint_efforts,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__joint_efforts,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__joint_efforts,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__joint_efforts,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__joint_efforts  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "com_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, com_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "j1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, j1),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j1,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j1,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j1,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j1,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j1,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j1  // resize(index) function pointer
  },
  {
    "j2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, j2),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j2,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j2,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j2,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j2,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j2,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j2  // resize(index) function pointer
  },
  {
    "j3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, j3),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j3,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j3,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j3,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j3,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j3,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j3  // resize(index) function pointer
  },
  {
    "j4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, j4),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__size_function__QuadrupedState__j4,  // size() function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_const_function__QuadrupedState__j4,  // get_const(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__get_function__QuadrupedState__j4,  // get(index) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__fetch_function__QuadrupedState__j4,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__assign_function__QuadrupedState__j4,  // assign(index, value) function pointer
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__resize_function__QuadrupedState__j4  // resize(index) function pointer
  },
  {
    "contact_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, contact_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, contact_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, contact_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__QuadrupedState, contact_4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_members = {
  "quadruped_msgs__msg",  // message namespace
  "QuadrupedState",  // message name
  27,  // number of fields
  sizeof(quadruped_msgs__msg__QuadrupedState),
  false,  // has_any_key_member_
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array,  // message members
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_init_function,  // function to initialize message memory (memory has to be allocated)
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_type_support_handle = {
  0,
  &quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_members,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__QuadrupedState__get_type_hash,
  &quadruped_msgs__msg__QuadrupedState__get_type_description,
  &quadruped_msgs__msg__QuadrupedState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadruped_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadruped_msgs, msg, QuadrupedState)() {
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_type_support_handle.typesupport_identifier) {
    quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadruped_msgs__msg__QuadrupedState__rosidl_typesupport_introspection_c__QuadrupedState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
