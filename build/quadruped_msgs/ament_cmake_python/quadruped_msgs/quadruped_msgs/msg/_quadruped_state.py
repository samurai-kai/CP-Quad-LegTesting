# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadruped_msgs:msg/QuadrupedState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'joint_positions'
# Member 'joint_velocities'
# Member 'joint_efforts'
# Member 'j1'
# Member 'j2'
# Member 'j3'
# Member 'j4'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QuadrupedState(type):
    """Metaclass of message 'QuadrupedState'."""

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
                'quadruped_msgs.msg.QuadrupedState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__quadruped_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__quadruped_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__quadruped_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__quadruped_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__quadruped_state

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

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


class QuadrupedState(metaclass=Metaclass_QuadrupedState):
    """Message class 'QuadrupedState'."""

    __slots__ = [
        '_p1',
        '_p2',
        '_p3',
        '_p4',
        '_pc',
        '_v1',
        '_v2',
        '_v3',
        '_v4',
        '_h1',
        '_h2',
        '_h3',
        '_h4',
        '_joint_positions',
        '_joint_velocities',
        '_joint_efforts',
        '_orientation',
        '_angular_velocity',
        '_com_velocity',
        '_j1',
        '_j2',
        '_j3',
        '_j4',
        '_contact_1',
        '_contact_2',
        '_contact_3',
        '_contact_4',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'p1': 'geometry_msgs/Point',
        'p2': 'geometry_msgs/Point',
        'p3': 'geometry_msgs/Point',
        'p4': 'geometry_msgs/Point',
        'pc': 'geometry_msgs/Point',
        'v1': 'geometry_msgs/Vector3',
        'v2': 'geometry_msgs/Vector3',
        'v3': 'geometry_msgs/Vector3',
        'v4': 'geometry_msgs/Vector3',
        'h1': 'geometry_msgs/Point',
        'h2': 'geometry_msgs/Point',
        'h3': 'geometry_msgs/Point',
        'h4': 'geometry_msgs/Point',
        'joint_positions': 'sequence<double>',
        'joint_velocities': 'sequence<double>',
        'joint_efforts': 'sequence<double>',
        'orientation': 'geometry_msgs/Quaternion',
        'angular_velocity': 'geometry_msgs/Vector3',
        'com_velocity': 'geometry_msgs/Vector3',
        'j1': 'sequence<double>',
        'j2': 'sequence<double>',
        'j3': 'sequence<double>',
        'j4': 'sequence<double>',
        'contact_1': 'boolean',
        'contact_2': 'boolean',
        'contact_3': 'boolean',
        'contact_4': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        from geometry_msgs.msg import Point
        self.p1 = kwargs.get('p1', Point())
        from geometry_msgs.msg import Point
        self.p2 = kwargs.get('p2', Point())
        from geometry_msgs.msg import Point
        self.p3 = kwargs.get('p3', Point())
        from geometry_msgs.msg import Point
        self.p4 = kwargs.get('p4', Point())
        from geometry_msgs.msg import Point
        self.pc = kwargs.get('pc', Point())
        from geometry_msgs.msg import Vector3
        self.v1 = kwargs.get('v1', Vector3())
        from geometry_msgs.msg import Vector3
        self.v2 = kwargs.get('v2', Vector3())
        from geometry_msgs.msg import Vector3
        self.v3 = kwargs.get('v3', Vector3())
        from geometry_msgs.msg import Vector3
        self.v4 = kwargs.get('v4', Vector3())
        from geometry_msgs.msg import Point
        self.h1 = kwargs.get('h1', Point())
        from geometry_msgs.msg import Point
        self.h2 = kwargs.get('h2', Point())
        from geometry_msgs.msg import Point
        self.h3 = kwargs.get('h3', Point())
        from geometry_msgs.msg import Point
        self.h4 = kwargs.get('h4', Point())
        self.joint_positions = array.array('d', kwargs.get('joint_positions', []))
        self.joint_velocities = array.array('d', kwargs.get('joint_velocities', []))
        self.joint_efforts = array.array('d', kwargs.get('joint_efforts', []))
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.com_velocity = kwargs.get('com_velocity', Vector3())
        self.j1 = array.array('d', kwargs.get('j1', []))
        self.j2 = array.array('d', kwargs.get('j2', []))
        self.j3 = array.array('d', kwargs.get('j3', []))
        self.j4 = array.array('d', kwargs.get('j4', []))
        self.contact_1 = kwargs.get('contact_1', bool())
        self.contact_2 = kwargs.get('contact_2', bool())
        self.contact_3 = kwargs.get('contact_3', bool())
        self.contact_4 = kwargs.get('contact_4', bool())

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
        if self.p1 != other.p1:
            return False
        if self.p2 != other.p2:
            return False
        if self.p3 != other.p3:
            return False
        if self.p4 != other.p4:
            return False
        if self.pc != other.pc:
            return False
        if self.v1 != other.v1:
            return False
        if self.v2 != other.v2:
            return False
        if self.v3 != other.v3:
            return False
        if self.v4 != other.v4:
            return False
        if self.h1 != other.h1:
            return False
        if self.h2 != other.h2:
            return False
        if self.h3 != other.h3:
            return False
        if self.h4 != other.h4:
            return False
        if self.joint_positions != other.joint_positions:
            return False
        if self.joint_velocities != other.joint_velocities:
            return False
        if self.joint_efforts != other.joint_efforts:
            return False
        if self.orientation != other.orientation:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.com_velocity != other.com_velocity:
            return False
        if self.j1 != other.j1:
            return False
        if self.j2 != other.j2:
            return False
        if self.j3 != other.j3:
            return False
        if self.j4 != other.j4:
            return False
        if self.contact_1 != other.contact_1:
            return False
        if self.contact_2 != other.contact_2:
            return False
        if self.contact_3 != other.contact_3:
            return False
        if self.contact_4 != other.contact_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def p1(self):
        """Message field 'p1'."""
        return self._p1

    @p1.setter
    def p1(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'p1' field must be a sub message of type 'Point'"
        self._p1 = value

    @builtins.property
    def p2(self):
        """Message field 'p2'."""
        return self._p2

    @p2.setter
    def p2(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'p2' field must be a sub message of type 'Point'"
        self._p2 = value

    @builtins.property
    def p3(self):
        """Message field 'p3'."""
        return self._p3

    @p3.setter
    def p3(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'p3' field must be a sub message of type 'Point'"
        self._p3 = value

    @builtins.property
    def p4(self):
        """Message field 'p4'."""
        return self._p4

    @p4.setter
    def p4(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'p4' field must be a sub message of type 'Point'"
        self._p4 = value

    @builtins.property
    def pc(self):
        """Message field 'pc'."""
        return self._pc

    @pc.setter
    def pc(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'pc' field must be a sub message of type 'Point'"
        self._pc = value

    @builtins.property
    def v1(self):
        """Message field 'v1'."""
        return self._v1

    @v1.setter
    def v1(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v1' field must be a sub message of type 'Vector3'"
        self._v1 = value

    @builtins.property
    def v2(self):
        """Message field 'v2'."""
        return self._v2

    @v2.setter
    def v2(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v2' field must be a sub message of type 'Vector3'"
        self._v2 = value

    @builtins.property
    def v3(self):
        """Message field 'v3'."""
        return self._v3

    @v3.setter
    def v3(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v3' field must be a sub message of type 'Vector3'"
        self._v3 = value

    @builtins.property
    def v4(self):
        """Message field 'v4'."""
        return self._v4

    @v4.setter
    def v4(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'v4' field must be a sub message of type 'Vector3'"
        self._v4 = value

    @builtins.property
    def h1(self):
        """Message field 'h1'."""
        return self._h1

    @h1.setter
    def h1(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'h1' field must be a sub message of type 'Point'"
        self._h1 = value

    @builtins.property
    def h2(self):
        """Message field 'h2'."""
        return self._h2

    @h2.setter
    def h2(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'h2' field must be a sub message of type 'Point'"
        self._h2 = value

    @builtins.property
    def h3(self):
        """Message field 'h3'."""
        return self._h3

    @h3.setter
    def h3(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'h3' field must be a sub message of type 'Point'"
        self._h3 = value

    @builtins.property
    def h4(self):
        """Message field 'h4'."""
        return self._h4

    @h4.setter
    def h4(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'h4' field must be a sub message of type 'Point'"
        self._h4 = value

    @builtins.property
    def joint_positions(self):
        """Message field 'joint_positions'."""
        return self._joint_positions

    @joint_positions.setter
    def joint_positions(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_positions' array.array() must have the type code of 'd'"
                self._joint_positions = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_positions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_positions = array.array('d', value)

    @builtins.property
    def joint_velocities(self):
        """Message field 'joint_velocities'."""
        return self._joint_velocities

    @joint_velocities.setter
    def joint_velocities(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_velocities' array.array() must have the type code of 'd'"
                self._joint_velocities = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_velocities' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_velocities = array.array('d', value)

    @builtins.property
    def joint_efforts(self):
        """Message field 'joint_efforts'."""
        return self._joint_efforts

    @joint_efforts.setter
    def joint_efforts(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_efforts' array.array() must have the type code of 'd'"
                self._joint_efforts = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_efforts' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_efforts = array.array('d', value)

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity' field must be a sub message of type 'Vector3'"
        self._angular_velocity = value

    @builtins.property
    def com_velocity(self):
        """Message field 'com_velocity'."""
        return self._com_velocity

    @com_velocity.setter
    def com_velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'com_velocity' field must be a sub message of type 'Vector3'"
        self._com_velocity = value

    @builtins.property
    def j1(self):
        """Message field 'j1'."""
        return self._j1

    @j1.setter
    def j1(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'j1' array.array() must have the type code of 'd'"
                self._j1 = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'j1' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._j1 = array.array('d', value)

    @builtins.property
    def j2(self):
        """Message field 'j2'."""
        return self._j2

    @j2.setter
    def j2(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'j2' array.array() must have the type code of 'd'"
                self._j2 = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'j2' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._j2 = array.array('d', value)

    @builtins.property
    def j3(self):
        """Message field 'j3'."""
        return self._j3

    @j3.setter
    def j3(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'j3' array.array() must have the type code of 'd'"
                self._j3 = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'j3' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._j3 = array.array('d', value)

    @builtins.property
    def j4(self):
        """Message field 'j4'."""
        return self._j4

    @j4.setter
    def j4(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'j4' array.array() must have the type code of 'd'"
                self._j4 = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'j4' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._j4 = array.array('d', value)

    @builtins.property
    def contact_1(self):
        """Message field 'contact_1'."""
        return self._contact_1

    @contact_1.setter
    def contact_1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'contact_1' field must be of type 'bool'"
        self._contact_1 = value

    @builtins.property
    def contact_2(self):
        """Message field 'contact_2'."""
        return self._contact_2

    @contact_2.setter
    def contact_2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'contact_2' field must be of type 'bool'"
        self._contact_2 = value

    @builtins.property
    def contact_3(self):
        """Message field 'contact_3'."""
        return self._contact_3

    @contact_3.setter
    def contact_3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'contact_3' field must be of type 'bool'"
        self._contact_3 = value

    @builtins.property
    def contact_4(self):
        """Message field 'contact_4'."""
        return self._contact_4

    @contact_4.setter
    def contact_4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'contact_4' field must be of type 'bool'"
        self._contact_4 = value
