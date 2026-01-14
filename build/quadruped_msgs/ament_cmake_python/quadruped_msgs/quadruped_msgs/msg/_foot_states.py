# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadruped_msgs:msg/FootStates.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FootStates(type):
    """Metaclass of message 'FootStates'."""

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
            module = import_type_support('quadruped_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'quadruped_msgs.msg.FootStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__foot_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__foot_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__foot_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__foot_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__foot_states

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FootStates(metaclass=Metaclass_FootStates):
    """Message class 'FootStates'."""

    __slots__ = [
        '_foot1_state',
        '_foot2_state',
        '_foot3_state',
        '_foot4_state',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'foot1_state': 'int16',
        'foot2_state': 'int16',
        'foot3_state': 'int16',
        'foot4_state': 'int16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.foot1_state = kwargs.get('foot1_state', int())
        self.foot2_state = kwargs.get('foot2_state', int())
        self.foot3_state = kwargs.get('foot3_state', int())
        self.foot4_state = kwargs.get('foot4_state', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.foot1_state != other.foot1_state:
            return False
        if self.foot2_state != other.foot2_state:
            return False
        if self.foot3_state != other.foot3_state:
            return False
        if self.foot4_state != other.foot4_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def foot1_state(self):
        """Message field 'foot1_state'."""
        return self._foot1_state

    @foot1_state.setter
    def foot1_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'foot1_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'foot1_state' field must be an integer in [-32768, 32767]"
        self._foot1_state = value

    @builtins.property
    def foot2_state(self):
        """Message field 'foot2_state'."""
        return self._foot2_state

    @foot2_state.setter
    def foot2_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'foot2_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'foot2_state' field must be an integer in [-32768, 32767]"
        self._foot2_state = value

    @builtins.property
    def foot3_state(self):
        """Message field 'foot3_state'."""
        return self._foot3_state

    @foot3_state.setter
    def foot3_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'foot3_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'foot3_state' field must be an integer in [-32768, 32767]"
        self._foot3_state = value

    @builtins.property
    def foot4_state(self):
        """Message field 'foot4_state'."""
        return self._foot4_state

    @foot4_state.setter
    def foot4_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'foot4_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'foot4_state' field must be an integer in [-32768, 32767]"
        self._foot4_state = value
