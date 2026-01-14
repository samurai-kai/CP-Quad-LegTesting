// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#include "quadruped_msgs/msg/detail/foot_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_type_hash_t *
quadruped_msgs__msg__FootStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x80, 0xda, 0x06, 0x35, 0xc2, 0xe9, 0xc2,
      0x21, 0x24, 0x5e, 0x91, 0x47, 0xef, 0x6a, 0x31,
      0x1f, 0x24, 0xc4, 0x13, 0x42, 0xf8, 0x48, 0xca,
      0xc2, 0xc0, 0xb5, 0x20, 0xbc, 0xd5, 0x70, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char quadruped_msgs__msg__FootStates__TYPE_NAME[] = "quadruped_msgs/msg/FootStates";

// Define type names, field names, and default values
static char quadruped_msgs__msg__FootStates__FIELD_NAME__foot1_state[] = "foot1_state";
static char quadruped_msgs__msg__FootStates__FIELD_NAME__foot2_state[] = "foot2_state";
static char quadruped_msgs__msg__FootStates__FIELD_NAME__foot3_state[] = "foot3_state";
static char quadruped_msgs__msg__FootStates__FIELD_NAME__foot4_state[] = "foot4_state";

static rosidl_runtime_c__type_description__Field quadruped_msgs__msg__FootStates__FIELDS[] = {
  {
    {quadruped_msgs__msg__FootStates__FIELD_NAME__foot1_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootStates__FIELD_NAME__foot2_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootStates__FIELD_NAME__foot3_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootStates__FIELD_NAME__foot4_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadruped_msgs__msg__FootStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadruped_msgs__msg__FootStates__TYPE_NAME, 29, 29},
      {quadruped_msgs__msg__FootStates__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# States for each foot (0 = Stance, 1 = Swing)\n"
  "int16 foot1_state\n"
  "int16 foot2_state\n"
  "int16 foot3_state\n"
  "int16 foot4_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadruped_msgs__msg__FootStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadruped_msgs__msg__FootStates__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadruped_msgs__msg__FootStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadruped_msgs__msg__FootStates__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
