# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadruped_msgs:msg/GaitPattern.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'predicted_states'
# Member 'predicted_phases'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GaitPattern(type):
    """Metaclass of message 'GaitPattern'."""

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
                'quadruped_msgs.msg.GaitPattern')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gait_pattern
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gait_pattern
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gait_pattern
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gait_pattern
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gait_pattern

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GaitPattern(metaclass=Metaclass_GaitPattern):
    """Message class 'GaitPattern'."""

    __slots__ = [
        '_foot1_step_position',
        '_foot2_step_position',
        '_foot3_step_position',
        '_foot4_step_position',
        '_com_position',
        '_foot1_phase',
        '_foot2_phase',
        '_foot3_phase',
        '_foot4_phase',
        '_foot1_state',
        '_foot2_state',
        '_foot3_state',
        '_foot4_state',
        '_step_height',
        '_predicted_states',
        '_predicted_phases',
        '_prediction_stages',
        '_prediction_horizon',
        '_prediction_timestep',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'foot1_step_position': 'geometry_msgs/Vector3',
        'foot2_step_position': 'geometry_msgs/Vector3',
        'foot3_step_position': 'geometry_msgs/Vector3',
        'foot4_step_position': 'geometry_msgs/Vector3',
        'com_position': 'geometry_msgs/Vector3',
        'foot1_phase': 'float',
        'foot2_phase': 'float',
        'foot3_phase': 'float',
        'foot4_phase': 'float',
        'foot1_state': 'int32',
        'foot2_state': 'int32',
        'foot3_state': 'int32',
        'foot4_state': 'int32',
        'step_height': 'float',
        'predicted_states': 'sequence<int32>',
        'predicted_phases': 'sequence<float>',
        'prediction_stages': 'int32',
        'prediction_horizon': 'float',
        'prediction_timestep': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from geometry_msgs.msg import Vector3
        self.foot1_step_position = kwargs.get('foot1_step_position', Vector3())
        from geometry_msgs.msg import Vector3
        self.foot2_step_position = kwargs.get('foot2_step_position', Vector3())
        from geometry_msgs.msg import Vector3
        self.foot3_step_position = kwargs.get('foot3_step_position', Vector3())
        from geometry_msgs.msg import Vector3
        self.foot4_step_position = kwargs.get('foot4_step_position', Vector3())
        from geometry_msgs.msg import Vector3
        self.com_position = kwargs.get('com_position', Vector3())
        self.foot1_phase = kwargs.get('foot1_phase', float())
        self.foot2_phase = kwargs.get('foot2_phase', float())
        self.foot3_phase = kwargs.get('foot3_phase', float())
        self.foot4_phase = kwargs.get('foot4_phase', float())
        self.foot1_state = kwargs.get('foot1_state', int())
        self.foot2_state = kwargs.get('foot2_state', int())
        self.foot3_state = kwargs.get('foot3_state', int())
        self.foot4_state = kwargs.get('foot4_state', int())
        self.step_height = kwargs.get('step_height', float())
        self.predicted_states = array.array('i', kwargs.get('predicted_states', []))
        self.predicted_phases = array.array('f', kwargs.get('predicted_phases', []))
        self.prediction_stages = kwargs.get('prediction_stages', int())
        self.prediction_horizon = kwargs.get('prediction_horizon', float())
        self.prediction_timestep = kwargs.get('prediction_timestep', float())

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
        if self.foot1_step_position != other.foot1_step_position:
            return False
        if self.foot2_step_position != other.foot2_step_position:
            return False
        if self.foot3_step_position != other.foot3_step_position:
            return False
        if self.foot4_step_position != other.foot4_step_position:
            return False
        if self.com_position != other.com_position:
            return False
        if self.foot1_phase != other.foot1_phase:
            return False
        if self.foot2_phase != other.foot2_phase:
            return False
        if self.foot3_phase != other.foot3_phase:
            return False
        if self.foot4_phase != other.foot4_phase:
            return False
        if self.foot1_state != other.foot1_state:
            return False
        if self.foot2_state != other.foot2_state:
            return False
        if self.foot3_state != other.foot3_state:
            return False
        if self.foot4_state != other.foot4_state:
            return False
        if self.step_height != other.step_height:
            return False
        if self.predicted_states != other.predicted_states:
            return False
        if self.predicted_phases != other.predicted_phases:
            return False
        if self.prediction_stages != other.prediction_stages:
            return False
        if self.prediction_horizon != other.prediction_horizon:
            return False
        if self.prediction_timestep != other.prediction_timestep:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def foot1_step_position(self):
        """Message field 'foot1_step_position'."""
        return self._foot1_step_position

    @foot1_step_position.setter
    def foot1_step_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'foot1_step_position' field must be a sub message of type 'Vector3'"
        self._foot1_step_position = value

    @builtins.property
    def foot2_step_position(self):
        """Message field 'foot2_step_position'."""
        return self._foot2_step_position

    @foot2_step_position.setter
    def foot2_step_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'foot2_step_position' field must be a sub message of type 'Vector3'"
        self._foot2_step_position = value

    @builtins.property
    def foot3_step_position(self):
        """Message field 'foot3_step_position'."""
        return self._foot3_step_position

    @foot3_step_position.setter
    def foot3_step_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'foot3_step_position' field must be a sub message of type 'Vector3'"
        self._foot3_step_position = value

    @builtins.property
    def foot4_step_position(self):
        """Message field 'foot4_step_position'."""
        return self._foot4_step_position

    @foot4_step_position.setter
    def foot4_step_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'foot4_step_position' field must be a sub message of type 'Vector3'"
        self._foot4_step_position = value

    @builtins.property
    def com_position(self):
        """Message field 'com_position'."""
        return self._com_position

    @com_position.setter
    def com_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'com_position' field must be a sub message of type 'Vector3'"
        self._com_position = value

    @builtins.property
    def foot1_phase(self):
        """Message field 'foot1_phase'."""
        return self._foot1_phase

    @foot1_phase.setter
    def foot1_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'foot1_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'foot1_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._foot1_phase = value

    @builtins.property
    def foot2_phase(self):
        """Message field 'foot2_phase'."""
        return self._foot2_phase

    @foot2_phase.setter
    def foot2_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'foot2_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'foot2_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._foot2_phase = value

    @builtins.property
    def foot3_phase(self):
        """Message field 'foot3_phase'."""
        return self._foot3_phase

    @foot3_phase.setter
    def foot3_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'foot3_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'foot3_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._foot3_phase = value

    @builtins.property
    def foot4_phase(self):
        """Message field 'foot4_phase'."""
        return self._foot4_phase

    @foot4_phase.setter
    def foot4_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'foot4_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'foot4_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._foot4_phase = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'foot1_state' field must be an integer in [-2147483648, 2147483647]"
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'foot2_state' field must be an integer in [-2147483648, 2147483647]"
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'foot3_state' field must be an integer in [-2147483648, 2147483647]"
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'foot4_state' field must be an integer in [-2147483648, 2147483647]"
        self._foot4_state = value

    @builtins.property
    def step_height(self):
        """Message field 'step_height'."""
        return self._step_height

    @step_height.setter
    def step_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'step_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'step_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._step_height = value

    @builtins.property
    def predicted_states(self):
        """Message field 'predicted_states'."""
        return self._predicted_states

    @predicted_states.setter
    def predicted_states(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'predicted_states' array.array() must have the type code of 'i'"
                self._predicted_states = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'predicted_states' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._predicted_states = array.array('i', value)

    @builtins.property
    def predicted_phases(self):
        """Message field 'predicted_phases'."""
        return self._predicted_phases

    @predicted_phases.setter
    def predicted_phases(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'predicted_phases' array.array() must have the type code of 'f'"
                self._predicted_phases = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'predicted_phases' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._predicted_phases = array.array('f', value)

    @builtins.property
    def prediction_stages(self):
        """Message field 'prediction_stages'."""
        return self._prediction_stages

    @prediction_stages.setter
    def prediction_stages(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'prediction_stages' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'prediction_stages' field must be an integer in [-2147483648, 2147483647]"
        self._prediction_stages = value

    @builtins.property
    def prediction_horizon(self):
        """Message field 'prediction_horizon'."""
        return self._prediction_horizon

    @prediction_horizon.setter
    def prediction_horizon(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'prediction_horizon' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prediction_horizon' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prediction_horizon = value

    @builtins.property
    def prediction_timestep(self):
        """Message field 'prediction_timestep'."""
        return self._prediction_timestep

    @prediction_timestep.setter
    def prediction_timestep(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'prediction_timestep' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prediction_timestep' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prediction_timestep = value
