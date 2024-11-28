# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ParameterRes.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'param_name'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterRes(type):
    """Metaclass of message 'ParameterRes'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.ParameterRes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parameter_res
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parameter_res
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parameter_res
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parameter_res
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parameter_res

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterRes(metaclass=Metaclass_ParameterRes):
    """Message class 'ParameterRes'."""

    __slots__ = [
        '_timestamp',
        '_param_name',
        '_is_int32',
        '_value',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'param_name': 'uint8[16]',
        'is_int32': 'boolean',
        'value': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'param_name' not in kwargs:
            self.param_name = numpy.zeros(16, dtype=numpy.uint8)
        else:
            self.param_name = numpy.array(kwargs.get('param_name'), dtype=numpy.uint8)
            assert self.param_name.shape == (16, )
        self.is_int32 = kwargs.get('is_int32', bool())
        self.value = kwargs.get('value', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if all(self.param_name != other.param_name):
            return False
        if self.is_int32 != other.is_int32:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def param_name(self):
        """Message field 'param_name'."""
        return self._param_name

    @param_name.setter
    def param_name(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'param_name' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 16, \
                "The 'param_name' numpy.ndarray() must have a size of 16"
            self._param_name = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'param_name' field must be a set or sequence with length 16 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._param_name = numpy.array(value, dtype=numpy.uint8)

    @property
    def is_int32(self):
        """Message field 'is_int32'."""
        return self._is_int32

    @is_int32.setter
    def is_int32(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_int32' field must be of type 'bool'"
        self._is_int32 = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
        self._value = value