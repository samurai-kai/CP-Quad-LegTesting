// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/gait_pattern__rosidl_typesupport_fastrtps_cpp.hpp"
#include "quadruped_msgs/msg/detail/gait_pattern__functions.h"
#include "quadruped_msgs/msg/detail/gait_pattern__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_key_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Vector3 already declared above

// functions for geometry_msgs::msg::Vector3 already declared above

// functions for geometry_msgs::msg::Vector3 already declared above

// functions for geometry_msgs::msg::Vector3 already declared above


namespace quadruped_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
cdr_serialize(
  const quadruped_msgs::msg::GaitPattern & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: foot1_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.foot1_step_position,
    cdr);

  // Member: foot2_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.foot2_step_position,
    cdr);

  // Member: foot3_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.foot3_step_position,
    cdr);

  // Member: foot4_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.foot4_step_position,
    cdr);

  // Member: com_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.com_position,
    cdr);

  // Member: foot1_phase
  cdr << ros_message.foot1_phase;

  // Member: foot2_phase
  cdr << ros_message.foot2_phase;

  // Member: foot3_phase
  cdr << ros_message.foot3_phase;

  // Member: foot4_phase
  cdr << ros_message.foot4_phase;

  // Member: foot1_state
  cdr << ros_message.foot1_state;

  // Member: foot2_state
  cdr << ros_message.foot2_state;

  // Member: foot3_state
  cdr << ros_message.foot3_state;

  // Member: foot4_state
  cdr << ros_message.foot4_state;

  // Member: step_height
  cdr << ros_message.step_height;

  // Member: predicted_states
  {
    cdr << ros_message.predicted_states;
  }

  // Member: predicted_phases
  {
    cdr << ros_message.predicted_phases;
  }

  // Member: prediction_stages
  cdr << ros_message.prediction_stages;

  // Member: prediction_horizon
  cdr << ros_message.prediction_horizon;

  // Member: prediction_timestep
  cdr << ros_message.prediction_timestep;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quadruped_msgs::msg::GaitPattern & ros_message)
{
  // Member: foot1_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.foot1_step_position);

  // Member: foot2_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.foot2_step_position);

  // Member: foot3_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.foot3_step_position);

  // Member: foot4_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.foot4_step_position);

  // Member: com_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.com_position);

  // Member: foot1_phase
  cdr >> ros_message.foot1_phase;

  // Member: foot2_phase
  cdr >> ros_message.foot2_phase;

  // Member: foot3_phase
  cdr >> ros_message.foot3_phase;

  // Member: foot4_phase
  cdr >> ros_message.foot4_phase;

  // Member: foot1_state
  cdr >> ros_message.foot1_state;

  // Member: foot2_state
  cdr >> ros_message.foot2_state;

  // Member: foot3_state
  cdr >> ros_message.foot3_state;

  // Member: foot4_state
  cdr >> ros_message.foot4_state;

  // Member: step_height
  cdr >> ros_message.step_height;

  // Member: predicted_states
  {
    cdr >> ros_message.predicted_states;
  }

  // Member: predicted_phases
  {
    cdr >> ros_message.predicted_phases;
  }

  // Member: prediction_stages
  cdr >> ros_message.prediction_stages;

  // Member: prediction_horizon
  cdr >> ros_message.prediction_horizon;

  // Member: prediction_timestep
  cdr >> ros_message.prediction_timestep;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
get_serialized_size(
  const quadruped_msgs::msg::GaitPattern & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: foot1_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.foot1_step_position, current_alignment);

  // Member: foot2_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.foot2_step_position, current_alignment);

  // Member: foot3_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.foot3_step_position, current_alignment);

  // Member: foot4_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.foot4_step_position, current_alignment);

  // Member: com_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.com_position, current_alignment);

  // Member: foot1_phase
  {
    size_t item_size = sizeof(ros_message.foot1_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot2_phase
  {
    size_t item_size = sizeof(ros_message.foot2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot3_phase
  {
    size_t item_size = sizeof(ros_message.foot3_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot4_phase
  {
    size_t item_size = sizeof(ros_message.foot4_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot1_state
  {
    size_t item_size = sizeof(ros_message.foot1_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot2_state
  {
    size_t item_size = sizeof(ros_message.foot2_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot3_state
  {
    size_t item_size = sizeof(ros_message.foot3_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot4_state
  {
    size_t item_size = sizeof(ros_message.foot4_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: step_height
  {
    size_t item_size = sizeof(ros_message.step_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: predicted_states
  {
    size_t array_size = ros_message.predicted_states.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: predicted_phases
  {
    size_t array_size = ros_message.predicted_phases.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_phases[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: prediction_stages
  {
    size_t item_size = sizeof(ros_message.prediction_stages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: prediction_horizon
  {
    size_t item_size = sizeof(ros_message.prediction_horizon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: prediction_timestep
  {
    size_t item_size = sizeof(ros_message.prediction_timestep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
max_serialized_size_GaitPattern(
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

  // Member: foot1_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: foot2_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: foot3_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: foot4_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: com_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: foot1_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot3_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot4_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot1_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot2_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot3_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: foot4_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: step_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: predicted_states
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
  // Member: predicted_phases
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
  // Member: prediction_stages
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: prediction_horizon
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: prediction_timestep
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
    using DataType = quadruped_msgs::msg::GaitPattern;
    is_plain =
      (
      offsetof(DataType, prediction_timestep) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
cdr_serialize_key(
  const quadruped_msgs::msg::GaitPattern & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: foot1_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.foot1_step_position,
    cdr);

  // Member: foot2_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.foot2_step_position,
    cdr);

  // Member: foot3_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.foot3_step_position,
    cdr);

  // Member: foot4_step_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.foot4_step_position,
    cdr);

  // Member: com_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.com_position,
    cdr);

  // Member: foot1_phase
  cdr << ros_message.foot1_phase;

  // Member: foot2_phase
  cdr << ros_message.foot2_phase;

  // Member: foot3_phase
  cdr << ros_message.foot3_phase;

  // Member: foot4_phase
  cdr << ros_message.foot4_phase;

  // Member: foot1_state
  cdr << ros_message.foot1_state;

  // Member: foot2_state
  cdr << ros_message.foot2_state;

  // Member: foot3_state
  cdr << ros_message.foot3_state;

  // Member: foot4_state
  cdr << ros_message.foot4_state;

  // Member: step_height
  cdr << ros_message.step_height;

  // Member: predicted_states
  {
    cdr << ros_message.predicted_states;
  }

  // Member: predicted_phases
  {
    cdr << ros_message.predicted_phases;
  }

  // Member: prediction_stages
  cdr << ros_message.prediction_stages;

  // Member: prediction_horizon
  cdr << ros_message.prediction_horizon;

  // Member: prediction_timestep
  cdr << ros_message.prediction_timestep;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
get_serialized_size_key(
  const quadruped_msgs::msg::GaitPattern & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: foot1_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.foot1_step_position, current_alignment);

  // Member: foot2_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.foot2_step_position, current_alignment);

  // Member: foot3_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.foot3_step_position, current_alignment);

  // Member: foot4_step_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.foot4_step_position, current_alignment);

  // Member: com_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.com_position, current_alignment);

  // Member: foot1_phase
  {
    size_t item_size = sizeof(ros_message.foot1_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot2_phase
  {
    size_t item_size = sizeof(ros_message.foot2_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot3_phase
  {
    size_t item_size = sizeof(ros_message.foot3_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot4_phase
  {
    size_t item_size = sizeof(ros_message.foot4_phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot1_state
  {
    size_t item_size = sizeof(ros_message.foot1_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot2_state
  {
    size_t item_size = sizeof(ros_message.foot2_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot3_state
  {
    size_t item_size = sizeof(ros_message.foot3_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: foot4_state
  {
    size_t item_size = sizeof(ros_message.foot4_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: step_height
  {
    size_t item_size = sizeof(ros_message.step_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: predicted_states
  {
    size_t array_size = ros_message.predicted_states.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: predicted_phases
  {
    size_t array_size = ros_message.predicted_phases.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_phases[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: prediction_stages
  {
    size_t item_size = sizeof(ros_message.prediction_stages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: prediction_horizon
  {
    size_t item_size = sizeof(ros_message.prediction_horizon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: prediction_timestep
  {
    size_t item_size = sizeof(ros_message.prediction_timestep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadruped_msgs
max_serialized_size_key_GaitPattern(
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

  // Member: foot1_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: foot2_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: foot3_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: foot4_step_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: com_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: foot1_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot2_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot3_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot4_phase
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot1_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot2_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot3_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot4_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: step_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: predicted_states
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

  // Member: predicted_phases
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

  // Member: prediction_stages
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prediction_horizon
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prediction_timestep
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
    using DataType = quadruped_msgs::msg::GaitPattern;
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
  auto typed_message =
    static_cast<const quadruped_msgs::msg::GaitPattern *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GaitPattern__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<quadruped_msgs::msg::GaitPattern *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GaitPattern__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const quadruped_msgs::msg::GaitPattern *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GaitPattern__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GaitPattern(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GaitPattern__callbacks = {
  "quadruped_msgs::msg",
  "GaitPattern",
  _GaitPattern__cdr_serialize,
  _GaitPattern__cdr_deserialize,
  _GaitPattern__get_serialized_size,
  _GaitPattern__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GaitPattern__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GaitPattern__callbacks,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__GaitPattern__get_type_hash,
  &quadruped_msgs__msg__GaitPattern__get_type_description,
  &quadruped_msgs__msg__GaitPattern__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace quadruped_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_quadruped_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<quadruped_msgs::msg::GaitPattern>()
{
  return &quadruped_msgs::msg::typesupport_fastrtps_cpp::_GaitPattern__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quadruped_msgs, msg, GaitPattern)() {
  return &quadruped_msgs::msg::typesupport_fastrtps_cpp::_GaitPattern__handle;
}

#ifdef __cplusplus
}
#endif
