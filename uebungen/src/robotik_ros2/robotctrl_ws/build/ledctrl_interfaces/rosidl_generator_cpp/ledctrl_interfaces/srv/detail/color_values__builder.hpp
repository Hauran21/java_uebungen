// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ledctrl_interfaces:srv/ColorValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/color_values.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__BUILDER_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ledctrl_interfaces/srv/detail/color_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ledctrl_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::ColorValues_Request>()
{
  return ::ledctrl_interfaces::srv::ColorValues_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ledctrl_interfaces


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColorValues_Response_status
{
public:
  explicit Init_ColorValues_Response_status(::ledctrl_interfaces::srv::ColorValues_Response & msg)
  : msg_(msg)
  {}
  ::ledctrl_interfaces::srv::ColorValues_Response status(::ledctrl_interfaces::srv::ColorValues_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::ColorValues_Response msg_;
};

class Init_ColorValues_Response_colors
{
public:
  Init_ColorValues_Response_colors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorValues_Response_status colors(::ledctrl_interfaces::srv::ColorValues_Response::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return Init_ColorValues_Response_status(msg_);
  }

private:
  ::ledctrl_interfaces::srv::ColorValues_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::ColorValues_Response>()
{
  return ledctrl_interfaces::srv::builder::Init_ColorValues_Response_colors();
}

}  // namespace ledctrl_interfaces


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_ColorValues_Event_response
{
public:
  explicit Init_ColorValues_Event_response(::ledctrl_interfaces::srv::ColorValues_Event & msg)
  : msg_(msg)
  {}
  ::ledctrl_interfaces::srv::ColorValues_Event response(::ledctrl_interfaces::srv::ColorValues_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::ColorValues_Event msg_;
};

class Init_ColorValues_Event_request
{
public:
  explicit Init_ColorValues_Event_request(::ledctrl_interfaces::srv::ColorValues_Event & msg)
  : msg_(msg)
  {}
  Init_ColorValues_Event_response request(::ledctrl_interfaces::srv::ColorValues_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ColorValues_Event_response(msg_);
  }

private:
  ::ledctrl_interfaces::srv::ColorValues_Event msg_;
};

class Init_ColorValues_Event_info
{
public:
  Init_ColorValues_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorValues_Event_request info(::ledctrl_interfaces::srv::ColorValues_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ColorValues_Event_request(msg_);
  }

private:
  ::ledctrl_interfaces::srv::ColorValues_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::ColorValues_Event>()
{
  return ledctrl_interfaces::srv::builder::Init_ColorValues_Event_info();
}

}  // namespace ledctrl_interfaces

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__BUILDER_HPP_
