// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/foot_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quadruped_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadruped_msgs/msg/detail/foot_states__struct.h"
#include "quadruped_msgs/msg/detail/foot_states__functions.h"
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


// forward declare type support functions


using _FootStates__ros_msg_type = quadruped_msgs__msg__FootStates;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_quadruped_msgs__msg__FootStates(
  const quadruped_msgs__msg__FootStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_deserialize_quadruped_msgs__msg__FootStates(
  eprosima::fastcdr::Cdr & cdr,
  quadruped_msgs__msg__FootStates * ros_message)
{
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

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_quadruped_msgs__msg__FootStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FootStates__ros_msg_type * ros_message = static_cast<const _FootStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_quadruped_msgs__msg__FootStates(
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

  // Field name: foot1_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot2_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot3_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot4_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadruped_msgs__msg__FootStates;
    is_plain =
      (
      offsetof(DataType, foot4_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
bool cdr_serialize_key_quadruped_msgs__msg__FootStates(
  const quadruped_msgs__msg__FootStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t get_serialized_size_key_quadruped_msgs__msg__FootStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FootStates__ros_msg_type * ros_message = static_cast<const _FootStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadruped_msgs
size_t max_serialized_size_key_quadruped_msgs__msg__FootStates(
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
  // Field name: foot1_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot2_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot3_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: foot4_state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadruped_msgs__msg__FootStates;
    is_plain =
      (
      offsetof(DataType, foot4_state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FootStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const quadruped_msgs__msg__FootStates * ros_message = static_cast<const quadruped_msgs__msg__FootStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_quadruped_msgs__msg__FootStates(ros_message, cdr);
}

static bool _FootStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  quadruped_msgs__msg__FootStates * ros_message = static_cast<quadruped_msgs__msg__FootStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_quadruped_msgs__msg__FootStates(cdr, ros_message);
}

static uint32_t _FootStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quadruped_msgs__msg__FootStates(
      untyped_ros_message, 0));
}

static size_t _FootStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quadruped_msgs__msg__FootStates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FootStates = {
  "quadruped_msgs::msg",
  "FootStates",
  _FootStates__cdr_serialize,
  _FootStates__cdr_deserialize,
  _FootStates__get_serialized_size,
  _FootStates__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FootStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FootStates,
  get_message_typesupport_handle_function,
  &quadruped_msgs__msg__FootStates__get_type_hash,
  &quadruped_msgs__msg__FootStates__get_type_description,
  &quadruped_msgs__msg__FootStates__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadruped_msgs, msg, FootStates)() {
  return &_FootStates__type_support;
}

#if defined(__cplusplus)
}
#endif
