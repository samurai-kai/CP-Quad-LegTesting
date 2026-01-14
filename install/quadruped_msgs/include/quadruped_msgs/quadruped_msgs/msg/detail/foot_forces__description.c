// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadruped_msgs:msg/FootForces.idl
// generated code does not contain a copyright notice

#include "quadruped_msgs/msg/detail/foot_forces__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_type_hash_t *
quadruped_msgs__msg__FootForces__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0x26, 0xd1, 0x7e, 0x3b, 0x9d, 0x5d, 0x14,
      0x4b, 0x22, 0x5b, 0x39, 0x0d, 0x10, 0x76, 0xf0,
      0x1b, 0x37, 0xda, 0x22, 0x7e, 0x43, 0xd0, 0xf7,
      0x02, 0x2a, 0xf2, 0xb0, 0xa9, 0xb4, 0x67, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char quadruped_msgs__msg__FootForces__TYPE_NAME[] = "quadruped_msgs/msg/FootForces";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char quadruped_msgs__msg__FootForces__FIELD_NAME__foot1_force[] = "foot1_force";
static char quadruped_msgs__msg__FootForces__FIELD_NAME__foot2_force[] = "foot2_force";
static char quadruped_msgs__msg__FootForces__FIELD_NAME__foot3_force[] = "foot3_force";
static char quadruped_msgs__msg__FootForces__FIELD_NAME__foot4_force[] = "foot4_force";
static char quadruped_msgs__msg__FootForces__FIELD_NAME__total_force[] = "total_force";

static rosidl_runtime_c__type_description__Field quadruped_msgs__msg__FootForces__FIELDS[] = {
  {
    {quadruped_msgs__msg__FootForces__FIELD_NAME__foot1_force, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootForces__FIELD_NAME__foot2_force, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootForces__FIELD_NAME__foot3_force, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootForces__FIELD_NAME__foot4_force, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__FootForces__FIELD_NAME__total_force, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription quadruped_msgs__msg__FootForces__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadruped_msgs__msg__FootForces__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadruped_msgs__msg__FootForces__TYPE_NAME, 29, 29},
      {quadruped_msgs__msg__FootForces__FIELDS, 5, 5},
    },
    {quadruped_msgs__msg__FootForces__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message to hold force commands for each foot\n"
  "# Each foot has a 3D force vector (x, y, z)\n"
  "\n"
  "# Force vectors (N) for each foot in the foot frame\n"
  "# Positive z is pushing the foot down\n"
  "geometry_msgs/Vector3 foot1_force  # Front left\n"
  "geometry_msgs/Vector3 foot2_force  # Front right\n"
  "geometry_msgs/Vector3 foot3_force  # Rear left\n"
  "geometry_msgs/Vector3 foot4_force  # Rear right\n"
  "\n"
  "# Sum of all foot forces\n"
  "geometry_msgs/Vector3 total_force";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadruped_msgs__msg__FootForces__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadruped_msgs__msg__FootForces__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 433, 433},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadruped_msgs__msg__FootForces__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadruped_msgs__msg__FootForces__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
