// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadruped_msgs/msg/detail/foot_states__rosidl_typesupport_introspection_c.h"
#include "quadruped_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadruped_msgs/msg/detail/foot_states__functions.h"
#include "quadruped_msgs/msg/detail/foot_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadruped_msgs__msg__FootStates__init(message_memory);
}

void quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_fini_function(void * message_memory)
{
  quadruped_msgs__msg__FootStates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_member_array[4] = {
  {
    "foot1_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__FootStates, foot1_state),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__FootStates, foot2_state),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__FootStates, foot3_state),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs__msg__FootStates, foot4_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_members = {
  "quadruped_msgs__msg",  // message namespace
  "FootStates",  // message name
  4,  // number of fields
  sizeof(quadruped_msgs__msg__FootStates),
  false,  // has_any_key_member_
  quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_member_array,  // message members
  quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_init_function,  // function to initialize message memory (memory has to be allocated)
  quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_type_support_handle = {
  0,
  &quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_members,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__FootStates__get_type_hash,
  &quadruped_msgs__msg__FootStates__get_type_description,
  &quadruped_msgs__msg__FootStates__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadruped_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadruped_msgs, msg, FootStates)() {
  if (!quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_type_support_handle.typesupport_identifier) {
    quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadruped_msgs__msg__FootStates__rosidl_typesupport_introspection_c__FootStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
