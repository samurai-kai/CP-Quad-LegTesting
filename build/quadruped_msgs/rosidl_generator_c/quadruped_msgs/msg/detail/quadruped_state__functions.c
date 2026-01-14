// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/quadruped_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `p1`
// Member `p2`
// Member `p3`
// Member `p4`
// Member `pc`
// Member `h1`
// Member `h2`
// Member `h3`
// Member `h4`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `v1`
// Member `v2`
// Member `v3`
// Member `v4`
// Member `angular_velocity`
// Member `com_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `joint_positions`
// Member `joint_velocities`
// Member `joint_efforts`
// Member `j1`
// Member `j2`
// Member `j3`
// Member `j4`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
quadruped_msgs__msg__QuadrupedState__init(quadruped_msgs__msg__QuadrupedState * msg)
{
  if (!msg) {
    return false;
  }
  // p1
  if (!geometry_msgs__msg__Point__init(&msg->p1)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // p2
  if (!geometry_msgs__msg__Point__init(&msg->p2)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // p3
  if (!geometry_msgs__msg__Point__init(&msg->p3)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // p4
  if (!geometry_msgs__msg__Point__init(&msg->p4)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // pc
  if (!geometry_msgs__msg__Point__init(&msg->pc)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // v1
  if (!geometry_msgs__msg__Vector3__init(&msg->v1)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // v2
  if (!geometry_msgs__msg__Vector3__init(&msg->v2)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // v3
  if (!geometry_msgs__msg__Vector3__init(&msg->v3)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // v4
  if (!geometry_msgs__msg__Vector3__init(&msg->v4)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // h1
  if (!geometry_msgs__msg__Point__init(&msg->h1)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // h2
  if (!geometry_msgs__msg__Point__init(&msg->h2)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // h3
  if (!geometry_msgs__msg__Point__init(&msg->h3)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // h4
  if (!geometry_msgs__msg__Point__init(&msg->h4)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_positions, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_velocities, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // joint_efforts
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_efforts, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // com_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->com_velocity)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // j1
  if (!rosidl_runtime_c__double__Sequence__init(&msg->j1, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // j2
  if (!rosidl_runtime_c__double__Sequence__init(&msg->j2, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // j3
  if (!rosidl_runtime_c__double__Sequence__init(&msg->j3, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // j4
  if (!rosidl_runtime_c__double__Sequence__init(&msg->j4, 0)) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
    return false;
  }
  // contact_1
  // contact_2
  // contact_3
  // contact_4
  return true;
}

void
quadruped_msgs__msg__QuadrupedState__fini(quadruped_msgs__msg__QuadrupedState * msg)
{
  if (!msg) {
    return;
  }
  // p1
  geometry_msgs__msg__Point__fini(&msg->p1);
  // p2
  geometry_msgs__msg__Point__fini(&msg->p2);
  // p3
  geometry_msgs__msg__Point__fini(&msg->p3);
  // p4
  geometry_msgs__msg__Point__fini(&msg->p4);
  // pc
  geometry_msgs__msg__Point__fini(&msg->pc);
  // v1
  geometry_msgs__msg__Vector3__fini(&msg->v1);
  // v2
  geometry_msgs__msg__Vector3__fini(&msg->v2);
  // v3
  geometry_msgs__msg__Vector3__fini(&msg->v3);
  // v4
  geometry_msgs__msg__Vector3__fini(&msg->v4);
  // h1
  geometry_msgs__msg__Point__fini(&msg->h1);
  // h2
  geometry_msgs__msg__Point__fini(&msg->h2);
  // h3
  geometry_msgs__msg__Point__fini(&msg->h3);
  // h4
  geometry_msgs__msg__Point__fini(&msg->h4);
  // joint_positions
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_positions);
  // joint_velocities
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_velocities);
  // joint_efforts
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_efforts);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // com_velocity
  geometry_msgs__msg__Vector3__fini(&msg->com_velocity);
  // j1
  rosidl_runtime_c__double__Sequence__fini(&msg->j1);
  // j2
  rosidl_runtime_c__double__Sequence__fini(&msg->j2);
  // j3
  rosidl_runtime_c__double__Sequence__fini(&msg->j3);
  // j4
  rosidl_runtime_c__double__Sequence__fini(&msg->j4);
  // contact_1
  // contact_2
  // contact_3
  // contact_4
}

bool
quadruped_msgs__msg__QuadrupedState__are_equal(const quadruped_msgs__msg__QuadrupedState * lhs, const quadruped_msgs__msg__QuadrupedState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p1
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->p1), &(rhs->p1)))
  {
    return false;
  }
  // p2
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->p2), &(rhs->p2)))
  {
    return false;
  }
  // p3
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->p3), &(rhs->p3)))
  {
    return false;
  }
  // p4
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->p4), &(rhs->p4)))
  {
    return false;
  }
  // pc
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pc), &(rhs->pc)))
  {
    return false;
  }
  // v1
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v1), &(rhs->v1)))
  {
    return false;
  }
  // v2
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v2), &(rhs->v2)))
  {
    return false;
  }
  // v3
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v3), &(rhs->v3)))
  {
    return false;
  }
  // v4
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->v4), &(rhs->v4)))
  {
    return false;
  }
  // h1
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->h1), &(rhs->h1)))
  {
    return false;
  }
  // h2
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->h2), &(rhs->h2)))
  {
    return false;
  }
  // h3
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->h3), &(rhs->h3)))
  {
    return false;
  }
  // h4
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->h4), &(rhs->h4)))
  {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_positions), &(rhs->joint_positions)))
  {
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_velocities), &(rhs->joint_velocities)))
  {
    return false;
  }
  // joint_efforts
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_efforts), &(rhs->joint_efforts)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // com_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->com_velocity), &(rhs->com_velocity)))
  {
    return false;
  }
  // j1
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->j1), &(rhs->j1)))
  {
    return false;
  }
  // j2
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->j2), &(rhs->j2)))
  {
    return false;
  }
  // j3
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->j3), &(rhs->j3)))
  {
    return false;
  }
  // j4
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->j4), &(rhs->j4)))
  {
    return false;
  }
  // contact_1
  if (lhs->contact_1 != rhs->contact_1) {
    return false;
  }
  // contact_2
  if (lhs->contact_2 != rhs->contact_2) {
    return false;
  }
  // contact_3
  if (lhs->contact_3 != rhs->contact_3) {
    return false;
  }
  // contact_4
  if (lhs->contact_4 != rhs->contact_4) {
    return false;
  }
  return true;
}

bool
quadruped_msgs__msg__QuadrupedState__copy(
  const quadruped_msgs__msg__QuadrupedState * input,
  quadruped_msgs__msg__QuadrupedState * output)
{
  if (!input || !output) {
    return false;
  }
  // p1
  if (!geometry_msgs__msg__Point__copy(
      &(input->p1), &(output->p1)))
  {
    return false;
  }
  // p2
  if (!geometry_msgs__msg__Point__copy(
      &(input->p2), &(output->p2)))
  {
    return false;
  }
  // p3
  if (!geometry_msgs__msg__Point__copy(
      &(input->p3), &(output->p3)))
  {
    return false;
  }
  // p4
  if (!geometry_msgs__msg__Point__copy(
      &(input->p4), &(output->p4)))
  {
    return false;
  }
  // pc
  if (!geometry_msgs__msg__Point__copy(
      &(input->pc), &(output->pc)))
  {
    return false;
  }
  // v1
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v1), &(output->v1)))
  {
    return false;
  }
  // v2
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v2), &(output->v2)))
  {
    return false;
  }
  // v3
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v3), &(output->v3)))
  {
    return false;
  }
  // v4
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->v4), &(output->v4)))
  {
    return false;
  }
  // h1
  if (!geometry_msgs__msg__Point__copy(
      &(input->h1), &(output->h1)))
  {
    return false;
  }
  // h2
  if (!geometry_msgs__msg__Point__copy(
      &(input->h2), &(output->h2)))
  {
    return false;
  }
  // h3
  if (!geometry_msgs__msg__Point__copy(
      &(input->h3), &(output->h3)))
  {
    return false;
  }
  // h4
  if (!geometry_msgs__msg__Point__copy(
      &(input->h4), &(output->h4)))
  {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_positions), &(output->joint_positions)))
  {
    return false;
  }
  // joint_velocities
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_velocities), &(output->joint_velocities)))
  {
    return false;
  }
  // joint_efforts
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_efforts), &(output->joint_efforts)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // com_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->com_velocity), &(output->com_velocity)))
  {
    return false;
  }
  // j1
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->j1), &(output->j1)))
  {
    return false;
  }
  // j2
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->j2), &(output->j2)))
  {
    return false;
  }
  // j3
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->j3), &(output->j3)))
  {
    return false;
  }
  // j4
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->j4), &(output->j4)))
  {
    return false;
  }
  // contact_1
  output->contact_1 = input->contact_1;
  // contact_2
  output->contact_2 = input->contact_2;
  // contact_3
  output->contact_3 = input->contact_3;
  // contact_4
  output->contact_4 = input->contact_4;
  return true;
}

quadruped_msgs__msg__QuadrupedState *
quadruped_msgs__msg__QuadrupedState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__QuadrupedState * msg = (quadruped_msgs__msg__QuadrupedState *)allocator.allocate(sizeof(quadruped_msgs__msg__QuadrupedState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadruped_msgs__msg__QuadrupedState));
  bool success = quadruped_msgs__msg__QuadrupedState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadruped_msgs__msg__QuadrupedState__destroy(quadruped_msgs__msg__QuadrupedState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadruped_msgs__msg__QuadrupedState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadruped_msgs__msg__QuadrupedState__Sequence__init(quadruped_msgs__msg__QuadrupedState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__QuadrupedState * data = NULL;

  if (size) {
    data = (quadruped_msgs__msg__QuadrupedState *)allocator.zero_allocate(size, sizeof(quadruped_msgs__msg__QuadrupedState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadruped_msgs__msg__QuadrupedState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadruped_msgs__msg__QuadrupedState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quadruped_msgs__msg__QuadrupedState__Sequence__fini(quadruped_msgs__msg__QuadrupedState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quadruped_msgs__msg__QuadrupedState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quadruped_msgs__msg__QuadrupedState__Sequence *
quadruped_msgs__msg__QuadrupedState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__QuadrupedState__Sequence * array = (quadruped_msgs__msg__QuadrupedState__Sequence *)allocator.allocate(sizeof(quadruped_msgs__msg__QuadrupedState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadruped_msgs__msg__QuadrupedState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadruped_msgs__msg__QuadrupedState__Sequence__destroy(quadruped_msgs__msg__QuadrupedState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadruped_msgs__msg__QuadrupedState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadruped_msgs__msg__QuadrupedState__Sequence__are_equal(const quadruped_msgs__msg__QuadrupedState__Sequence * lhs, const quadruped_msgs__msg__QuadrupedState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadruped_msgs__msg__QuadrupedState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadruped_msgs__msg__QuadrupedState__Sequence__copy(
  const quadruped_msgs__msg__QuadrupedState__Sequence * input,
  quadruped_msgs__msg__QuadrupedState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadruped_msgs__msg__QuadrupedState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadruped_msgs__msg__QuadrupedState * data =
      (quadruped_msgs__msg__QuadrupedState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadruped_msgs__msg__QuadrupedState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadruped_msgs__msg__QuadrupedState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadruped_msgs__msg__QuadrupedState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
