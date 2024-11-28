// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dasc_msgs/msg/detail/di_trajectory__rosidl_typesupport_introspection_c.h"
#include "dasc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dasc_msgs/msg/detail/di_trajectory__functions.h"
#include "dasc_msgs/msg/detail/di_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twists`
#include "geometry_msgs/msg/twist.h"
// Member `twists`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `accelerations`
#include "geometry_msgs/msg/accel.h"
// Member `accelerations`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dasc_msgs__msg__DITrajectory__init(message_memory);
}

void DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_fini_function(void * message_memory)
{
  dasc_msgs__msg__DITrajectory__fini(message_memory);
}

size_t DITrajectory__rosidl_typesupport_introspection_c__size_function__Pose__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * DITrajectory__rosidl_typesupport_introspection_c__get_const_function__Pose__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DITrajectory__rosidl_typesupport_introspection_c__get_function__Pose__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DITrajectory__rosidl_typesupport_introspection_c__resize_function__Pose__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t DITrajectory__rosidl_typesupport_introspection_c__size_function__Twist__twists(
  const void * untyped_member)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return member->size;
}

const void * DITrajectory__rosidl_typesupport_introspection_c__get_const_function__Twist__twists(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DITrajectory__rosidl_typesupport_introspection_c__get_function__Twist__twists(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DITrajectory__rosidl_typesupport_introspection_c__resize_function__Twist__twists(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  geometry_msgs__msg__Twist__Sequence__fini(member);
  return geometry_msgs__msg__Twist__Sequence__init(member, size);
}

size_t DITrajectory__rosidl_typesupport_introspection_c__size_function__Accel__accelerations(
  const void * untyped_member)
{
  const geometry_msgs__msg__Accel__Sequence * member =
    (const geometry_msgs__msg__Accel__Sequence *)(untyped_member);
  return member->size;
}

const void * DITrajectory__rosidl_typesupport_introspection_c__get_const_function__Accel__accelerations(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Accel__Sequence * member =
    (const geometry_msgs__msg__Accel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DITrajectory__rosidl_typesupport_introspection_c__get_function__Accel__accelerations(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Accel__Sequence * member =
    (geometry_msgs__msg__Accel__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DITrajectory__rosidl_typesupport_introspection_c__resize_function__Accel__accelerations(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Accel__Sequence * member =
    (geometry_msgs__msg__Accel__Sequence *)(untyped_member);
  geometry_msgs__msg__Accel__Sequence__fini(member);
  return geometry_msgs__msg__Accel__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dasc_msgs__msg__DITrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dasc_msgs__msg__DITrajectory, dt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dasc_msgs__msg__DITrajectory, poses),  // bytes offset in struct
    NULL,  // default value
    DITrajectory__rosidl_typesupport_introspection_c__size_function__Pose__poses,  // size() function pointer
    DITrajectory__rosidl_typesupport_introspection_c__get_const_function__Pose__poses,  // get_const(index) function pointer
    DITrajectory__rosidl_typesupport_introspection_c__get_function__Pose__poses,  // get(index) function pointer
    DITrajectory__rosidl_typesupport_introspection_c__resize_function__Pose__poses  // resize(index) function pointer
  },
  {
    "twists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dasc_msgs__msg__DITrajectory, twists),  // bytes offset in struct
    NULL,  // default value
    DITrajectory__rosidl_typesupport_introspection_c__size_function__Twist__twists,  // size() function pointer
    DITrajectory__rosidl_typesupport_introspection_c__get_const_function__Twist__twists,  // get_const(index) function pointer
    DITrajectory__rosidl_typesupport_introspection_c__get_function__Twist__twists,  // get(index) function pointer
    DITrajectory__rosidl_typesupport_introspection_c__resize_function__Twist__twists  // resize(index) function pointer
  },
  {
    "accelerations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dasc_msgs__msg__DITrajectory, accelerations),  // bytes offset in struct
    NULL,  // default value
    DITrajectory__rosidl_typesupport_introspection_c__size_function__Accel__accelerations,  // size() function pointer
    DITrajectory__rosidl_typesupport_introspection_c__get_const_function__Accel__accelerations,  // get_const(index) function pointer
    DITrajectory__rosidl_typesupport_introspection_c__get_function__Accel__accelerations,  // get(index) function pointer
    DITrajectory__rosidl_typesupport_introspection_c__resize_function__Accel__accelerations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_members = {
  "dasc_msgs__msg",  // message namespace
  "DITrajectory",  // message name
  5,  // number of fields
  sizeof(dasc_msgs__msg__DITrajectory),
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_member_array,  // message members
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_type_support_handle = {
  0,
  &DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dasc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dasc_msgs, msg, DITrajectory)() {
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  if (!DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_type_support_handle.typesupport_identifier) {
    DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DITrajectory__rosidl_typesupport_introspection_c__DITrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
