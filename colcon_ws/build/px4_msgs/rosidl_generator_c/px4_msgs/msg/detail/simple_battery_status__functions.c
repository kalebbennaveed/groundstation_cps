// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SimpleBatteryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/simple_battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__SimpleBatteryStatus__init(px4_msgs__msg__SimpleBatteryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // voltage_v
  // voltage_filtered_v
  // current_a
  // current_filtered_a
  // current_average_a
  // discharged_mah
  // remaining
  // scale
  // time_remaining_s
  // cell_count
  return true;
}

void
px4_msgs__msg__SimpleBatteryStatus__fini(px4_msgs__msg__SimpleBatteryStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // voltage_v
  // voltage_filtered_v
  // current_a
  // current_filtered_a
  // current_average_a
  // discharged_mah
  // remaining
  // scale
  // time_remaining_s
  // cell_count
}

bool
px4_msgs__msg__SimpleBatteryStatus__are_equal(const px4_msgs__msg__SimpleBatteryStatus * lhs, const px4_msgs__msg__SimpleBatteryStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // voltage_v
  if (lhs->voltage_v != rhs->voltage_v) {
    return false;
  }
  // voltage_filtered_v
  if (lhs->voltage_filtered_v != rhs->voltage_filtered_v) {
    return false;
  }
  // current_a
  if (lhs->current_a != rhs->current_a) {
    return false;
  }
  // current_filtered_a
  if (lhs->current_filtered_a != rhs->current_filtered_a) {
    return false;
  }
  // current_average_a
  if (lhs->current_average_a != rhs->current_average_a) {
    return false;
  }
  // discharged_mah
  if (lhs->discharged_mah != rhs->discharged_mah) {
    return false;
  }
  // remaining
  if (lhs->remaining != rhs->remaining) {
    return false;
  }
  // scale
  if (lhs->scale != rhs->scale) {
    return false;
  }
  // time_remaining_s
  if (lhs->time_remaining_s != rhs->time_remaining_s) {
    return false;
  }
  // cell_count
  if (lhs->cell_count != rhs->cell_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SimpleBatteryStatus__copy(
  const px4_msgs__msg__SimpleBatteryStatus * input,
  px4_msgs__msg__SimpleBatteryStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // voltage_v
  output->voltage_v = input->voltage_v;
  // voltage_filtered_v
  output->voltage_filtered_v = input->voltage_filtered_v;
  // current_a
  output->current_a = input->current_a;
  // current_filtered_a
  output->current_filtered_a = input->current_filtered_a;
  // current_average_a
  output->current_average_a = input->current_average_a;
  // discharged_mah
  output->discharged_mah = input->discharged_mah;
  // remaining
  output->remaining = input->remaining;
  // scale
  output->scale = input->scale;
  // time_remaining_s
  output->time_remaining_s = input->time_remaining_s;
  // cell_count
  output->cell_count = input->cell_count;
  return true;
}

px4_msgs__msg__SimpleBatteryStatus *
px4_msgs__msg__SimpleBatteryStatus__create()
{
  px4_msgs__msg__SimpleBatteryStatus * msg = (px4_msgs__msg__SimpleBatteryStatus *)malloc(sizeof(px4_msgs__msg__SimpleBatteryStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SimpleBatteryStatus));
  bool success = px4_msgs__msg__SimpleBatteryStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SimpleBatteryStatus__destroy(px4_msgs__msg__SimpleBatteryStatus * msg)
{
  if (msg) {
    px4_msgs__msg__SimpleBatteryStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__SimpleBatteryStatus__Sequence__init(px4_msgs__msg__SimpleBatteryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__SimpleBatteryStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__SimpleBatteryStatus *)calloc(size, sizeof(px4_msgs__msg__SimpleBatteryStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SimpleBatteryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SimpleBatteryStatus__fini(&data[i - 1]);
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
px4_msgs__msg__SimpleBatteryStatus__Sequence__fini(px4_msgs__msg__SimpleBatteryStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__SimpleBatteryStatus__fini(&array->data[i]);
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

px4_msgs__msg__SimpleBatteryStatus__Sequence *
px4_msgs__msg__SimpleBatteryStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__SimpleBatteryStatus__Sequence * array = (px4_msgs__msg__SimpleBatteryStatus__Sequence *)malloc(sizeof(px4_msgs__msg__SimpleBatteryStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SimpleBatteryStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SimpleBatteryStatus__Sequence__destroy(px4_msgs__msg__SimpleBatteryStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__SimpleBatteryStatus__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__SimpleBatteryStatus__Sequence__are_equal(const px4_msgs__msg__SimpleBatteryStatus__Sequence * lhs, const px4_msgs__msg__SimpleBatteryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SimpleBatteryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SimpleBatteryStatus__Sequence__copy(
  const px4_msgs__msg__SimpleBatteryStatus__Sequence * input,
  px4_msgs__msg__SimpleBatteryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SimpleBatteryStatus);
    px4_msgs__msg__SimpleBatteryStatus * data =
      (px4_msgs__msg__SimpleBatteryStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SimpleBatteryStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SimpleBatteryStatus__fini(&data[i]);
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
    if (!px4_msgs__msg__SimpleBatteryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
