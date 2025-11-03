// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ledctrl_interfaces:srv/BacklightValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/backlight_value.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__TRAITS_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ledctrl_interfaces/srv/detail/backlight_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ledctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BacklightValue_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: side
  {
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << ", ";
  }

  // member: brightness_percent
  {
    out << "brightness_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BacklightValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << "\n";
  }

  // member: brightness_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BacklightValue_Request & msg, bool use_flow_style = false)
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
  const ledctrl_interfaces::srv::BacklightValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ledctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ledctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ledctrl_interfaces::srv::BacklightValue_Request & msg)
{
  return ledctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ledctrl_interfaces::srv::BacklightValue_Request>()
{
  return "ledctrl_interfaces::srv::BacklightValue_Request";
}

template<>
inline const char * name<ledctrl_interfaces::srv::BacklightValue_Request>()
{
  return "ledctrl_interfaces/srv/BacklightValue_Request";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::BacklightValue_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ledctrl_interfaces::srv::BacklightValue_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ledctrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BacklightValue_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BacklightValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const BacklightValue_Response & msg, bool use_flow_style = false)
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
  const ledctrl_interfaces::srv::BacklightValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ledctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ledctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ledctrl_interfaces::srv::BacklightValue_Response & msg)
{
  return ledctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ledctrl_interfaces::srv::BacklightValue_Response>()
{
  return "ledctrl_interfaces::srv::BacklightValue_Response";
}

template<>
inline const char * name<ledctrl_interfaces::srv::BacklightValue_Response>()
{
  return "ledctrl_interfaces/srv/BacklightValue_Response";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::BacklightValue_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ledctrl_interfaces::srv::BacklightValue_Response>
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
  const BacklightValue_Event & msg,
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
  const BacklightValue_Event & msg,
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

inline std::string to_yaml(const BacklightValue_Event & msg, bool use_flow_style = false)
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
  const ledctrl_interfaces::srv::BacklightValue_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ledctrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ledctrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ledctrl_interfaces::srv::BacklightValue_Event & msg)
{
  return ledctrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ledctrl_interfaces::srv::BacklightValue_Event>()
{
  return "ledctrl_interfaces::srv::BacklightValue_Event";
}

template<>
inline const char * name<ledctrl_interfaces::srv::BacklightValue_Event>()
{
  return "ledctrl_interfaces/srv/BacklightValue_Event";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::BacklightValue_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Event>
  : std::integral_constant<bool, has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Request>::value && has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ledctrl_interfaces::srv::BacklightValue_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ledctrl_interfaces::srv::BacklightValue>()
{
  return "ledctrl_interfaces::srv::BacklightValue";
}

template<>
inline const char * name<ledctrl_interfaces::srv::BacklightValue>()
{
  return "ledctrl_interfaces/srv/BacklightValue";
}

template<>
struct has_fixed_size<ledctrl_interfaces::srv::BacklightValue>
  : std::integral_constant<
    bool,
    has_fixed_size<ledctrl_interfaces::srv::BacklightValue_Request>::value &&
    has_fixed_size<ledctrl_interfaces::srv::BacklightValue_Response>::value
  >
{
};

template<>
struct has_bounded_size<ledctrl_interfaces::srv::BacklightValue>
  : std::integral_constant<
    bool,
    has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Request>::value &&
    has_bounded_size<ledctrl_interfaces::srv::BacklightValue_Response>::value
  >
{
};

template<>
struct is_service<ledctrl_interfaces::srv::BacklightValue>
  : std::true_type
{
};

template<>
struct is_service_request<ledctrl_interfaces::srv::BacklightValue_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ledctrl_interfaces::srv::BacklightValue_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__TRAITS_HPP_
