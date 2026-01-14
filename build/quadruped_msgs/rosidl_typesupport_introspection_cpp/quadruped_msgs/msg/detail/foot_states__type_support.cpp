// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "quadruped_msgs/msg/detail/foot_states__functions.h"
#include "quadruped_msgs/msg/detail/foot_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace quadruped_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FootStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) quadruped_msgs::msg::FootStates(_init);
}

void FootStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<quadruped_msgs::msg::FootStates *>(message_memory);
  typed_message->~FootStates();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FootStates_message_member_array[4] = {
  {
    "foot1_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs::msg::FootStates, foot1_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot2_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs::msg::FootStates, foot2_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot3_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs::msg::FootStates, foot3_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot4_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadruped_msgs::msg::FootStates, foot4_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FootStates_message_members = {
  "quadruped_msgs::msg",  // message namespace
  "FootStates",  // message name
  4,  // number of fields
  sizeof(quadruped_msgs::msg::FootStates),
  false,  // has_any_key_member_
  FootStates_message_member_array,  // message members
  FootStates_init_function,  // function to initialize message memory (memory has to be allocated)
  FootStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FootStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FootStates_message_members,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__FootStates__get_type_hash,
  &quadruped_msgs__msg__FootStates__get_type_description,
  &quadruped_msgs__msg__FootStates__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace quadruped_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<quadruped_msgs::msg::FootStates>()
{
  return &::quadruped_msgs::msg::rosidl_typesupport_introspection_cpp::FootStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, quadruped_msgs, msg, FootStates)() {
  return &::quadruped_msgs::msg::rosidl_typesupport_introspection_cpp::FootStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
