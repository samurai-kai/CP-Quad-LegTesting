// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice
#ifndef QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "quadruped_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadruped_msgs/msg/detail/gait_pattern__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_quadruped_msgs__msg__GaitPattern(
  const quadruped_msgs__msg__GaitPattern * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_deserialize_quadruped_msgs__msg__GaitPattern(
  eprosima::fastcdr::Cdr &,
  quadruped_msgs__msg__GaitPattern * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_quadruped_msgs__msg__GaitPattern(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_quadruped_msgs__msg__GaitPattern(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_key_quadruped_msgs__msg__GaitPattern(
  const quadruped_msgs__msg__GaitPattern * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_key_quadruped_msgs__msg__GaitPattern(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_key_quadruped_msgs__msg__GaitPattern(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadruped_msgs, msg, GaitPattern)();

#ifdef __cplusplus
}
#endif

#endif  // QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
