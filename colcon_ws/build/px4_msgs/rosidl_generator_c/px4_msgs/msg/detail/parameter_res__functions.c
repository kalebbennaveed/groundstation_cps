// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/ParameterRes.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/parameter_res__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__ParameterRes__init(px4_msgs__msg__ParameterRes * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // param_name
  // is_int32
  // value
  return true;
}

void
px4_msgs__msg__ParameterRes__fini(px4_msgs__msg__ParameterRes * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // param_name
  // is_int32
  // value
}

bool
px4_msgs__msg__ParameterRes__are_equal(const px4_msgs__msg__ParameterRes * lhs, const px4_msgs__msg__ParameterRes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // param_name
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->param_name[i] != rhs->param_name[i]) {
      return false;
    }
  }
  // is_int32
  if (lhs->is_int32 != rhs->is_int32) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__ParameterRes__copy(
  const px4_msgs__msg__ParameterRes * input,
  px4_msgs__msg__ParameterRes * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // param_name
  for (size_t i = 0; i < 16; ++i) {
    output->param_name[i] = input->param_name[i];
  }
  // is_int32
  output->is_int32 = input->is_int32;
  // value
  output->value = input->value;
  return true;
}

px4_msgs__msg__ParameterRes *
px4_msgs__msg__ParameterRes__create()
{
  px4_msgs__msg__ParameterRes * msg = (px4_msgs__msg__ParameterRes *)malloc(sizeof(px4_msgs__msg__ParameterRes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__ParameterRes));
  bool success = px4_msgs__msg__ParameterRes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__ParameterRes__destroy(px4_msgs__msg__ParameterRes * msg)
{
  if (msg) {
    px4_msgs__msg__ParameterRes__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__ParameterRes__Sequence__init(px4_msgs__msg__ParameterRes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__ParameterRes * data = NULL;
  if (size) {
    data = (px4_msgs__msg__ParameterRes *)calloc(size, sizeof(px4_msgs__msg__ParameterRes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__ParameterRes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__ParameterRes__fini(&data[i - 1]);
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
px4_msgs__msg__ParameterRes__Sequence__fini(px4_msgs__msg__ParameterRes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__ParameterRes__fini(&array->data[i]);
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

px4_msgs__msg__ParameterRes__Sequence *
px4_msgs__msg__ParameterRes__Sequence__create(size_t size)
{
  px4_msgs__msg__ParameterRes__Sequence * array = (px4_msgs__msg__ParameterRes__Sequence *)malloc(sizeof(px4_msgs__msg__ParameterRes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__ParameterRes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__ParameterRes__Sequence__destroy(px4_msgs__msg__ParameterRes__Sequence * array)
{
  if (array) {
    px4_msgs__msg__ParameterRes__Sequence__fini(array);
  }
  free(array);
}

bool
px4_msgs__msg__ParameterRes__Sequence__are_equal(const px4_msgs__msg__ParameterRes__Sequence * lhs, const px4_msgs__msg__ParameterRes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__ParameterRes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__ParameterRes__Sequence__copy(
  const px4_msgs__msg__ParameterRes__Sequence * input,
  px4_msgs__msg__ParameterRes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__ParameterRes);
    px4_msgs__msg__ParameterRes * data =
      (px4_msgs__msg__ParameterRes *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__ParameterRes__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__ParameterRes__fini(&data[i]);
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
    if (!px4_msgs__msg__ParameterRes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
