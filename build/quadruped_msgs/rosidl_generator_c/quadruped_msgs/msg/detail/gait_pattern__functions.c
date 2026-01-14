// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/gait_pattern__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `foot1_step_position`
// Member `foot2_step_position`
// Member `foot3_step_position`
// Member `foot4_step_position`
// Member `com_position`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `predicted_states`
// Member `predicted_phases`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
quadruped_msgs__msg__GaitPattern__init(quadruped_msgs__msg__GaitPattern * msg)
{
  if (!msg) {
    return false;
  }
  // foot1_step_position
  if (!geometry_msgs__msg__Vector3__init(&msg->foot1_step_position)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // foot2_step_position
  if (!geometry_msgs__msg__Vector3__init(&msg->foot2_step_position)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // foot3_step_position
  if (!geometry_msgs__msg__Vector3__init(&msg->foot3_step_position)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // foot4_step_position
  if (!geometry_msgs__msg__Vector3__init(&msg->foot4_step_position)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // com_position
  if (!geometry_msgs__msg__Vector3__init(&msg->com_position)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // foot1_phase
  // foot2_phase
  // foot3_phase
  // foot4_phase
  // foot1_state
  // foot2_state
  // foot3_state
  // foot4_state
  // step_height
  // predicted_states
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->predicted_states, 0)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // predicted_phases
  if (!rosidl_runtime_c__float__Sequence__init(&msg->predicted_phases, 0)) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
    return false;
  }
  // prediction_stages
  // prediction_horizon
  // prediction_timestep
  return true;
}

void
quadruped_msgs__msg__GaitPattern__fini(quadruped_msgs__msg__GaitPattern * msg)
{
  if (!msg) {
    return;
  }
  // foot1_step_position
  geometry_msgs__msg__Vector3__fini(&msg->foot1_step_position);
  // foot2_step_position
  geometry_msgs__msg__Vector3__fini(&msg->foot2_step_position);
  // foot3_step_position
  geometry_msgs__msg__Vector3__fini(&msg->foot3_step_position);
  // foot4_step_position
  geometry_msgs__msg__Vector3__fini(&msg->foot4_step_position);
  // com_position
  geometry_msgs__msg__Vector3__fini(&msg->com_position);
  // foot1_phase
  // foot2_phase
  // foot3_phase
  // foot4_phase
  // foot1_state
  // foot2_state
  // foot3_state
  // foot4_state
  // step_height
  // predicted_states
  rosidl_runtime_c__int32__Sequence__fini(&msg->predicted_states);
  // predicted_phases
  rosidl_runtime_c__float__Sequence__fini(&msg->predicted_phases);
  // prediction_stages
  // prediction_horizon
  // prediction_timestep
}

bool
quadruped_msgs__msg__GaitPattern__are_equal(const quadruped_msgs__msg__GaitPattern * lhs, const quadruped_msgs__msg__GaitPattern * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // foot1_step_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot1_step_position), &(rhs->foot1_step_position)))
  {
    return false;
  }
  // foot2_step_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot2_step_position), &(rhs->foot2_step_position)))
  {
    return false;
  }
  // foot3_step_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot3_step_position), &(rhs->foot3_step_position)))
  {
    return false;
  }
  // foot4_step_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot4_step_position), &(rhs->foot4_step_position)))
  {
    return false;
  }
  // com_position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->com_position), &(rhs->com_position)))
  {
    return false;
  }
  // foot1_phase
  if (lhs->foot1_phase != rhs->foot1_phase) {
    return false;
  }
  // foot2_phase
  if (lhs->foot2_phase != rhs->foot2_phase) {
    return false;
  }
  // foot3_phase
  if (lhs->foot3_phase != rhs->foot3_phase) {
    return false;
  }
  // foot4_phase
  if (lhs->foot4_phase != rhs->foot4_phase) {
    return false;
  }
  // foot1_state
  if (lhs->foot1_state != rhs->foot1_state) {
    return false;
  }
  // foot2_state
  if (lhs->foot2_state != rhs->foot2_state) {
    return false;
  }
  // foot3_state
  if (lhs->foot3_state != rhs->foot3_state) {
    return false;
  }
  // foot4_state
  if (lhs->foot4_state != rhs->foot4_state) {
    return false;
  }
  // step_height
  if (lhs->step_height != rhs->step_height) {
    return false;
  }
  // predicted_states
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->predicted_states), &(rhs->predicted_states)))
  {
    return false;
  }
  // predicted_phases
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->predicted_phases), &(rhs->predicted_phases)))
  {
    return false;
  }
  // prediction_stages
  if (lhs->prediction_stages != rhs->prediction_stages) {
    return false;
  }
  // prediction_horizon
  if (lhs->prediction_horizon != rhs->prediction_horizon) {
    return false;
  }
  // prediction_timestep
  if (lhs->prediction_timestep != rhs->prediction_timestep) {
    return false;
  }
  return true;
}

bool
quadruped_msgs__msg__GaitPattern__copy(
  const quadruped_msgs__msg__GaitPattern * input,
  quadruped_msgs__msg__GaitPattern * output)
{
  if (!input || !output) {
    return false;
  }
  // foot1_step_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot1_step_position), &(output->foot1_step_position)))
  {
    return false;
  }
  // foot2_step_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot2_step_position), &(output->foot2_step_position)))
  {
    return false;
  }
  // foot3_step_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot3_step_position), &(output->foot3_step_position)))
  {
    return false;
  }
  // foot4_step_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot4_step_position), &(output->foot4_step_position)))
  {
    return false;
  }
  // com_position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->com_position), &(output->com_position)))
  {
    return false;
  }
  // foot1_phase
  output->foot1_phase = input->foot1_phase;
  // foot2_phase
  output->foot2_phase = input->foot2_phase;
  // foot3_phase
  output->foot3_phase = input->foot3_phase;
  // foot4_phase
  output->foot4_phase = input->foot4_phase;
  // foot1_state
  output->foot1_state = input->foot1_state;
  // foot2_state
  output->foot2_state = input->foot2_state;
  // foot3_state
  output->foot3_state = input->foot3_state;
  // foot4_state
  output->foot4_state = input->foot4_state;
  // step_height
  output->step_height = input->step_height;
  // predicted_states
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->predicted_states), &(output->predicted_states)))
  {
    return false;
  }
  // predicted_phases
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->predicted_phases), &(output->predicted_phases)))
  {
    return false;
  }
  // prediction_stages
  output->prediction_stages = input->prediction_stages;
  // prediction_horizon
  output->prediction_horizon = input->prediction_horizon;
  // prediction_timestep
  output->prediction_timestep = input->prediction_timestep;
  return true;
}

quadruped_msgs__msg__GaitPattern *
quadruped_msgs__msg__GaitPattern__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__GaitPattern * msg = (quadruped_msgs__msg__GaitPattern *)allocator.allocate(sizeof(quadruped_msgs__msg__GaitPattern), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadruped_msgs__msg__GaitPattern));
  bool success = quadruped_msgs__msg__GaitPattern__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadruped_msgs__msg__GaitPattern__destroy(quadruped_msgs__msg__GaitPattern * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadruped_msgs__msg__GaitPattern__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadruped_msgs__msg__GaitPattern__Sequence__init(quadruped_msgs__msg__GaitPattern__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__GaitPattern * data = NULL;

  if (size) {
    data = (quadruped_msgs__msg__GaitPattern *)allocator.zero_allocate(size, sizeof(quadruped_msgs__msg__GaitPattern), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadruped_msgs__msg__GaitPattern__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadruped_msgs__msg__GaitPattern__fini(&data[i - 1]);
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
quadruped_msgs__msg__GaitPattern__Sequence__fini(quadruped_msgs__msg__GaitPattern__Sequence * array)
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
      quadruped_msgs__msg__GaitPattern__fini(&array->data[i]);
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

quadruped_msgs__msg__GaitPattern__Sequence *
quadruped_msgs__msg__GaitPattern__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__GaitPattern__Sequence * array = (quadruped_msgs__msg__GaitPattern__Sequence *)allocator.allocate(sizeof(quadruped_msgs__msg__GaitPattern__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadruped_msgs__msg__GaitPattern__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadruped_msgs__msg__GaitPattern__Sequence__destroy(quadruped_msgs__msg__GaitPattern__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadruped_msgs__msg__GaitPattern__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadruped_msgs__msg__GaitPattern__Sequence__are_equal(const quadruped_msgs__msg__GaitPattern__Sequence * lhs, const quadruped_msgs__msg__GaitPattern__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadruped_msgs__msg__GaitPattern__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadruped_msgs__msg__GaitPattern__Sequence__copy(
  const quadruped_msgs__msg__GaitPattern__Sequence * input,
  quadruped_msgs__msg__GaitPattern__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadruped_msgs__msg__GaitPattern);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadruped_msgs__msg__GaitPattern * data =
      (quadruped_msgs__msg__GaitPattern *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadruped_msgs__msg__GaitPattern__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadruped_msgs__msg__GaitPattern__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadruped_msgs__msg__GaitPattern__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
