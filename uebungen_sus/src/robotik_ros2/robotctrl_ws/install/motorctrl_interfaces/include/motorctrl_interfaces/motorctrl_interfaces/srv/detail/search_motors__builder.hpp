// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorctrl_interfaces:srv/SearchMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/search_motors.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__BUILDER_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorctrl_interfaces/srv/detail/search_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SearchMotors_Request_baudrate
{
public:
  explicit Init_SearchMotors_Request_baudrate(::motorctrl_interfaces::srv::SearchMotors_Request & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SearchMotors_Request baudrate(::motorctrl_interfaces::srv::SearchMotors_Request::_baudrate_type arg)
  {
    msg_.baudrate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Request msg_;
};

class Init_SearchMotors_Request_uart_port
{
public:
  Init_SearchMotors_Request_uart_port()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchMotors_Request_baudrate uart_port(::motorctrl_interfaces::srv::SearchMotors_Request::_uart_port_type arg)
  {
    msg_.uart_port = std::move(arg);
    return Init_SearchMotors_Request_baudrate(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SearchMotors_Request>()
{
  return motorctrl_interfaces::srv::builder::Init_SearchMotors_Request_uart_port();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SearchMotors_Response_status
{
public:
  explicit Init_SearchMotors_Response_status(::motorctrl_interfaces::srv::SearchMotors_Response & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SearchMotors_Response status(::motorctrl_interfaces::srv::SearchMotors_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Response msg_;
};

class Init_SearchMotors_Response_motor_ids
{
public:
  Init_SearchMotors_Response_motor_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchMotors_Response_status motor_ids(::motorctrl_interfaces::srv::SearchMotors_Response::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return Init_SearchMotors_Response_status(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SearchMotors_Response>()
{
  return motorctrl_interfaces::srv::builder::Init_SearchMotors_Response_motor_ids();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SearchMotors_Event_response
{
public:
  explicit Init_SearchMotors_Event_response(::motorctrl_interfaces::srv::SearchMotors_Event & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SearchMotors_Event response(::motorctrl_interfaces::srv::SearchMotors_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Event msg_;
};

class Init_SearchMotors_Event_request
{
public:
  explicit Init_SearchMotors_Event_request(::motorctrl_interfaces::srv::SearchMotors_Event & msg)
  : msg_(msg)
  {}
  Init_SearchMotors_Event_response request(::motorctrl_interfaces::srv::SearchMotors_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SearchMotors_Event_response(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Event msg_;
};

class Init_SearchMotors_Event_info
{
public:
  Init_SearchMotors_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SearchMotors_Event_request info(::motorctrl_interfaces::srv::SearchMotors_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SearchMotors_Event_request(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SearchMotors_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SearchMotors_Event>()
{
  return motorctrl_interfaces::srv::builder::Init_SearchMotors_Event_info();
}

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__BUILDER_HPP_
