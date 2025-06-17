// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ledctrl_interfaces:srv/ColorValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/color_values.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__TRAITS_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ledctrl_interfaces/srv/detail/color_values__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ledctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ColorValues_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ColorValues_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColorValues_Request & msg, bool use_flow_style = false)
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

}  // namespace ledctrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ledctrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ledctrl_interfaces::srv::ColorValues_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ledctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ledctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ledctrl_interfaces::srv::ColorValues_Request & msg)
{
  return ledctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ledctrl_interfaces::srv::ColorValues_Request>()
{
  return "ledctrl_interfaces::srv::ColorValues_Request";
}

template<>
inline const char * name<ledctrl_interfaces::srv::ColorValues_Request>()
{
  return "ledctrl_interfaces/srv/ColorValues_Request";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::ColorValues_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::ColorValues_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ledctrl_interfaces::srv::ColorValues_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ledctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ColorValues_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: colors
  {
    if (msg.colors.size() == 0) {
      out << "colors: []";
    } else {
      out << "colors: [";
      size_t pending_items = msg.colors.size();
      for (auto item : msg.colors) {
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
  const ColorValues_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colors.size() == 0) {
      out << "colors: []\n";
    } else {
      out << "colors:\n";
      for (auto item : msg.colors) {
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

inline std::string to_yaml(const ColorValues_Response & msg, bool use_flow_style = false)
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

}  // namespace ledctrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ledctrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ledctrl_interfaces::srv::ColorValues_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ledctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ledctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ledctrl_interfaces::srv::ColorValues_Response & msg)
{
  return ledctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ledctrl_interfaces::srv::ColorValues_Response>()
{
  return "ledctrl_interfaces::srv::ColorValues_Response";
}

template<>
inline const char * name<ledctrl_interfaces::srv::ColorValues_Response>()
{
  return "ledctrl_interfaces/srv/ColorValues_Response";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::ColorValues_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::ColorValues_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ledctrl_interfaces::srv::ColorValues_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ledctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ColorValues_Event & msg,
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
  const ColorValues_Event & msg,
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

inline std::string to_yaml(const ColorValues_Event & msg, bool use_flow_style = false)
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

}  // namespace ledctrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ledctrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ledctrl_interfaces::srv::ColorValues_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ledctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ledctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ledctrl_interfaces::srv::ColorValues_Event & msg)
{
  return ledctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ledctrl_interfaces::srv::ColorValues_Event>()
{
  return "ledctrl_interfaces::srv::ColorValues_Event";
}

template<>
inline const char * name<ledctrl_interfaces::srv::ColorValues_Event>()
{
  return "ledctrl_interfaces/srv/ColorValues_Event";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::ColorValues_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::ColorValues_Event>
  : std::integral_constant<bool, has_bounded_size<ledctrl_interfaces::srv::ColorValues_Request>::value && has_bounded_size<ledctrl_interfaces::srv::ColorValues_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ledctrl_interfaces::srv::ColorValues_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ledctrl_interfaces::srv::ColorValues>()
{
  return "ledctrl_interfaces::srv::ColorValues";
}

template<>
inline const char * name<ledctrl_interfaces::srv::ColorValues>()
{
  return "ledctrl_interfaces/srv/ColorValues";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::ColorValues>
  : std::integral_constant<
    bool,
    has_fixed_size<ledctrl_interfaces::srv::ColorValues_Request>::value &&
    has_fixed_size<ledctrl_interfaces::srv::ColorValues_Response>::value
  >
{
};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::ColorValues>
  : std::integral_constant<
    bool,
    has_bounded_size<ledctrl_interfaces::srv::ColorValues_Request>::value &&
    has_bounded_size<ledctrl_interfaces::srv::ColorValues_Response>::value
  >
{
};

template<>
struct is_service<ledctrl_interfaces::srv::ColorValues>
  : std::true_type
{
};

template<>
struct is_service_request<ledctrl_interfaces::srv::ColorValues_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ledctrl_interfaces::srv::ColorValues_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__TRAITS_HPP_
