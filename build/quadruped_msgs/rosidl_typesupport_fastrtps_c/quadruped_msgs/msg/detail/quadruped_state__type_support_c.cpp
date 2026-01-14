// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/quadruped_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quadruped_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadruped_msgs/msg/detail/quadruped_state__struct.h"
#include "quadruped_msgs/msg/detail/quadruped_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // h1, h2, h3, h4, p1, p2, p3, p4, pc
#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation
#include "geometry_msgs/msg/detail/vector3__functions.h"  // angular_velocity, com_velocity, v1, v2, v3, v4
#include "rosidl_runtime_c/primitives_sequence.h"  // j1, j2, j3, j4, joint_efforts, joint_positions, joint_velocities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // j1, j2, j3, j4, joint_efforts, joint_positions, joint_velocities

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_serialize_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_deserialize_geometry_msgs__msg__Quaternion(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Quaternion * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_serialize_key_geometry_msgs__msg__Quaternion(
  const geometry_msgs__msg__Quaternion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadruped_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _QuadrupedState__ros_msg_type = quadruped_msgs__msg__QuadrupedState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_quadruped_msgs__msg__QuadrupedState(
  const quadruped_msgs__msg__QuadrupedState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: p1
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->p1, cdr);
  }

  // Field name: p2
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->p2, cdr);
  }

  // Field name: p3
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->p3, cdr);
  }

  // Field name: p4
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->p4, cdr);
  }

  // Field name: pc
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->pc, cdr);
  }

  // Field name: v1
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->v1, cdr);
  }

  // Field name: v2
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->v2, cdr);
  }

  // Field name: v3
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->v3, cdr);
  }

  // Field name: v4
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->v4, cdr);
  }

  // Field name: h1
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->h1, cdr);
  }

  // Field name: h2
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->h2, cdr);
  }

  // Field name: h3
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->h3, cdr);
  }

  // Field name: h4
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->h4, cdr);
  }

  // Field name: joint_positions
  {
    size_t size = ros_message->joint_positions.size;
    auto array_ptr = ros_message->joint_positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: joint_velocities
  {
    size_t size = ros_message->joint_velocities.size;
    auto array_ptr = ros_message->joint_velocities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: joint_efforts
  {
    size_t size = ros_message->joint_efforts.size;
    auto array_ptr = ros_message->joint_efforts.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: orientation
  {
    cdr_serialize_geometry_msgs__msg__Quaternion(
      &ros_message->orientation, cdr);
  }

  // Field name: angular_velocity
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->angular_velocity, cdr);
  }

  // Field name: com_velocity
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->com_velocity, cdr);
  }

  // Field name: j1
  {
    size_t size = ros_message->j1.size;
    auto array_ptr = ros_message->j1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: j2
  {
    size_t size = ros_message->j2.size;
    auto array_ptr = ros_message->j2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: j3
  {
    size_t size = ros_message->j3.size;
    auto array_ptr = ros_message->j3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: j4
  {
    size_t size = ros_message->j4.size;
    auto array_ptr = ros_message->j4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: contact_1
  {
    cdr << (ros_message->contact_1 ? true : false);
  }

  // Field name: contact_2
  {
    cdr << (ros_message->contact_2 ? true : false);
  }

  // Field name: contact_3
  {
    cdr << (ros_message->contact_3 ? true : false);
  }

  // Field name: contact_4
  {
    cdr << (ros_message->contact_4 ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_deserialize_quadruped_msgs__msg__QuadrupedState(
  eprosima::fastcdr::Cdr & cdr,
  quadruped_msgs__msg__QuadrupedState * ros_message)
{
  // Field name: p1
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->p1);
  }

  // Field name: p2
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->p2);
  }

  // Field name: p3
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->p3);
  }

  // Field name: p4
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->p4);
  }

  // Field name: pc
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->pc);
  }

  // Field name: v1
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->v1);
  }

  // Field name: v2
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->v2);
  }

  // Field name: v3
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->v3);
  }

  // Field name: v4
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->v4);
  }

  // Field name: h1
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->h1);
  }

  // Field name: h2
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->h2);
  }

  // Field name: h3
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->h3);
  }

  // Field name: h4
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->h4);
  }

  // Field name: joint_positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_positions.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_positions);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_positions, size)) {
      fprintf(stderr, "failed to create array for field 'joint_positions'");
      return false;
    }
    auto array_ptr = ros_message->joint_positions.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: joint_velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_velocities.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_velocities);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_velocities, size)) {
      fprintf(stderr, "failed to create array for field 'joint_velocities'");
      return false;
    }
    auto array_ptr = ros_message->joint_velocities.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: joint_efforts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_efforts.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->joint_efforts);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->joint_efforts, size)) {
      fprintf(stderr, "failed to create array for field 'joint_efforts'");
      return false;
    }
    auto array_ptr = ros_message->joint_efforts.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: orientation
  {
    cdr_deserialize_geometry_msgs__msg__Quaternion(cdr, &ros_message->orientation);
  }

  // Field name: angular_velocity
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->angular_velocity);
  }

  // Field name: com_velocity
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->com_velocity);
  }

  // Field name: j1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j1.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->j1);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->j1, size)) {
      fprintf(stderr, "failed to create array for field 'j1'");
      return false;
    }
    auto array_ptr = ros_message->j1.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: j2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j2.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->j2);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->j2, size)) {
      fprintf(stderr, "failed to create array for field 'j2'");
      return false;
    }
    auto array_ptr = ros_message->j2.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: j3
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j3.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->j3);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->j3, size)) {
      fprintf(stderr, "failed to create array for field 'j3'");
      return false;
    }
    auto array_ptr = ros_message->j3.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: j4
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->j4.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->j4);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->j4, size)) {
      fprintf(stderr, "failed to create array for field 'j4'");
      return false;
    }
    auto array_ptr = ros_message->j4.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: contact_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->contact_1 = tmp ? true : false;
  }

  // Field name: contact_2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->contact_2 = tmp ? true : false;
  }

  // Field name: contact_3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->contact_3 = tmp ? true : false;
  }

  // Field name: contact_4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->contact_4 = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_quadruped_msgs__msg__QuadrupedState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QuadrupedState__ros_msg_type * ros_message = static_cast<const _QuadrupedState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: p1
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->p1), current_alignment);

  // Field name: p2
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->p2), current_alignment);

  // Field name: p3
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->p3), current_alignment);

  // Field name: p4
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->p4), current_alignment);

  // Field name: pc
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->pc), current_alignment);

  // Field name: v1
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->v1), current_alignment);

  // Field name: v2
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->v2), current_alignment);

  // Field name: v3
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->v3), current_alignment);

  // Field name: v4
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->v4), current_alignment);

  // Field name: h1
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->h1), current_alignment);

  // Field name: h2
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->h2), current_alignment);

  // Field name: h3
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->h3), current_alignment);

  // Field name: h4
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->h4), current_alignment);

  // Field name: joint_positions
  {
    size_t array_size = ros_message->joint_positions.size;
    auto array_ptr = ros_message->joint_positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_velocities
  {
    size_t array_size = ros_message->joint_velocities.size;
    auto array_ptr = ros_message->joint_velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_efforts
  {
    size_t array_size = ros_message->joint_efforts.size;
    auto array_ptr = ros_message->joint_efforts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: orientation
  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);

  // Field name: angular_velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->angular_velocity), current_alignment);

  // Field name: com_velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->com_velocity), current_alignment);

  // Field name: j1
  {
    size_t array_size = ros_message->j1.size;
    auto array_ptr = ros_message->j1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: j2
  {
    size_t array_size = ros_message->j2.size;
    auto array_ptr = ros_message->j2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: j3
  {
    size_t array_size = ros_message->j3.size;
    auto array_ptr = ros_message->j3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: j4
  {
    size_t array_size = ros_message->j4.size;
    auto array_ptr = ros_message->j4.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_1
  {
    size_t item_size = sizeof(ros_message->contact_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_2
  {
    size_t item_size = sizeof(ros_message->contact_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_3
  {
    size_t item_size = sizeof(ros_message->contact_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_4
  {
    size_t item_size = sizeof(ros_message->contact_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_quadruped_msgs__msg__QuadrupedState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: p1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: p2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: p3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: p4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pc
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint_positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint_velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint_efforts
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: orientation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: angular_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: com_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: j1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: j2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: j3
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: j4
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadruped_msgs__msg__QuadrupedState;
    is_plain =
      (
      offsetof(DataType, contact_4) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_key_quadruped_msgs__msg__QuadrupedState(
  const quadruped_msgs__msg__QuadrupedState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: p1
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->p1, cdr);
  }

  // Field name: p2
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->p2, cdr);
  }

  // Field name: p3
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->p3, cdr);
  }

  // Field name: p4
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->p4, cdr);
  }

  // Field name: pc
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->pc, cdr);
  }

  // Field name: v1
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->v1, cdr);
  }

  // Field name: v2
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->v2, cdr);
  }

  // Field name: v3
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->v3, cdr);
  }

  // Field name: v4
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->v4, cdr);
  }

  // Field name: h1
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->h1, cdr);
  }

  // Field name: h2
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->h2, cdr);
  }

  // Field name: h3
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->h3, cdr);
  }

  // Field name: h4
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->h4, cdr);
  }

  // Field name: joint_positions
  {
    size_t size = ros_message->joint_positions.size;
    auto array_ptr = ros_message->joint_positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: joint_velocities
  {
    size_t size = ros_message->joint_velocities.size;
    auto array_ptr = ros_message->joint_velocities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: joint_efforts
  {
    size_t size = ros_message->joint_efforts.size;
    auto array_ptr = ros_message->joint_efforts.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: orientation
  {
    cdr_serialize_key_geometry_msgs__msg__Quaternion(
      &ros_message->orientation, cdr);
  }

  // Field name: angular_velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->angular_velocity, cdr);
  }

  // Field name: com_velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->com_velocity, cdr);
  }

  // Field name: j1
  {
    size_t size = ros_message->j1.size;
    auto array_ptr = ros_message->j1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: j2
  {
    size_t size = ros_message->j2.size;
    auto array_ptr = ros_message->j2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: j3
  {
    size_t size = ros_message->j3.size;
    auto array_ptr = ros_message->j3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: j4
  {
    size_t size = ros_message->j4.size;
    auto array_ptr = ros_message->j4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: contact_1
  {
    cdr << (ros_message->contact_1 ? true : false);
  }

  // Field name: contact_2
  {
    cdr << (ros_message->contact_2 ? true : false);
  }

  // Field name: contact_3
  {
    cdr << (ros_message->contact_3 ? true : false);
  }

  // Field name: contact_4
  {
    cdr << (ros_message->contact_4 ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_key_quadruped_msgs__msg__QuadrupedState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QuadrupedState__ros_msg_type * ros_message = static_cast<const _QuadrupedState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: p1
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->p1), current_alignment);

  // Field name: p2
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->p2), current_alignment);

  // Field name: p3
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->p3), current_alignment);

  // Field name: p4
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->p4), current_alignment);

  // Field name: pc
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->pc), current_alignment);

  // Field name: v1
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->v1), current_alignment);

  // Field name: v2
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->v2), current_alignment);

  // Field name: v3
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->v3), current_alignment);

  // Field name: v4
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->v4), current_alignment);

  // Field name: h1
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->h1), current_alignment);

  // Field name: h2
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->h2), current_alignment);

  // Field name: h3
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->h3), current_alignment);

  // Field name: h4
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->h4), current_alignment);

  // Field name: joint_positions
  {
    size_t array_size = ros_message->joint_positions.size;
    auto array_ptr = ros_message->joint_positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_velocities
  {
    size_t array_size = ros_message->joint_velocities.size;
    auto array_ptr = ros_message->joint_velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_efforts
  {
    size_t array_size = ros_message->joint_efforts.size;
    auto array_ptr = ros_message->joint_efforts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: orientation
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);

  // Field name: angular_velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->angular_velocity), current_alignment);

  // Field name: com_velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->com_velocity), current_alignment);

  // Field name: j1
  {
    size_t array_size = ros_message->j1.size;
    auto array_ptr = ros_message->j1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: j2
  {
    size_t array_size = ros_message->j2.size;
    auto array_ptr = ros_message->j2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: j3
  {
    size_t array_size = ros_message->j3.size;
    auto array_ptr = ros_message->j3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: j4
  {
    size_t array_size = ros_message->j4.size;
    auto array_ptr = ros_message->j4.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_1
  {
    size_t item_size = sizeof(ros_message->contact_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_2
  {
    size_t item_size = sizeof(ros_message->contact_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_3
  {
    size_t item_size = sizeof(ros_message->contact_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_4
  {
    size_t item_size = sizeof(ros_message->contact_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_key_quadruped_msgs__msg__QuadrupedState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: p1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: p2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: p3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: p4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pc
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: v4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h3
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: h4
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: joint_positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint_velocities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: joint_efforts
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: orientation
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: angular_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: com_velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: j1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: j2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: j3
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: j4
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: contact_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadruped_msgs__msg__QuadrupedState;
    is_plain =
      (
      offsetof(DataType, contact_4) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _QuadrupedState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const quadruped_msgs__msg__QuadrupedState * ros_message = static_cast<const quadruped_msgs__msg__QuadrupedState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_quadruped_msgs__msg__QuadrupedState(ros_message, cdr);
}

static bool _QuadrupedState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  quadruped_msgs__msg__QuadrupedState * ros_message = static_cast<quadruped_msgs__msg__QuadrupedState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_quadruped_msgs__msg__QuadrupedState(cdr, ros_message);
}

static uint32_t _QuadrupedState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quadruped_msgs__msg__QuadrupedState(
      untyped_ros_message, 0));
}

static size_t _QuadrupedState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quadruped_msgs__msg__QuadrupedState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_QuadrupedState = {
  "quadruped_msgs::msg",
  "QuadrupedState",
  _QuadrupedState__cdr_serialize,
  _QuadrupedState__cdr_deserialize,
  _QuadrupedState__get_serialized_size,
  _QuadrupedState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _QuadrupedState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QuadrupedState,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__QuadrupedState__get_type_hash,
  &quadruped_msgs__msg__QuadrupedState__get_type_description,
  &quadruped_msgs__msg__QuadrupedState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadruped_msgs, msg, QuadrupedState)() {
  return &_QuadrupedState__type_support;
}

#if defined(__cplusplus)
}
#endif
