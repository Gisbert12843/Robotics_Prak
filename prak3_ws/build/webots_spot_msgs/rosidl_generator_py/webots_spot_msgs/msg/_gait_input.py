# generated from rosidl_generator_py/resource/_idl.py.em
# with input from webots_spot_msgs:msg/GaitInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GaitInput(type):
    """Metaclass of message 'GaitInput'."""

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
            module = import_type_support('webots_spot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'webots_spot_msgs.msg.GaitInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gait_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gait_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gait_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gait_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gait_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GaitInput(metaclass=Metaclass_GaitInput):
    """Message class 'GaitInput'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_roll',
        '_pitch',
        '_yaw',
        '_step_length',
        '_lateral_fraction',
        '_yaw_rate',
        '_step_velocity',
        '_clearance_height',
        '_penetration_depth',
        '_swing_period',
        '_yaw_control',
        '_yaw_control_on',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'roll': 'double',
        'pitch': 'double',
        'yaw': 'double',
        'step_length': 'double',
        'lateral_fraction': 'double',
        'yaw_rate': 'double',
        'step_velocity': 'double',
        'clearance_height': 'double',
        'penetration_depth': 'double',
        'swing_period': 'double',
        'yaw_control': 'double',
        'yaw_control_on': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.step_length = kwargs.get('step_length', float())
        self.lateral_fraction = kwargs.get('lateral_fraction', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.step_velocity = kwargs.get('step_velocity', float())
        self.clearance_height = kwargs.get('clearance_height', float())
        self.penetration_depth = kwargs.get('penetration_depth', float())
        self.swing_period = kwargs.get('swing_period', float())
        self.yaw_control = kwargs.get('yaw_control', float())
        self.yaw_control_on = kwargs.get('yaw_control_on', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.step_length != other.step_length:
            return False
        if self.lateral_fraction != other.lateral_fraction:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.step_velocity != other.step_velocity:
            return False
        if self.clearance_height != other.clearance_height:
            return False
        if self.penetration_depth != other.penetration_depth:
            return False
        if self.swing_period != other.swing_period:
            return False
        if self.yaw_control != other.yaw_control:
            return False
        if self.yaw_control_on != other.yaw_control_on:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def step_length(self):
        """Message field 'step_length'."""
        return self._step_length

    @step_length.setter
    def step_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_length = value

    @builtins.property
    def lateral_fraction(self):
        """Message field 'lateral_fraction'."""
        return self._lateral_fraction

    @lateral_fraction.setter
    def lateral_fraction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_fraction' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_fraction' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_fraction = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def step_velocity(self):
        """Message field 'step_velocity'."""
        return self._step_velocity

    @step_velocity.setter
    def step_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_velocity = value

    @builtins.property
    def clearance_height(self):
        """Message field 'clearance_height'."""
        return self._clearance_height

    @clearance_height.setter
    def clearance_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'clearance_height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'clearance_height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._clearance_height = value

    @builtins.property
    def penetration_depth(self):
        """Message field 'penetration_depth'."""
        return self._penetration_depth

    @penetration_depth.setter
    def penetration_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'penetration_depth' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'penetration_depth' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._penetration_depth = value

    @builtins.property
    def swing_period(self):
        """Message field 'swing_period'."""
        return self._swing_period

    @swing_period.setter
    def swing_period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'swing_period' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'swing_period' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._swing_period = value

    @builtins.property
    def yaw_control(self):
        """Message field 'yaw_control'."""
        return self._yaw_control

    @yaw_control.setter
    def yaw_control(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_control' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_control' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_control = value

    @builtins.property
    def yaw_control_on(self):
        """Message field 'yaw_control_on'."""
        return self._yaw_control_on

    @yaw_control_on.setter
    def yaw_control_on(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_control_on' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_control_on' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_control_on = value
