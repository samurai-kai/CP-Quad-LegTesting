// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadruped_msgs/msg/detail/gait_pattern__rosidl_typesupport_introspection_c.h"
#include "quadruped_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadruped_msgs/msg/detail/gait_pattern__functions.h"
#include "quadruped_msgs/msg/detail/gait_pattern__struct.h"


// Include directives for member types
// Member `foot1_step_position`
// Member `foot2_step_position`
// Member `foot3_step_position`
// Member `foot4_step_position`
// Member `com_position`
#include "geometry_msgs/msg/vector3.h"
// Member `foot1_step_position`
// Member `foot2_step_position`
// Member `foot3_step_position`
// Member `foot4_step_position`
// Member `com_position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `predicted_states`
// Member `predicted_phases`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadruped_msgs__msg__GaitPattern__init(message_memory);
}

void quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_fini_function(void * message_memory)
{
  quadruped_msgs__msg__GaitPattern__fini(message_memory);
}

size_t quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__size_function__GaitPattern__predicted_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_const_function__GaitPattern__predicted_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_function__GaitPattern__predicted_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__fetch_function__GaitPattern__predicted_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_const_function__GaitPattern__predicted_states(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__assign_function__GaitPattern__predicted_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_function__GaitPattern__predicted_states(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__resize_function__GaitPattern__predicted_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__size_function__GaitPattern__predicted_phases(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_const_function__GaitPattern__predicted_phases(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_function__GaitPattern__predicted_phases(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__fetch_function__GaitPattern__predicted_phases(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_const_function__GaitPattern__predicted_phases(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__assign_function__GaitPattern__predicted_phases(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_function__GaitPattern__predicted_phases(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__resize_function__GaitPattern__predicted_phases(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array[19] = {
  {
    "foot1_step_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot1_step_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot2_step_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot2_step_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot3_step_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot3_step_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot4_step_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot4_step_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "com_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, com_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot1_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot1_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot2_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot2_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot3_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot3_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot4_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot4_phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot1_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot1_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot2_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot2_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot3_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot3_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot4_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, foot4_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, step_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, predicted_states),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__size_function__GaitPattern__predicted_states,  // size() function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_const_function__GaitPattern__predicted_states,  // get_const(index) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_function__GaitPattern__predicted_states,  // get(index) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__fetch_function__GaitPattern__predicted_states,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__assign_function__GaitPattern__predicted_states,  // assign(index, value) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__resize_function__GaitPattern__predicted_states  // resize(index) function pointer
  },
  {
    "predicted_phases",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, predicted_phases),  // bytes offset in struct
    NULL,  // default value
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__size_function__GaitPattern__predicted_phases,  // size() function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_const_function__GaitPattern__predicted_phases,  // get_const(index) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__get_function__GaitPattern__predicted_phases,  // get(index) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__fetch_function__GaitPattern__predicted_phases,  // fetch(index, &value) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__assign_function__GaitPattern__predicted_phases,  // assign(index, value) function pointer
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__resize_function__GaitPattern__predicted_phases  // resize(index) function pointer
  },
  {
    "prediction_stages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, prediction_stages),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_horizon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, prediction_horizon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_timestep",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__GaitPattern, prediction_timestep),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_members = {
  "quadruped_msgs__msg",  // message namespace
  "GaitPattern",  // message name
  19,  // number of fields
  sizeof(quadruped_msgs__msg__GaitPattern),
  false,  // has_any_key_member_
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array,  // message members
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_init_function,  // function to initialize message memory (memory has to be allocated)
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_type_support_handle = {
  0,
  &quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_members,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__GaitPattern__get_type_hash,
  &quadruped_msgs__msg__GaitPattern__get_type_description,
  &quadruped_msgs__msg__GaitPattern__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadruped_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadruped_msgs, msg, GaitPattern)() {
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_type_support_handle.typesupport_identifier) {
    quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadruped_msgs__msg__GaitPattern__rosidl_typesupport_introspection_c__GaitPattern_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
