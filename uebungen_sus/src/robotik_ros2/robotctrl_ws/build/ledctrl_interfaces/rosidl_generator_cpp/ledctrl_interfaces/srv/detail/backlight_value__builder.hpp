// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ledctrl_interfaces:srv/BacklightValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/backlight_value.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__BUILDER_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ledctrl_interfaces/srv/detail/backlight_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_BacklightValue_Request_brightness_percent
{
public:
  explicit Init_BacklightValue_Request_brightness_percent(::ledctrl_interfaces::srv::BacklightValue_Request & msg)
  : msg_(msg)
  {}
  ::ledctrl_interfaces::srv::BacklightValue_Request brightness_percent(::ledctrl_interfaces::srv::BacklightValue_Request::_brightness_percent_type arg)
  {
    msg_.brightness_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::BacklightValue_Request msg_;
};

class Init_BacklightValue_Request_side
{
public:
  Init_BacklightValue_Request_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BacklightValue_Request_brightness_percent side(::ledctrl_interfaces::srv::BacklightValue_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return Init_BacklightValue_Request_brightness_percent(msg_);
  }

private:
  ::ledctrl_interfaces::srv::BacklightValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::BacklightValue_Request>()
{
  return ledctrl_interfaces::srv::builder::Init_BacklightValue_Request_side();
}

}  // namespace ledctrl_interfaces


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_BacklightValue_Response_status
{
public:
  Init_BacklightValue_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ledctrl_interfaces::srv::BacklightValue_Response status(::ledctrl_interfaces::srv::BacklightValue_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::BacklightValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::BacklightValue_Response>()
{
  return ledctrl_interfaces::srv::builder::Init_BacklightValue_Response_status();
}

}  // namespace ledctrl_interfaces


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_BacklightValue_Event_response
{
public:
  explicit Init_BacklightValue_Event_response(::ledctrl_interfaces::srv::BacklightValue_Event & msg)
  : msg_(msg)
  {}
  ::ledctrl_interfaces::srv::BacklightValue_Event response(::ledctrl_interfaces::srv::BacklightValue_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::BacklightValue_Event msg_;
};

class Init_BacklightValue_Event_request
{
public:
  explicit Init_BacklightValue_Event_request(::ledctrl_interfaces::srv::BacklightValue_Event & msg)
  : msg_(msg)
  {}
  Init_BacklightValue_Event_response request(::ledctrl_interfaces::srv::BacklightValue_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BacklightValue_Event_response(msg_);
  }

private:
  ::ledctrl_interfaces::srv::BacklightValue_Event msg_;
};

class Init_BacklightValue_Event_info
{
public:
  Init_BacklightValue_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BacklightValue_Event_request info(::ledctrl_interfaces::srv::BacklightValue_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BacklightValue_Event_request(msg_);
  }

private:
  ::ledctrl_interfaces::srv::BacklightValue_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::BacklightValue_Event>()
{
  return ledctrl_interfaces::srv::builder::Init_BacklightValue_Event_info();
}

}  // namespace ledctrl_interfaces

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__BACKLIGHT_VALUE__BUILDER_HPP_
