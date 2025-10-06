// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorctrl_interfaces:srv/SetGUIParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/set_gui_parameters.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SET_GUI_PARAMETERS__BUILDER_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SET_GUI_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorctrl_interfaces/srv/detail/set_gui_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGUIParameters_Request_wheel_separation
{
public:
  explicit Init_SetGUIParameters_Request_wheel_separation(::motorctrl_interfaces::srv::SetGUIParameters_Request & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SetGUIParameters_Request wheel_separation(::motorctrl_interfaces::srv::SetGUIParameters_Request::_wheel_separation_type arg)
  {
    msg_.wheel_separation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Request msg_;
};

class Init_SetGUIParameters_Request_wheel_radius
{
public:
  explicit Init_SetGUIParameters_Request_wheel_radius(::motorctrl_interfaces::srv::SetGUIParameters_Request & msg)
  : msg_(msg)
  {}
  Init_SetGUIParameters_Request_wheel_separation wheel_radius(::motorctrl_interfaces::srv::SetGUIParameters_Request::_wheel_radius_type arg)
  {
    msg_.wheel_radius = std::move(arg);
    return Init_SetGUIParameters_Request_wheel_separation(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Request msg_;
};

class Init_SetGUIParameters_Request_motor_ids
{
public:
  explicit Init_SetGUIParameters_Request_motor_ids(::motorctrl_interfaces::srv::SetGUIParameters_Request & msg)
  : msg_(msg)
  {}
  Init_SetGUIParameters_Request_wheel_radius motor_ids(::motorctrl_interfaces::srv::SetGUIParameters_Request::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return Init_SetGUIParameters_Request_wheel_radius(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Request msg_;
};

class Init_SetGUIParameters_Request_uart_baudrate
{
public:
  explicit Init_SetGUIParameters_Request_uart_baudrate(::motorctrl_interfaces::srv::SetGUIParameters_Request & msg)
  : msg_(msg)
  {}
  Init_SetGUIParameters_Request_motor_ids uart_baudrate(::motorctrl_interfaces::srv::SetGUIParameters_Request::_uart_baudrate_type arg)
  {
    msg_.uart_baudrate = std::move(arg);
    return Init_SetGUIParameters_Request_motor_ids(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Request msg_;
};

class Init_SetGUIParameters_Request_uart_name
{
public:
  Init_SetGUIParameters_Request_uart_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGUIParameters_Request_uart_baudrate uart_name(::motorctrl_interfaces::srv::SetGUIParameters_Request::_uart_name_type arg)
  {
    msg_.uart_name = std::move(arg);
    return Init_SetGUIParameters_Request_uart_baudrate(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SetGUIParameters_Request>()
{
  return motorctrl_interfaces::srv::builder::Init_SetGUIParameters_Request_uart_name();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGUIParameters_Response_status
{
public:
  Init_SetGUIParameters_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motorctrl_interfaces::srv::SetGUIParameters_Response status(::motorctrl_interfaces::srv::SetGUIParameters_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SetGUIParameters_Response>()
{
  return motorctrl_interfaces::srv::builder::Init_SetGUIParameters_Response_status();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGUIParameters_Event_response
{
public:
  explicit Init_SetGUIParameters_Event_response(::motorctrl_interfaces::srv::SetGUIParameters_Event & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SetGUIParameters_Event response(::motorctrl_interfaces::srv::SetGUIParameters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Event msg_;
};

class Init_SetGUIParameters_Event_request
{
public:
  explicit Init_SetGUIParameters_Event_request(::motorctrl_interfaces::srv::SetGUIParameters_Event & msg)
  : msg_(msg)
  {}
  Init_SetGUIParameters_Event_response request(::motorctrl_interfaces::srv::SetGUIParameters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGUIParameters_Event_response(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Event msg_;
};

class Init_SetGUIParameters_Event_info
{
public:
  Init_SetGUIParameters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGUIParameters_Event_request info(::motorctrl_interfaces::srv::SetGUIParameters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGUIParameters_Event_request(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetGUIParameters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SetGUIParameters_Event>()
{
  return motorctrl_interfaces::srv::builder::Init_SetGUIParameters_Event_info();
}

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SET_GUI_PARAMETERS__BUILDER_HPP_
