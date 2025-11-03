// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cameractrl_interfaces:srv/TriggerSnapshot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cameractrl_interfaces/srv/trigger_snapshot.hpp"


#ifndef CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__TRAITS_HPP_
#define CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cameractrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerSnapshot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: fr
  {
    out << "fr: ";
    rosidl_generator_traits::value_to_yaml(msg.fr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerSnapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr: ";
    rosidl_generator_traits::value_to_yaml(msg.fr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerSnapshot_Request & msg, bool use_flow_style = false)
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

}  // namespace cameractrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cameractrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cameractrl_interfaces::srv::TriggerSnapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cameractrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cameractrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cameractrl_interfaces::srv::TriggerSnapshot_Request & msg)
{
  return cameractrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cameractrl_interfaces::srv::TriggerSnapshot_Request>()
{
  return "cameractrl_interfaces::srv::TriggerSnapshot_Request";
}

template<>
inline const char * name<cameractrl_interfaces::srv::TriggerSnapshot_Request>()
{
  return "cameractrl_interfaces/srv/TriggerSnapshot_Request";
}

template<>
struct has_fixed_size<cameractrl_interfaces::srv::TriggerSnapshot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cameractrl_interfaces::srv::TriggerSnapshot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cameractrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerSnapshot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerSnapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerSnapshot_Response & msg, bool use_flow_style = false)
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

}  // namespace cameractrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cameractrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cameractrl_interfaces::srv::TriggerSnapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cameractrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cameractrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cameractrl_interfaces::srv::TriggerSnapshot_Response & msg)
{
  return cameractrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cameractrl_interfaces::srv::TriggerSnapshot_Response>()
{
  return "cameractrl_interfaces::srv::TriggerSnapshot_Response";
}

template<>
inline const char * name<cameractrl_interfaces::srv::TriggerSnapshot_Response>()
{
  return "cameractrl_interfaces/srv/TriggerSnapshot_Response";
}

template<>
struct has_fixed_size<cameractrl_interfaces::srv::TriggerSnapshot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cameractrl_interfaces::srv::TriggerSnapshot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace cameractrl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerSnapshot_Event & msg,
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
  const TriggerSnapshot_Event & msg,
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

inline std::string to_yaml(const TriggerSnapshot_Event & msg, bool use_flow_style = false)
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

}  // namespace cameractrl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cameractrl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cameractrl_interfaces::srv::TriggerSnapshot_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  cameractrl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cameractrl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cameractrl_interfaces::srv::TriggerSnapshot_Event & msg)
{
  return cameractrl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cameractrl_interfaces::srv::TriggerSnapshot_Event>()
{
  return "cameractrl_interfaces::srv::TriggerSnapshot_Event";
}

template<>
inline const char * name<cameractrl_interfaces::srv::TriggerSnapshot_Event>()
{
  return "cameractrl_interfaces/srv/TriggerSnapshot_Event";
}

template<>
struct has_fixed_size<cameractrl_interfaces::srv::TriggerSnapshot_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Event>
  : std::integral_constant<bool, has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Request>::value && has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<cameractrl_interfaces::srv::TriggerSnapshot_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cameractrl_interfaces::srv::TriggerSnapshot>()
{
  return "cameractrl_interfaces::srv::TriggerSnapshot";
}

template<>
inline const char * name<cameractrl_interfaces::srv::TriggerSnapshot>()
{
  return "cameractrl_interfaces/srv/TriggerSnapshot";
}

template<>
struct has_fixed_size<cameractrl_interfaces::srv::TriggerSnapshot>
  : std::integral_constant<
    bool,
    has_fixed_size<cameractrl_interfaces::srv::TriggerSnapshot_Request>::value &&
    has_fixed_size<cameractrl_interfaces::srv::TriggerSnapshot_Response>::value
  >
{
};

template<>
struct has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot>
  : std::integral_constant<
    bool,
    has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Request>::value &&
    has_bounded_size<cameractrl_interfaces::srv::TriggerSnapshot_Response>::value
  >
{
};

template<>
struct is_service<cameractrl_interfaces::srv::TriggerSnapshot>
  : std::true_type
{
};

template<>
struct is_service_request<cameractrl_interfaces::srv::TriggerSnapshot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cameractrl_interfaces::srv::TriggerSnapshot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__TRAITS_HPP_
