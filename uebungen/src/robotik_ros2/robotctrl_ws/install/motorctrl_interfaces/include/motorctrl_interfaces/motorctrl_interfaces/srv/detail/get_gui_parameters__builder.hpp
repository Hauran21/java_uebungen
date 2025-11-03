// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorctrl_interfaces:srv/GetGUIParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/get_gui_parameters.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__GET_GUI_PARAMETERS__BUILDER_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__GET_GUI_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorctrl_interfaces/srv/detail/get_gui_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motorctrl_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::GetGUIParameters_Request>()
{
  return ::motorctrl_interfaces::srv::GetGUIParameters_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGUIParameters_Response_wheel_separation
{
public:
  explicit Init_GetGUIParameters_Response_wheel_separation(::motorctrl_interfaces::srv::GetGUIParameters_Response & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::GetGUIParameters_Response wheel_separation(::motorctrl_interfaces::srv::GetGUIParameters_Response::_wheel_separation_type arg)
  {
    msg_.wheel_separation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Response msg_;
};

class Init_GetGUIParameters_Response_wheel_radius
{
public:
  explicit Init_GetGUIParameters_Response_wheel_radius(::motorctrl_interfaces::srv::GetGUIParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetGUIParameters_Response_wheel_separation wheel_radius(::motorctrl_interfaces::srv::GetGUIParameters_Response::_wheel_radius_type arg)
  {
    msg_.wheel_radius = std::move(arg);
    return Init_GetGUIParameters_Response_wheel_separation(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Response msg_;
};

class Init_GetGUIParameters_Response_motor_ids
{
public:
  explicit Init_GetGUIParameters_Response_motor_ids(::motorctrl_interfaces::srv::GetGUIParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetGUIParameters_Response_wheel_radius motor_ids(::motorctrl_interfaces::srv::GetGUIParameters_Response::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return Init_GetGUIParameters_Response_wheel_radius(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Response msg_;
};

class Init_GetGUIParameters_Response_uart_baudrate
{
public:
  explicit Init_GetGUIParameters_Response_uart_baudrate(::motorctrl_interfaces::srv::GetGUIParameters_Response & msg)
  : msg_(msg)
  {}
  Init_GetGUIParameters_Response_motor_ids uart_baudrate(::motorctrl_interfaces::srv::GetGUIParameters_Response::_uart_baudrate_type arg)
  {
    msg_.uart_baudrate = std::move(arg);
    return Init_GetGUIParameters_Response_motor_ids(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Response msg_;
};

class Init_GetGUIParameters_Response_uart_name
{
public:
  Init_GetGUIParameters_Response_uart_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGUIParameters_Response_uart_baudrate uart_name(::motorctrl_interfaces::srv::GetGUIParameters_Response::_uart_name_type arg)
  {
    msg_.uart_name = std::move(arg);
    return Init_GetGUIParameters_Response_uart_baudrate(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::GetGUIParameters_Response>()
{
  return motorctrl_interfaces::srv::builder::Init_GetGUIParameters_Response_uart_name();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGUIParameters_Event_response
{
public:
  explicit Init_GetGUIParameters_Event_response(::motorctrl_interfaces::srv::GetGUIParameters_Event & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::GetGUIParameters_Event response(::motorctrl_interfaces::srv::GetGUIParameters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Event msg_;
};

class Init_GetGUIParameters_Event_request
{
public:
  explicit Init_GetGUIParameters_Event_request(::motorctrl_interfaces::srv::GetGUIParameters_Event & msg)
  : msg_(msg)
  {}
  Init_GetGUIParameters_Event_response request(::motorctrl_interfaces::srv::GetGUIParameters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetGUIParameters_Event_response(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Event msg_;
};

class Init_GetGUIParameters_Event_info
{
public:
  Init_GetGUIParameters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGUIParameters_Event_request info(::motorctrl_interfaces::srv::GetGUIParameters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetGUIParameters_Event_request(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetGUIParameters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::GetGUIParameters_Event>()
{
  return motorctrl_interfaces::srv::builder::Init_GetGUIParameters_Event_info();
}

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__GET_GUI_PARAMETERS__BUILDER_HPP_
