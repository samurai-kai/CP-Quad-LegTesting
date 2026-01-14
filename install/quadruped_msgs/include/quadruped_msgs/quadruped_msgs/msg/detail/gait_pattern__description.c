// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice

#include "quadruped_msgs/msg/detail/gait_pattern__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_type_hash_t *
quadruped_msgs__msg__GaitPattern__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x95, 0x46, 0x26, 0x31, 0xdf, 0x48, 0x68,
      0x29, 0xfe, 0x43, 0x9b, 0xb9, 0x66, 0x93, 0x65,
      0x6d, 0xe9, 0x33, 0xbf, 0xad, 0x99, 0xfe, 0x31,
      0xb2, 0x43, 0x86, 0x8d, 0x95, 0x75, 0xdc, 0x4e,
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

static char quadruped_msgs__msg__GaitPattern__TYPE_NAME[] = "quadruped_msgs/msg/GaitPattern";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot1_step_position[] = "foot1_step_position";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot2_step_position[] = "foot2_step_position";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot3_step_position[] = "foot3_step_position";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot4_step_position[] = "foot4_step_position";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__com_position[] = "com_position";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot1_phase[] = "foot1_phase";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot2_phase[] = "foot2_phase";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot3_phase[] = "foot3_phase";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot4_phase[] = "foot4_phase";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot1_state[] = "foot1_state";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot2_state[] = "foot2_state";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot3_state[] = "foot3_state";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot4_state[] = "foot4_state";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__step_height[] = "step_height";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__predicted_states[] = "predicted_states";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__predicted_phases[] = "predicted_phases";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__prediction_stages[] = "prediction_stages";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__prediction_horizon[] = "prediction_horizon";
static char quadruped_msgs__msg__GaitPattern__FIELD_NAME__prediction_timestep[] = "prediction_timestep";

static rosidl_runtime_c__type_description__Field quadruped_msgs__msg__GaitPattern__FIELDS[] = {
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot1_step_position, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot2_step_position, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot3_step_position, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot4_step_position, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__com_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot1_phase, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot2_phase, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot3_phase, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot4_phase, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot1_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot2_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot3_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__foot4_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__step_height, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__predicted_states, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__predicted_phases, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__prediction_stages, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__prediction_horizon, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__GaitPattern__FIELD_NAME__prediction_timestep, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription quadruped_msgs__msg__GaitPattern__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadruped_msgs__msg__GaitPattern__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadruped_msgs__msg__GaitPattern__TYPE_NAME, 30, 30},
      {quadruped_msgs__msg__GaitPattern__FIELDS, 19, 19},
    },
    {quadruped_msgs__msg__GaitPattern__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Desired foot impact locations\n"
  "geometry_msgs/Vector3 foot1_step_position  # x, y, z in meters\n"
  "geometry_msgs/Vector3 foot2_step_position\n"
  "geometry_msgs/Vector3 foot3_step_position\n"
  "geometry_msgs/Vector3 foot4_step_position\n"
  "\n"
  "# Desired COM location\n"
  "geometry_msgs/Vector3 com_position  # x, y, z in meters\n"
  "\n"
  "# Phases for each foot (0.0 to 1.0)\n"
  "float32 foot1_phase\n"
  "float32 foot2_phase\n"
  "float32 foot3_phase\n"
  "float32 foot4_phase\n"
  "\n"
  "# States for each foot\n"
  "int32 foot1_state\n"
  "int32 foot2_state\n"
  "int32 foot3_state\n"
  "int32 foot4_state\n"
  "\n"
  "# Step height parameter\n"
  "float32 step_height\n"
  "\n"
  "# Prediction arrays (flattened 2D arrays)\n"
  "# Format: [foot1_stage1, foot1_stage2, ..., foot2_stage1, ..., foot4_stageN]\n"
  "int32[] predicted_states\n"
  "float32[] predicted_phases\n"
  "\n"
  "# Prediction metadata\n"
  "int32 prediction_stages\n"
  "float32 prediction_horizon\n"
  "float32 prediction_timestep";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadruped_msgs__msg__GaitPattern__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadruped_msgs__msg__GaitPattern__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 832, 832},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadruped_msgs__msg__GaitPattern__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadruped_msgs__msg__GaitPattern__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
