# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motorctrl_interfaces:srv/SetMotorConfig.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMotorConfig_Request(type):
    """Metaclass of message 'SetMotorConfig_Request'."""

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
            module = import_type_support('motorctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motorctrl_interfaces.srv.SetMotorConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motor_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motor_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motor_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motor_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motor_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotorConfig_Request(metaclass=Metaclass_SetMotorConfig_Request):
    """Message class 'SetMotorConfig_Request'."""

    __slots__ = [
        '_motor_id',
        '_uart_name',
        '_uart_baudrate',
        '_motor_id_new',
        '_uart_baudrate_new',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'uart_name': 'string',
        'uart_baudrate': 'uint32',
        'motor_id_new': 'uint8',
        'uart_baudrate_new': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.motor_id = kwargs.get('motor_id', int())
        self.uart_name = kwargs.get('uart_name', str())
        self.uart_baudrate = kwargs.get('uart_baudrate', int())
        self.motor_id_new = kwargs.get('motor_id_new', int())
        self.uart_baudrate_new = kwargs.get('uart_baudrate_new', int())

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
        if self.motor_id != other.motor_id:
            return False
        if self.uart_name != other.uart_name:
            return False
        if self.uart_baudrate != other.uart_baudrate:
            return False
        if self.motor_id_new != other.motor_id_new:
            return False
        if self.uart_baudrate_new != other.uart_baudrate_new:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_id' field must be an unsigned integer in [0, 255]"
        self._motor_id = value

    @builtins.property
    def uart_name(self):
        """Message field 'uart_name'."""
        return self._uart_name

    @uart_name.setter
    def uart_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'uart_name' field must be of type 'str'"
        self._uart_name = value

    @builtins.property
    def uart_baudrate(self):
        """Message field 'uart_baudrate'."""
        return self._uart_baudrate

    @uart_baudrate.setter
    def uart_baudrate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uart_baudrate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uart_baudrate' field must be an unsigned integer in [0, 4294967295]"
        self._uart_baudrate = value

    @builtins.property
    def motor_id_new(self):
        """Message field 'motor_id_new'."""
        return self._motor_id_new

    @motor_id_new.setter
    def motor_id_new(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor_id_new' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_id_new' field must be an unsigned integer in [0, 255]"
        self._motor_id_new = value

    @builtins.property
    def uart_baudrate_new(self):
        """Message field 'uart_baudrate_new'."""
        return self._uart_baudrate_new

    @uart_baudrate_new.setter
    def uart_baudrate_new(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uart_baudrate_new' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uart_baudrate_new' field must be an unsigned integer in [0, 4294967295]"
        self._uart_baudrate_new = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMotorConfig_Response(type):
    """Metaclass of message 'SetMotorConfig_Response'."""

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
            module = import_type_support('motorctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motorctrl_interfaces.srv.SetMotorConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motor_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motor_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motor_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motor_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motor_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotorConfig_Response(metaclass=Metaclass_SetMotorConfig_Response):
    """Message class 'SetMotorConfig_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMotorConfig_Event(type):
    """Metaclass of message 'SetMotorConfig_Event'."""

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
            module = import_type_support('motorctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motorctrl_interfaces.srv.SetMotorConfig_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motor_config__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motor_config__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motor_config__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motor_config__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motor_config__event

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


class SetMotorConfig_Event(metaclass=Metaclass_SetMotorConfig_Event):
    """Message class 'SetMotorConfig_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<motorctrl_interfaces/SetMotorConfig_Request, 1>',
        'response': 'sequence<motorctrl_interfaces/SetMotorConfig_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['motorctrl_interfaces', 'srv'], 'SetMotorConfig_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['motorctrl_interfaces', 'srv'], 'SetMotorConfig_Response'), 1),  # noqa: E501
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
            from motorctrl_interfaces.srv import SetMotorConfig_Request
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
                 all(isinstance(v, SetMotorConfig_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetMotorConfig_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from motorctrl_interfaces.srv import SetMotorConfig_Response
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
                 all(isinstance(v, SetMotorConfig_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetMotorConfig_Response'"
        self._response = value


class Metaclass_SetMotorConfig(type):
    """Metaclass of service 'SetMotorConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('motorctrl_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motorctrl_interfaces.srv.SetMotorConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_motor_config

            from motorctrl_interfaces.srv import _set_motor_config
            if _set_motor_config.Metaclass_SetMotorConfig_Request._TYPE_SUPPORT is None:
                _set_motor_config.Metaclass_SetMotorConfig_Request.__import_type_support__()
            if _set_motor_config.Metaclass_SetMotorConfig_Response._TYPE_SUPPORT is None:
                _set_motor_config.Metaclass_SetMotorConfig_Response.__import_type_support__()
            if _set_motor_config.Metaclass_SetMotorConfig_Event._TYPE_SUPPORT is None:
                _set_motor_config.Metaclass_SetMotorConfig_Event.__import_type_support__()


class SetMotorConfig(metaclass=Metaclass_SetMotorConfig):
    from motorctrl_interfaces.srv._set_motor_config import SetMotorConfig_Request as Request
    from motorctrl_interfaces.srv._set_motor_config import SetMotorConfig_Response as Response
    from motorctrl_interfaces.srv._set_motor_config import SetMotorConfig_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
