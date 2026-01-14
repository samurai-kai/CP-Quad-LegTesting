// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadruped_msgs:msg/FootForces.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/foot_forces__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `foot1_force`
// Member `foot2_force`
// Member `foot3_force`
// Member `foot4_force`
// Member `total_force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
quadruped_msgs__msg__FootForces__init(quadruped_msgs__msg__FootForces * msg)
{
  if (!msg) {
    return false;
  }
  // foot1_force
  if (!geometry_msgs__msg__Vector3__init(&msg->foot1_force)) {
    quadruped_msgs__msg__FootForces__fini(msg);
    return false;
  }
  // foot2_force
  if (!geometry_msgs__msg__Vector3__init(&msg->foot2_force)) {
    quadruped_msgs__msg__FootForces__fini(msg);
    return false;
  }
  // foot3_force
  if (!geometry_msgs__msg__Vector3__init(&msg->foot3_force)) {
    quadruped_msgs__msg__FootForces__fini(msg);
    return false;
  }
  // foot4_force
  if (!geometry_msgs__msg__Vector3__init(&msg->foot4_force)) {
    quadruped_msgs__msg__FootForces__fini(msg);
    return false;
  }
  // total_force
  if (!geometry_msgs__msg__Vector3__init(&msg->total_force)) {
    quadruped_msgs__msg__FootForces__fini(msg);
    return false;
  }
  return true;
}

void
quadruped_msgs__msg__FootForces__fini(quadruped_msgs__msg__FootForces * msg)
{
  if (!msg) {
    return;
  }
  // foot1_force
  geometry_msgs__msg__Vector3__fini(&msg->foot1_force);
  // foot2_force
  geometry_msgs__msg__Vector3__fini(&msg->foot2_force);
  // foot3_force
  geometry_msgs__msg__Vector3__fini(&msg->foot3_force);
  // foot4_force
  geometry_msgs__msg__Vector3__fini(&msg->foot4_force);
  // total_force
  geometry_msgs__msg__Vector3__fini(&msg->total_force);
}

bool
quadruped_msgs__msg__FootForces__are_equal(const quadruped_msgs__msg__FootForces * lhs, const quadruped_msgs__msg__FootForces * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // foot1_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot1_force), &(rhs->foot1_force)))
  {
    return false;
  }
  // foot2_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot2_force), &(rhs->foot2_force)))
  {
    return false;
  }
  // foot3_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot3_force), &(rhs->foot3_force)))
  {
    return false;
  }
  // foot4_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot4_force), &(rhs->foot4_force)))
  {
    return false;
  }
  // total_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->total_force), &(rhs->total_force)))
  {
    return false;
  }
  return true;
}

bool
quadruped_msgs__msg__FootForces__copy(
  const quadruped_msgs__msg__FootForces * input,
  quadruped_msgs__msg__FootForces * output)
{
  if (!input || !output) {
    return false;
  }
  // foot1_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot1_force), &(output->foot1_force)))
  {
    return false;
  }
  // foot2_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot2_force), &(output->foot2_force)))
  {
    return false;
  }
  // foot3_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot3_force), &(output->foot3_force)))
  {
    return false;
  }
  // foot4_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot4_force), &(output->foot4_force)))
  {
    return false;
  }
  // total_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->total_force), &(output->total_force)))
  {
    return false;
  }
  return true;
}

quadruped_msgs__msg__FootForces *
quadruped_msgs__msg__FootForces__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__FootForces * msg = (quadruped_msgs__msg__FootForces *)allocator.allocate(sizeof(quadruped_msgs__msg__FootForces), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadruped_msgs__msg__FootForces));
  bool success = quadruped_msgs__msg__FootForces__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadruped_msgs__msg__FootForces__destroy(quadruped_msgs__msg__FootForces * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadruped_msgs__msg__FootForces__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadruped_msgs__msg__FootForces__Sequence__init(quadruped_msgs__msg__FootForces__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__FootForces * data = NULL;

  if (size) {
    data = (quadruped_msgs__msg__FootForces *)allocator.zero_allocate(size, sizeof(quadruped_msgs__msg__FootForces), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadruped_msgs__msg__FootForces__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadruped_msgs__msg__FootForces__fini(&data[i - 1]);
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
quadruped_msgs__msg__FootForces__Sequence__fini(quadruped_msgs__msg__FootForces__Sequence * array)
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
      quadruped_msgs__msg__FootForces__fini(&array->data[i]);
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

quadruped_msgs__msg__FootForces__Sequence *
quadruped_msgs__msg__FootForces__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__FootForces__Sequence * array = (quadruped_msgs__msg__FootForces__Sequence *)allocator.allocate(sizeof(quadruped_msgs__msg__FootForces__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadruped_msgs__msg__FootForces__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadruped_msgs__msg__FootForces__Sequence__destroy(quadruped_msgs__msg__FootForces__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadruped_msgs__msg__FootForces__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadruped_msgs__msg__FootForces__Sequence__are_equal(const quadruped_msgs__msg__FootForces__Sequence * lhs, const quadruped_msgs__msg__FootForces__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadruped_msgs__msg__FootForces__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadruped_msgs__msg__FootForces__Sequence__copy(
  const quadruped_msgs__msg__FootForces__Sequence * input,
  quadruped_msgs__msg__FootForces__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadruped_msgs__msg__FootForces);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadruped_msgs__msg__FootForces * data =
      (quadruped_msgs__msg__FootForces *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadruped_msgs__msg__FootForces__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadruped_msgs__msg__FootForces__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadruped_msgs__msg__FootForces__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
