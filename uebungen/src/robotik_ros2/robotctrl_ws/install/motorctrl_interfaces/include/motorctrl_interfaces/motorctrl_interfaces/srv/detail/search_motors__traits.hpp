// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motorctrl_interfaces:srv/SearchMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/search_motors.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__TRAITS_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motorctrl_interfaces/srv/detail/search_motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motorctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SearchMotors_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: uart_port
  {
    if (msg.uart_port.size() == 0) {
      out << "uart_port: []";
    } else {
      out << "uart_port: [";
      size_t pending_items = msg.uart_port.size();
      for (auto item : msg.uart_port) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: baudrate
  {
    out << "baudrate: ";
    rosidl_generator_traits::value_to_yaml(msg.baudrate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchMotors_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uart_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uart_port.size() == 0) {
      out << "uart_port: []\n";
    } else {
      out << "uart_port:\n";
      for (auto item : msg.uart_port) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baudrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baudrate: ";
    rosidl_generator_traits::value_to_yaml(msg.baudrate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchMotors_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motorctrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motorctrl_interfaces::srv::SearchMotors_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motorctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motorctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motorctrl_interfaces::srv::SearchMotors_Request & msg)
{
  return motorctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motorctrl_interfaces::srv::SearchMotors_Request>()
{
  return "motorctrl_interfaces::srv::SearchMotors_Request";
}

template<>
inline const char * name<motorctrl_interfaces::srv::SearchMotors_Request>()
{
  return "motorctrl_interfaces/srv/SearchMotors_Request";
}

template<>
struct has_fixed_size<motorctrl_interfaces::srv::SearchMotors_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motorctrl_interfaces::srv::SearchMotors_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace motorctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SearchMotors_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_ids
  {
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []";
    } else {
      out << "motor_ids: [";
      size_t pending_items = msg.motor_ids.size();
      for (auto item : msg.motor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchMotors_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []\n";
    } else {
      out << "motor_ids:\n";
      for (auto item : msg.motor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchMotors_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motorctrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motorctrl_interfaces::srv::SearchMotors_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motorctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motorctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motorctrl_interfaces::srv::SearchMotors_Response & msg)
{
  return motorctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motorctrl_interfaces::srv::SearchMotors_Response>()
{
  return "motorctrl_interfaces::srv::SearchMotors_Response";
}

template<>
inline const char * name<motorctrl_interfaces::srv::SearchMotors_Response>()
{
  return "motorctrl_interfaces/srv/SearchMotors_Response";
}

template<>
struct has_fixed_size<motorctrl_interfaces::srv::SearchMotors_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motorctrl_interfaces::srv::SearchMotors_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace motorctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SearchMotors_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchMotors_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchMotors_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motorctrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motorctrl_interfaces::srv::SearchMotors_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  motorctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motorctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const motorctrl_interfaces::srv::SearchMotors_Event & msg)
{
  return motorctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motorctrl_interfaces::srv::SearchMotors_Event>()
{
  return "motorctrl_interfaces::srv::SearchMotors_Event";
}

template<>
inline const char * name<motorctrl_interfaces::srv::SearchMotors_Event>()
{
  return "motorctrl_interfaces/srv/SearchMotors_Event";
}

template<>
struct has_fixed_size<motorctrl_interfaces::srv::SearchMotors_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Event>
  : std::integral_constant<bool, has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Request>::value && has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<motorctrl_interfaces::srv::SearchMotors_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motorctrl_interfaces::srv::SearchMotors>()
{
  return "motorctrl_interfaces::srv::SearchMotors";
}

template<>
inline const char * name<motorctrl_interfaces::srv::SearchMotors>()
{
  return "motorctrl_interfaces/srv/SearchMotors";
}

template<>
struct has_fixed_size<motorctrl_interfaces::srv::SearchMotors>
  : std::integral_constant<
    bool,
    has_fixed_size<motorctrl_interfaces::srv::SearchMotors_Request>::value &&
    has_fixed_size<motorctrl_interfaces::srv::SearchMotors_Response>::value
  >
{
};

template<>
struct has_bounded_size<motorctrl_interfaces::srv::SearchMotors>
  : std::integral_constant<
    bool,
    has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Request>::value &&
    has_bounded_size<motorctrl_interfaces::srv::SearchMotors_Response>::value
  >
{
};

template<>
struct is_service<motorctrl_interfaces::srv::SearchMotors>
  : std::true_type
{
};

template<>
struct is_service_request<motorctrl_interfaces::srv::SearchMotors_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motorctrl_interfaces::srv::SearchMotors_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__TRAITS_HPP_
