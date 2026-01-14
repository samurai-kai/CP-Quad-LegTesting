// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice

#include "quadruped_msgs/msg/detail/quadruped_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadruped_msgs
const rosidl_type_hash_t *
quadruped_msgs__msg__QuadrupedState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0x72, 0x19, 0x3a, 0x08, 0x5a, 0xcb, 0xef,
      0x38, 0xdf, 0xc9, 0x0d, 0x0c, 0x72, 0x66, 0x0e,
      0x65, 0x26, 0xf1, 0x7c, 0x6b, 0x6c, 0xa4, 0x72,
      0x7a, 0x9b, 0x9a, 0xaf, 0x35, 0x68, 0x0e, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char quadruped_msgs__msg__QuadrupedState__TYPE_NAME[] = "quadruped_msgs/msg/QuadrupedState";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p1[] = "p1";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p2[] = "p2";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p3[] = "p3";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p4[] = "p4";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__pc[] = "pc";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v1[] = "v1";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v2[] = "v2";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v3[] = "v3";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v4[] = "v4";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h1[] = "h1";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h2[] = "h2";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h3[] = "h3";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h4[] = "h4";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__joint_positions[] = "joint_positions";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__joint_velocities[] = "joint_velocities";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__joint_efforts[] = "joint_efforts";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__orientation[] = "orientation";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__angular_velocity[] = "angular_velocity";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__com_velocity[] = "com_velocity";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j1[] = "j1";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j2[] = "j2";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j3[] = "j3";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j4[] = "j4";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_1[] = "contact_1";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_2[] = "contact_2";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_3[] = "contact_3";
static char quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_4[] = "contact_4";

static rosidl_runtime_c__type_description__Field quadruped_msgs__msg__QuadrupedState__FIELDS[] = {
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p3, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__p4, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__pc, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v3, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__v4, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h3, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__h4, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__joint_positions, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__joint_velocities, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__joint_efforts, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__com_velocity, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j3, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__j4, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_3, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadruped_msgs__msg__QuadrupedState__FIELD_NAME__contact_4, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription quadruped_msgs__msg__QuadrupedState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadruped_msgs__msg__QuadrupedState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadruped_msgs__msg__QuadrupedState__TYPE_NAME, 33, 33},
      {quadruped_msgs__msg__QuadrupedState__FIELDS, 27, 27},
    },
    {quadruped_msgs__msg__QuadrupedState__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Foot positions in cartesian coordinates\n"
  "geometry_msgs/Point p1  # Front left foot position\n"
  "geometry_msgs/Point p2  # Front right foot position\n"
  "geometry_msgs/Point p3  # Rear left foot position\n"
  "geometry_msgs/Point p4  # Rear right foot position\n"
  "geometry_msgs/Point pc  # Center of mass position\n"
  "\n"
  "# Foot velocities\n"
  "geometry_msgs/Vector3 v1  # Front left foot velocity\n"
  "geometry_msgs/Vector3 v2  # Front right foot velocity\n"
  "geometry_msgs/Vector3 v3  # Rear left foot velocity\n"
  "geometry_msgs/Vector3 v4  # Rear right foot velocity\n"
  "\n"
  "geometry_msgs/Point h1  # Hip position 1\n"
  "geometry_msgs/Point h2  # Hip position 2\n"
  "geometry_msgs/Point h3  # Hip position 3\n"
  "geometry_msgs/Point h4  # Hip position 4\n"
  "\n"
  "# Joint states\n"
  "float64[] joint_positions  # Joint positions (8)\n"
  "float64[] joint_velocities # Joint velocities (8)\n"
  "float64[] joint_efforts   # Joint efforts (8)\n"
  "\n"
  "# IMU state\n"
  "geometry_msgs/Quaternion orientation  # Body orientation\n"
  "geometry_msgs/Vector3 angular_velocity  # Angular velocity\n"
  "\n"
  "# Center of mass velocity\n"
  "geometry_msgs/Vector3 com_velocity  # Center of mass velocity\n"
  "\n"
  "# Jacobians (stored as row-major arrays)\n"
  "float64[] j1  # Front left leg Jacobian (3x2=6 elements)\n"
  "float64[] j2  # Front right leg Jacobian (3x2=6 elements)\n"
  "float64[] j3  # Rear left leg Jacobian (3x2=6 elements)\n"
  "float64[] j4  # Rear right leg Jacobian (3x2=6 elements)\n"
  "\n"
  "# Contact states\n"
  "bool contact_1  # Front left foot contact state\n"
  "bool contact_2  # Front right foot contact state\n"
  "bool contact_3  # Rear left foot contact state\n"
  "bool contact_4  # Rear right foot contact state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadruped_msgs__msg__QuadrupedState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadruped_msgs__msg__QuadrupedState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1551, 1551},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadruped_msgs__msg__QuadrupedState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadruped_msgs__msg__QuadrupedState__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
