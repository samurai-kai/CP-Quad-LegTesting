// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/gait_pattern__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quadruped_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadruped_msgs/msg/detail/gait_pattern__struct.h"
#include "quadruped_msgs/msg/detail/gait_pattern__functions.h"
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

#include "geometry_msgs/msg/detail/vector3__functions.h"  // com_position, foot1_step_position, foot2_step_position, foot3_step_position, foot4_step_position
#include "rosidl_runtime_c/primitives_sequence.h"  // predicted_phases, predicted_states
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // predicted_phases, predicted_states

// forward declare type support functions

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


using _GaitPattern__ros_msg_type = quadruped_msgs__msg__GaitPattern;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_quadruped_msgs__msg__GaitPattern(
  const quadruped_msgs__msg__GaitPattern * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: foot1_step_position
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->foot1_step_position, cdr);
  }

  // Field name: foot2_step_position
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->foot2_step_position, cdr);
  }

  // Field name: foot3_step_position
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->foot3_step_position, cdr);
  }

  // Field name: foot4_step_position
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->foot4_step_position, cdr);
  }

  // Field name: com_position
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->com_position, cdr);
  }

  // Field name: foot1_phase
  {
    cdr << ros_message->foot1_phase;
  }

  // Field name: foot2_phase
  {
    cdr << ros_message->foot2_phase;
  }

  // Field name: foot3_phase
  {
    cdr << ros_message->foot3_phase;
  }

  // Field name: foot4_phase
  {
    cdr << ros_message->foot4_phase;
  }

  // Field name: foot1_state
  {
    cdr << ros_message->foot1_state;
  }

  // Field name: foot2_state
  {
    cdr << ros_message->foot2_state;
  }

  // Field name: foot3_state
  {
    cdr << ros_message->foot3_state;
  }

  // Field name: foot4_state
  {
    cdr << ros_message->foot4_state;
  }

  // Field name: step_height
  {
    cdr << ros_message->step_height;
  }

  // Field name: predicted_states
  {
    size_t size = ros_message->predicted_states.size;
    auto array_ptr = ros_message->predicted_states.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: predicted_phases
  {
    size_t size = ros_message->predicted_phases.size;
    auto array_ptr = ros_message->predicted_phases.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: prediction_stages
  {
    cdr << ros_message->prediction_stages;
  }

  // Field name: prediction_horizon
  {
    cdr << ros_message->prediction_horizon;
  }

  // Field name: prediction_timestep
  {
    cdr << ros_message->prediction_timestep;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_deserialize_quadruped_msgs__msg__GaitPattern(
  eprosima::fastcdr::Cdr & cdr,
  quadruped_msgs__msg__GaitPattern * ros_message)
{
  // Field name: foot1_step_position
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->foot1_step_position);
  }

  // Field name: foot2_step_position
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->foot2_step_position);
  }

  // Field name: foot3_step_position
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->foot3_step_position);
  }

  // Field name: foot4_step_position
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->foot4_step_position);
  }

  // Field name: com_position
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->com_position);
  }

  // Field name: foot1_phase
  {
    cdr >> ros_message->foot1_phase;
  }

  // Field name: foot2_phase
  {
    cdr >> ros_message->foot2_phase;
  }

  // Field name: foot3_phase
  {
    cdr >> ros_message->foot3_phase;
  }

  // Field name: foot4_phase
  {
    cdr >> ros_message->foot4_phase;
  }

  // Field name: foot1_state
  {
    cdr >> ros_message->foot1_state;
  }

  // Field name: foot2_state
  {
    cdr >> ros_message->foot2_state;
  }

  // Field name: foot3_state
  {
    cdr >> ros_message->foot3_state;
  }

  // Field name: foot4_state
  {
    cdr >> ros_message->foot4_state;
  }

  // Field name: step_height
  {
    cdr >> ros_message->step_height;
  }

  // Field name: predicted_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_states.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->predicted_states);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->predicted_states, size)) {
      fprintf(stderr, "failed to create array for field 'predicted_states'");
      return false;
    }
    auto array_ptr = ros_message->predicted_states.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: predicted_phases
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_phases.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->predicted_phases);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->predicted_phases, size)) {
      fprintf(stderr, "failed to create array for field 'predicted_phases'");
      return false;
    }
    auto array_ptr = ros_message->predicted_phases.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: prediction_stages
  {
    cdr >> ros_message->prediction_stages;
  }

  // Field name: prediction_horizon
  {
    cdr >> ros_message->prediction_horizon;
  }

  // Field name: prediction_timestep
  {
    cdr >> ros_message->prediction_timestep;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_quadruped_msgs__msg__GaitPattern(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GaitPattern__ros_msg_type * ros_message = static_cast<const _GaitPattern__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: foot1_step_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->foot1_step_position), current_alignment);

  // Field name: foot2_step_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->foot2_step_position), current_alignment);

  // Field name: foot3_step_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->foot3_step_position), current_alignment);

  // Field name: foot4_step_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->foot4_step_position), current_alignment);

  // Field name: com_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->com_position), current_alignment);

  // Field name: foot1_phase
  {
    size_t item_size = sizeof(ros_message->foot1_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot2_phase
  {
    size_t item_size = sizeof(ros_message->foot2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot3_phase
  {
    size_t item_size = sizeof(ros_message->foot3_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot4_phase
  {
    size_t item_size = sizeof(ros_message->foot4_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot1_state
  {
    size_t item_size = sizeof(ros_message->foot1_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot2_state
  {
    size_t item_size = sizeof(ros_message->foot2_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot3_state
  {
    size_t item_size = sizeof(ros_message->foot3_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot4_state
  {
    size_t item_size = sizeof(ros_message->foot4_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: step_height
  {
    size_t item_size = sizeof(ros_message->step_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_states
  {
    size_t array_size = ros_message->predicted_states.size;
    auto array_ptr = ros_message->predicted_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_phases
  {
    size_t array_size = ros_message->predicted_phases.size;
    auto array_ptr = ros_message->predicted_phases.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_stages
  {
    size_t item_size = sizeof(ros_message->prediction_stages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_horizon
  {
    size_t item_size = sizeof(ros_message->prediction_horizon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_timestep
  {
    size_t item_size = sizeof(ros_message->prediction_timestep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_quadruped_msgs__msg__GaitPattern(
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

  // Field name: foot1_step_position
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

  // Field name: foot2_step_position
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

  // Field name: foot3_step_position
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

  // Field name: foot4_step_position
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

  // Field name: com_position
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

  // Field name: foot1_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot3_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot4_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot1_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot2_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot3_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot4_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: step_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: predicted_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: predicted_phases
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: prediction_stages
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: prediction_horizon
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: prediction_timestep
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadruped_msgs__msg__GaitPattern;
    is_plain =
      (
      offsetof(DataType, prediction_timestep) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_key_quadruped_msgs__msg__GaitPattern(
  const quadruped_msgs__msg__GaitPattern * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: foot1_step_position
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->foot1_step_position, cdr);
  }

  // Field name: foot2_step_position
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->foot2_step_position, cdr);
  }

  // Field name: foot3_step_position
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->foot3_step_position, cdr);
  }

  // Field name: foot4_step_position
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->foot4_step_position, cdr);
  }

  // Field name: com_position
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->com_position, cdr);
  }

  // Field name: foot1_phase
  {
    cdr << ros_message->foot1_phase;
  }

  // Field name: foot2_phase
  {
    cdr << ros_message->foot2_phase;
  }

  // Field name: foot3_phase
  {
    cdr << ros_message->foot3_phase;
  }

  // Field name: foot4_phase
  {
    cdr << ros_message->foot4_phase;
  }

  // Field name: foot1_state
  {
    cdr << ros_message->foot1_state;
  }

  // Field name: foot2_state
  {
    cdr << ros_message->foot2_state;
  }

  // Field name: foot3_state
  {
    cdr << ros_message->foot3_state;
  }

  // Field name: foot4_state
  {
    cdr << ros_message->foot4_state;
  }

  // Field name: step_height
  {
    cdr << ros_message->step_height;
  }

  // Field name: predicted_states
  {
    size_t size = ros_message->predicted_states.size;
    auto array_ptr = ros_message->predicted_states.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: predicted_phases
  {
    size_t size = ros_message->predicted_phases.size;
    auto array_ptr = ros_message->predicted_phases.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: prediction_stages
  {
    cdr << ros_message->prediction_stages;
  }

  // Field name: prediction_horizon
  {
    cdr << ros_message->prediction_horizon;
  }

  // Field name: prediction_timestep
  {
    cdr << ros_message->prediction_timestep;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_key_quadruped_msgs__msg__GaitPattern(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GaitPattern__ros_msg_type * ros_message = static_cast<const _GaitPattern__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: foot1_step_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->foot1_step_position), current_alignment);

  // Field name: foot2_step_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->foot2_step_position), current_alignment);

  // Field name: foot3_step_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->foot3_step_position), current_alignment);

  // Field name: foot4_step_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->foot4_step_position), current_alignment);

  // Field name: com_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->com_position), current_alignment);

  // Field name: foot1_phase
  {
    size_t item_size = sizeof(ros_message->foot1_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot2_phase
  {
    size_t item_size = sizeof(ros_message->foot2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot3_phase
  {
    size_t item_size = sizeof(ros_message->foot3_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot4_phase
  {
    size_t item_size = sizeof(ros_message->foot4_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot1_state
  {
    size_t item_size = sizeof(ros_message->foot1_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot2_state
  {
    size_t item_size = sizeof(ros_message->foot2_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot3_state
  {
    size_t item_size = sizeof(ros_message->foot3_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: foot4_state
  {
    size_t item_size = sizeof(ros_message->foot4_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: step_height
  {
    size_t item_size = sizeof(ros_message->step_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_states
  {
    size_t array_size = ros_message->predicted_states.size;
    auto array_ptr = ros_message->predicted_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_phases
  {
    size_t array_size = ros_message->predicted_phases.size;
    auto array_ptr = ros_message->predicted_phases.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_stages
  {
    size_t item_size = sizeof(ros_message->prediction_stages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_horizon
  {
    size_t item_size = sizeof(ros_message->prediction_horizon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_timestep
  {
    size_t item_size = sizeof(ros_message->prediction_timestep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_key_quadruped_msgs__msg__GaitPattern(
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
  // Field name: foot1_step_position
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

  // Field name: foot2_step_position
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

  // Field name: foot3_step_position
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

  // Field name: foot4_step_position
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

  // Field name: com_position
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

  // Field name: foot1_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot3_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot4_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot1_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot2_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot3_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: foot4_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: step_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: predicted_states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: predicted_phases
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: prediction_stages
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: prediction_horizon
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: prediction_timestep
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadruped_msgs__msg__GaitPattern;
    is_plain =
      (
      offsetof(DataType, prediction_timestep) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GaitPattern__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const quadruped_msgs__msg__GaitPattern * ros_message = static_cast<const quadruped_msgs__msg__GaitPattern *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_quadruped_msgs__msg__GaitPattern(ros_message, cdr);
}

static bool _GaitPattern__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  quadruped_msgs__msg__GaitPattern * ros_message = static_cast<quadruped_msgs__msg__GaitPattern *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_quadruped_msgs__msg__GaitPattern(cdr, ros_message);
}

static uint32_t _GaitPattern__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quadruped_msgs__msg__GaitPattern(
      untyped_ros_message, 0));
}

static size_t _GaitPattern__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quadruped_msgs__msg__GaitPattern(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GaitPattern = {
  "quadruped_msgs::msg",
  "GaitPattern",
  _GaitPattern__cdr_serialize,
  _GaitPattern__cdr_deserialize,
  _GaitPattern__get_serialized_size,
  _GaitPattern__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GaitPattern__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GaitPattern,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__GaitPattern__get_type_hash,
  &quadruped_msgs__msg__GaitPattern__get_type_description,
  &quadruped_msgs__msg__GaitPattern__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadruped_msgs, msg, GaitPattern)() {
  return &_GaitPattern__type_support;
}

#if defined(__cplusplus)
}
#endif
