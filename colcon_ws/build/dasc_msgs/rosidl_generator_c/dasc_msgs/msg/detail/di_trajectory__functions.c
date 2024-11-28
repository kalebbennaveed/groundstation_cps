// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice
#include "dasc_msgs/msg/detail/di_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twists`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `accelerations`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
dasc_msgs__msg__DITrajectory__init(dasc_msgs__msg__DITrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dasc_msgs__msg__DITrajectory__fini(msg);
    return false;
  }
  // dt
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    dasc_msgs__msg__DITrajectory__fini(msg);
    return false;
  }
  // twists
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->twists, 0)) {
    dasc_msgs__msg__DITrajectory__fini(msg);
    return false;
  }
  // accelerations
  if (!geometry_msgs__msg__Accel__Sequence__init(&msg->accelerations, 0)) {
    dasc_msgs__msg__DITrajectory__fini(msg);
    return false;
  }
  return true;
}

void
dasc_msgs__msg__DITrajectory__fini(dasc_msgs__msg__DITrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // dt
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
  // twists
  geometry_msgs__msg__Twist__Sequence__fini(&msg->twists);
  // accelerations
  geometry_msgs__msg__Accel__Sequence__fini(&msg->accelerations);
}

bool
dasc_msgs__msg__DITrajectory__are_equal(const dasc_msgs__msg__DITrajectory * lhs, const dasc_msgs__msg__DITrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // dt
  if (lhs->dt != rhs->dt) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // twists
  if (!geometry_msgs__msg__Twist__Sequence__are_equal(
      &(lhs->twists), &(rhs->twists)))
  {
    return false;
  }
  // accelerations
  if (!geometry_msgs__msg__Accel__Sequence__are_equal(
      &(lhs->accelerations), &(rhs->accelerations)))
  {
    return false;
  }
  return true;
}

bool
dasc_msgs__msg__DITrajectory__copy(
  const dasc_msgs__msg__DITrajectory * input,
  dasc_msgs__msg__DITrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // dt
  output->dt = input->dt;
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // twists
  if (!geometry_msgs__msg__Twist__Sequence__copy(
      &(input->twists), &(output->twists)))
  {
    return false;
  }
  // accelerations
  if (!geometry_msgs__msg__Accel__Sequence__copy(
      &(input->accelerations), &(output->accelerations)))
  {
    return false;
  }
  return true;
}

dasc_msgs__msg__DITrajectory *
dasc_msgs__msg__DITrajectory__create()
{
  dasc_msgs__msg__DITrajectory * msg = (dasc_msgs__msg__DITrajectory *)malloc(sizeof(dasc_msgs__msg__DITrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dasc_msgs__msg__DITrajectory));
  bool success = dasc_msgs__msg__DITrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dasc_msgs__msg__DITrajectory__destroy(dasc_msgs__msg__DITrajectory * msg)
{
  if (msg) {
    dasc_msgs__msg__DITrajectory__fini(msg);
  }
  free(msg);
}


bool
dasc_msgs__msg__DITrajectory__Sequence__init(dasc_msgs__msg__DITrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dasc_msgs__msg__DITrajectory * data = NULL;
  if (size) {
    data = (dasc_msgs__msg__DITrajectory *)calloc(size, sizeof(dasc_msgs__msg__DITrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dasc_msgs__msg__DITrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dasc_msgs__msg__DITrajectory__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dasc_msgs__msg__DITrajectory__Sequence__fini(dasc_msgs__msg__DITrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dasc_msgs__msg__DITrajectory__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dasc_msgs__msg__DITrajectory__Sequence *
dasc_msgs__msg__DITrajectory__Sequence__create(size_t size)
{
  dasc_msgs__msg__DITrajectory__Sequence * array = (dasc_msgs__msg__DITrajectory__Sequence *)malloc(sizeof(dasc_msgs__msg__DITrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dasc_msgs__msg__DITrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dasc_msgs__msg__DITrajectory__Sequence__destroy(dasc_msgs__msg__DITrajectory__Sequence * array)
{
  if (array) {
    dasc_msgs__msg__DITrajectory__Sequence__fini(array);
  }
  free(array);
}

bool
dasc_msgs__msg__DITrajectory__Sequence__are_equal(const dasc_msgs__msg__DITrajectory__Sequence * lhs, const dasc_msgs__msg__DITrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dasc_msgs__msg__DITrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dasc_msgs__msg__DITrajectory__Sequence__copy(
  const dasc_msgs__msg__DITrajectory__Sequence * input,
  dasc_msgs__msg__DITrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dasc_msgs__msg__DITrajectory);
    dasc_msgs__msg__DITrajectory * data =
      (dasc_msgs__msg__DITrajectory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dasc_msgs__msg__DITrajectory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dasc_msgs__msg__DITrajectory__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dasc_msgs__msg__DITrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
