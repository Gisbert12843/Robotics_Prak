# generated from rosidl_generator_py/resource/_idl.py.em
# with input from webots_spot_msgs:srv/SpotMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpotMotion_Request(type):
    """Metaclass of message 'SpotMotion_Request'."""

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
                'webots_spot_msgs.srv.SpotMotion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spot_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spot_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spot_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spot_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spot_motion__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpotMotion_Request(metaclass=Metaclass_SpotMotion_Request):
    """Message class 'SpotMotion_Request'."""

    __slots__ = [
        '_override',
    ]

    _fields_and_field_types = {
        'override': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.override = kwargs.get('override', bool())

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
        if self.override != other.override:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def override(self):
        """Message field 'override'."""
        return self._override

    @override.setter
    def override(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'override' field must be of type 'bool'"
        self._override = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SpotMotion_Response(type):
    """Metaclass of message 'SpotMotion_Response'."""

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
                'webots_spot_msgs.srv.SpotMotion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__spot_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__spot_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__spot_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__spot_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__spot_motion__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpotMotion_Response(metaclass=Metaclass_SpotMotion_Response):
    """Message class 'SpotMotion_Response'."""

    __slots__ = [
        '_answer',
    ]

    _fields_and_field_types = {
        'answer': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.answer = kwargs.get('answer', str())

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
        if self.answer != other.answer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def answer(self):
        """Message field 'answer'."""
        return self._answer

    @answer.setter
    def answer(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'answer' field must be of type 'str'"
        self._answer = value


class Metaclass_SpotMotion(type):
    """Metaclass of service 'SpotMotion'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('webots_spot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'webots_spot_msgs.srv.SpotMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__spot_motion

            from webots_spot_msgs.srv import _spot_motion
            if _spot_motion.Metaclass_SpotMotion_Request._TYPE_SUPPORT is None:
                _spot_motion.Metaclass_SpotMotion_Request.__import_type_support__()
            if _spot_motion.Metaclass_SpotMotion_Response._TYPE_SUPPORT is None:
                _spot_motion.Metaclass_SpotMotion_Response.__import_type_support__()


class SpotMotion(metaclass=Metaclass_SpotMotion):
    from webots_spot_msgs.srv._spot_motion import SpotMotion_Request as Request
    from webots_spot_msgs.srv._spot_motion import SpotMotion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
