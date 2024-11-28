// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SimpleBatteryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/simple_battery_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/simple_battery_status__struct.h"
#include "px4_msgs/msg/detail/simple_battery_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SimpleBatteryStatus__ros_msg_type = px4_msgs__msg__SimpleBatteryStatus;

static bool _SimpleBatteryStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SimpleBatteryStatus__ros_msg_type * ros_message = static_cast<const _SimpleBatteryStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: voltage_v
  {
    cdr << ros_message->voltage_v;
  }

  // Field name: voltage_filtered_v
  {
    cdr << ros_message->voltage_filtered_v;
  }

  // Field name: current_a
  {
    cdr << ros_message->current_a;
  }

  // Field name: current_filtered_a
  {
    cdr << ros_message->current_filtered_a;
  }

  // Field name: current_average_a
  {
    cdr << ros_message->current_average_a;
  }

  // Field name: discharged_mah
  {
    cdr << ros_message->discharged_mah;
  }

  // Field name: remaining
  {
    cdr << ros_message->remaining;
  }

  // Field name: scale
  {
    cdr << ros_message->scale;
  }

  // Field name: time_remaining_s
  {
    cdr << ros_message->time_remaining_s;
  }

  // Field name: cell_count
  {
    cdr << ros_message->cell_count;
  }

  return true;
}

static bool _SimpleBatteryStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SimpleBatteryStatus__ros_msg_type * ros_message = static_cast<_SimpleBatteryStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: voltage_v
  {
    cdr >> ros_message->voltage_v;
  }

  // Field name: voltage_filtered_v
  {
    cdr >> ros_message->voltage_filtered_v;
  }

  // Field name: current_a
  {
    cdr >> ros_message->current_a;
  }

  // Field name: current_filtered_a
  {
    cdr >> ros_message->current_filtered_a;
  }

  // Field name: current_average_a
  {
    cdr >> ros_message->current_average_a;
  }

  // Field name: discharged_mah
  {
    cdr >> ros_message->discharged_mah;
  }

  // Field name: remaining
  {
    cdr >> ros_message->remaining;
  }

  // Field name: scale
  {
    cdr >> ros_message->scale;
  }

  // Field name: time_remaining_s
  {
    cdr >> ros_message->time_remaining_s;
  }

  // Field name: cell_count
  {
    cdr >> ros_message->cell_count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SimpleBatteryStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimpleBatteryStatus__ros_msg_type * ros_message = static_cast<const _SimpleBatteryStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_v
  {
    size_t item_size = sizeof(ros_message->voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_filtered_v
  {
    size_t item_size = sizeof(ros_message->voltage_filtered_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_a
  {
    size_t item_size = sizeof(ros_message->current_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_filtered_a
  {
    size_t item_size = sizeof(ros_message->current_filtered_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_average_a
  {
    size_t item_size = sizeof(ros_message->current_average_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discharged_mah
  {
    size_t item_size = sizeof(ros_message->discharged_mah);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining
  {
    size_t item_size = sizeof(ros_message->remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale
  {
    size_t item_size = sizeof(ros_message->scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_remaining_s
  {
    size_t item_size = sizeof(ros_message->time_remaining_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_count
  {
    size_t item_size = sizeof(ros_message->cell_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SimpleBatteryStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SimpleBatteryStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SimpleBatteryStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: voltage_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: voltage_filtered_v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_filtered_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_average_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: discharged_mah
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remaining
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scale
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_remaining_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cell_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SimpleBatteryStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__SimpleBatteryStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SimpleBatteryStatus = {
  "px4_msgs::msg",
  "SimpleBatteryStatus",
  _SimpleBatteryStatus__cdr_serialize,
  _SimpleBatteryStatus__cdr_deserialize,
  _SimpleBatteryStatus__get_serialized_size,
  _SimpleBatteryStatus__max_serialized_size
};

static rosidl_message_type_support_t _SimpleBatteryStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimpleBatteryStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SimpleBatteryStatus)() {
  return &_SimpleBatteryStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
