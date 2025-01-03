# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/CommanderSetState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommanderSetState(type):
    """Metaclass of message 'CommanderSetState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_DISARMED': 0,
        'STATE_ARMED': 1,
        'STATE_OFFBOARD': 2,
        'STATE_LAND': 3,
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
                'px4_msgs.msg.CommanderSetState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__commander_set_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__commander_set_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__commander_set_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__commander_set_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__commander_set_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_DISARMED': cls.__constants['STATE_DISARMED'],
            'STATE_ARMED': cls.__constants['STATE_ARMED'],
            'STATE_OFFBOARD': cls.__constants['STATE_OFFBOARD'],
            'STATE_LAND': cls.__constants['STATE_LAND'],
        }

    @property
    def STATE_DISARMED(self):
        """Message constant 'STATE_DISARMED'."""
        return Metaclass_CommanderSetState.__constants['STATE_DISARMED']

    @property
    def STATE_ARMED(self):
        """Message constant 'STATE_ARMED'."""
        return Metaclass_CommanderSetState.__constants['STATE_ARMED']

    @property
    def STATE_OFFBOARD(self):
        """Message constant 'STATE_OFFBOARD'."""
        return Metaclass_CommanderSetState.__constants['STATE_OFFBOARD']

    @property
    def STATE_LAND(self):
        """Message constant 'STATE_LAND'."""
        return Metaclass_CommanderSetState.__constants['STATE_LAND']


class CommanderSetState(metaclass=Metaclass_CommanderSetState):
    """
    Message class 'CommanderSetState'.

    Constants:
      STATE_DISARMED
      STATE_ARMED
      STATE_OFFBOARD
      STATE_LAND
    """

    __slots__ = [
        '_timestamp',
        '_new_state',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'new_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.new_state = kwargs.get('new_state', int())

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
        if self.new_state != other.new_state:
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
    def new_state(self):
        """Message field 'new_state'."""
        return self._new_state

    @new_state.setter
    def new_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'new_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'new_state' field must be an unsigned integer in [0, 255]"
        self._new_state = value
