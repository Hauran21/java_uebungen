# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ledctrl_interfaces:srv/CameraCmd.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'color_on'
# Member 'color_off'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraCmd_Request(type):
    """Metaclass of message 'CameraCmd_Request'."""

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
            module = import_type_support('ledctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ledctrl_interfaces.srv.CameraCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraCmd_Request(metaclass=Metaclass_CameraCmd_Request):
    """Message class 'CameraCmd_Request'."""

    __slots__ = [
        '_cmd',
        '_side',
        '_color_on',
        '_color_off',
        '_duration_on',
        '_duration_off',
        '_repetitions',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'cmd': 'string',
        'side': 'int8',
        'color_on': 'sequence<uint8>',
        'color_off': 'sequence<uint8>',
        'duration_on': 'float',
        'duration_off': 'float',
        'repetitions': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.cmd = kwargs.get('cmd', str())
        self.side = kwargs.get('side', int())
        self.color_on = array.array('B', kwargs.get('color_on', []))
        self.color_off = array.array('B', kwargs.get('color_off', []))
        self.duration_on = kwargs.get('duration_on', float())
        self.duration_off = kwargs.get('duration_off', float())
        self.repetitions = kwargs.get('repetitions', int())

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
        if self.cmd != other.cmd:
            return False
        if self.side != other.side:
            return False
        if self.color_on != other.color_on:
            return False
        if self.color_off != other.color_off:
            return False
        if self.duration_on != other.duration_on:
            return False
        if self.duration_off != other.duration_off:
            return False
        if self.repetitions != other.repetitions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'cmd' field must be of type 'str'"
        self._cmd = value

    @builtins.property
    def side(self):
        """Message field 'side'."""
        return self._side

    @side.setter
    def side(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'side' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'side' field must be an integer in [-128, 127]"
        self._side = value

    @builtins.property
    def color_on(self):
        """Message field 'color_on'."""
        return self._color_on

    @color_on.setter
    def color_on(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'color_on' array.array() must have the type code of 'B'"
                self._color_on = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'color_on' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._color_on = array.array('B', value)

    @builtins.property
    def color_off(self):
        """Message field 'color_off'."""
        return self._color_off

    @color_off.setter
    def color_off(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'color_off' array.array() must have the type code of 'B'"
                self._color_off = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'color_off' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._color_off = array.array('B', value)

    @builtins.property
    def duration_on(self):
        """Message field 'duration_on'."""
        return self._duration_on

    @duration_on.setter
    def duration_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duration_on' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration_on' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration_on = value

    @builtins.property
    def duration_off(self):
        """Message field 'duration_off'."""
        return self._duration_off

    @duration_off.setter
    def duration_off(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duration_off' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration_off' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration_off = value

    @builtins.property
    def repetitions(self):
        """Message field 'repetitions'."""
        return self._repetitions

    @repetitions.setter
    def repetitions(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'repetitions' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'repetitions' field must be an integer in [-128, 127]"
        self._repetitions = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraCmd_Response(type):
    """Metaclass of message 'CameraCmd_Response'."""

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
            module = import_type_support('ledctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ledctrl_interfaces.srv.CameraCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraCmd_Response(metaclass=Metaclass_CameraCmd_Response):
    """Message class 'CameraCmd_Response'."""

    __slots__ = [
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        self.status = kwargs.get('status', bool())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraCmd_Event(type):
    """Metaclass of message 'CameraCmd_Event'."""

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
            module = import_type_support('ledctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ledctrl_interfaces.srv.CameraCmd_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_cmd__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_cmd__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_cmd__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_cmd__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_cmd__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraCmd_Event(metaclass=Metaclass_CameraCmd_Event):
    """Message class 'CameraCmd_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ledctrl_interfaces/CameraCmd_Request, 1>',
        'response': 'sequence<ledctrl_interfaces/CameraCmd_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ledctrl_interfaces', 'srv'], 'CameraCmd_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ledctrl_interfaces', 'srv'], 'CameraCmd_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from ledctrl_interfaces.srv import CameraCmd_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, CameraCmd_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CameraCmd_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ledctrl_interfaces.srv import CameraCmd_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, CameraCmd_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CameraCmd_Response'"
        self._response = value


class Metaclass_CameraCmd(type):
    """Metaclass of service 'CameraCmd'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ledctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ledctrl_interfaces.srv.CameraCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__camera_cmd

            from ledctrl_interfaces.srv import _camera_cmd
            if _camera_cmd.Metaclass_CameraCmd_Request._TYPE_SUPPORT is None:
                _camera_cmd.Metaclass_CameraCmd_Request.__import_type_support__()
            if _camera_cmd.Metaclass_CameraCmd_Response._TYPE_SUPPORT is None:
                _camera_cmd.Metaclass_CameraCmd_Response.__import_type_support__()
            if _camera_cmd.Metaclass_CameraCmd_Event._TYPE_SUPPORT is None:
                _camera_cmd.Metaclass_CameraCmd_Event.__import_type_support__()


class CameraCmd(metaclass=Metaclass_CameraCmd):
    from ledctrl_interfaces.srv._camera_cmd import CameraCmd_Request as Request
    from ledctrl_interfaces.srv._camera_cmd import CameraCmd_Response as Response
    from ledctrl_interfaces.srv._camera_cmd import CameraCmd_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
