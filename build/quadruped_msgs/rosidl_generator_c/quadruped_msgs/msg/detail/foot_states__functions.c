// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice
#include "quadruped_msgs/msg/detail/foot_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
quadruped_msgs__msg__FootStates__init(quadruped_msgs__msg__FootStates * msg)
{
  if (!msg) {
    return false;
  }
  // foot1_state
  // foot2_state
  // foot3_state
  // foot4_state
  return true;
}

void
quadruped_msgs__msg__FootStates__fini(quadruped_msgs__msg__FootStates * msg)
{
  if (!msg) {
    return;
  }
  // foot1_state
  // foot2_state
  // foot3_state
  // foot4_state
}

bool
quadruped_msgs__msg__FootStates__are_equal(const quadruped_msgs__msg__FootStates * lhs, const quadruped_msgs__msg__FootStates * rhs)
{
  if (!lhs || !rhs) {
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
  return true;
}

bool
quadruped_msgs__msg__FootStates__copy(
  const quadruped_msgs__msg__FootStates * input,
  quadruped_msgs__msg__FootStates * output)
{
  if (!input || !output) {
    return false;
  }
  // foot1_state
  output->foot1_state = input->foot1_state;
  // foot2_state
  output->foot2_state = input->foot2_state;
  // foot3_state
  output->foot3_state = input->foot3_state;
  // foot4_state
  output->foot4_state = input->foot4_state;
  return true;
}

quadruped_msgs__msg__FootStates *
quadruped_msgs__msg__FootStates__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__FootStates * msg = (quadruped_msgs__msg__FootStates *)allocator.allocate(sizeof(quadruped_msgs__msg__FootStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadruped_msgs__msg__FootStates));
  bool success = quadruped_msgs__msg__FootStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadruped_msgs__msg__FootStates__destroy(quadruped_msgs__msg__FootStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadruped_msgs__msg__FootStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadruped_msgs__msg__FootStates__Sequence__init(quadruped_msgs__msg__FootStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__FootStates * data = NULL;

  if (size) {
    data = (quadruped_msgs__msg__FootStates *)allocator.zero_allocate(size, sizeof(quadruped_msgs__msg__FootStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadruped_msgs__msg__FootStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadruped_msgs__msg__FootStates__fini(&data[i - 1]);
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
quadruped_msgs__msg__FootStates__Sequence__fini(quadruped_msgs__msg__FootStates__Sequence * array)
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
      quadruped_msgs__msg__FootStates__fini(&array->data[i]);
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

quadruped_msgs__msg__FootStates__Sequence *
quadruped_msgs__msg__FootStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadruped_msgs__msg__FootStates__Sequence * array = (quadruped_msgs__msg__FootStates__Sequence *)allocator.allocate(sizeof(quadruped_msgs__msg__FootStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadruped_msgs__msg__FootStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadruped_msgs__msg__FootStates__Sequence__destroy(quadruped_msgs__msg__FootStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadruped_msgs__msg__FootStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadruped_msgs__msg__FootStates__Sequence__are_equal(const quadruped_msgs__msg__FootStates__Sequence * lhs, const quadruped_msgs__msg__FootStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadruped_msgs__msg__FootStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadruped_msgs__msg__FootStates__Sequence__copy(
  const quadruped_msgs__msg__FootStates__Sequence * input,
  quadruped_msgs__msg__FootStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadruped_msgs__msg__FootStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadruped_msgs__msg__FootStates * data =
      (quadruped_msgs__msg__FootStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadruped_msgs__msg__FootStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadruped_msgs__msg__FootStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadruped_msgs__msg__FootStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
