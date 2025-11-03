// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorctrl_interfaces:srv/SetMotorConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/set_motor_config.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__BUILDER_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorctrl_interfaces/srv/detail/set_motor_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorConfig_Request_uart_baudrate_new
{
public:
  explicit Init_SetMotorConfig_Request_uart_baudrate_new(::motorctrl_interfaces::srv::SetMotorConfig_Request & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SetMotorConfig_Request uart_baudrate_new(::motorctrl_interfaces::srv::SetMotorConfig_Request::_uart_baudrate_new_type arg)
  {
    msg_.uart_baudrate_new = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Request msg_;
};

class Init_SetMotorConfig_Request_motor_id_new
{
public:
  explicit Init_SetMotorConfig_Request_motor_id_new(::motorctrl_interfaces::srv::SetMotorConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetMotorConfig_Request_uart_baudrate_new motor_id_new(::motorctrl_interfaces::srv::SetMotorConfig_Request::_motor_id_new_type arg)
  {
    msg_.motor_id_new = std::move(arg);
    return Init_SetMotorConfig_Request_uart_baudrate_new(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Request msg_;
};

class Init_SetMotorConfig_Request_uart_baudrate
{
public:
  explicit Init_SetMotorConfig_Request_uart_baudrate(::motorctrl_interfaces::srv::SetMotorConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetMotorConfig_Request_motor_id_new uart_baudrate(::motorctrl_interfaces::srv::SetMotorConfig_Request::_uart_baudrate_type arg)
  {
    msg_.uart_baudrate = std::move(arg);
    return Init_SetMotorConfig_Request_motor_id_new(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Request msg_;
};

class Init_SetMotorConfig_Request_uart_name
{
public:
  explicit Init_SetMotorConfig_Request_uart_name(::motorctrl_interfaces::srv::SetMotorConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetMotorConfig_Request_uart_baudrate uart_name(::motorctrl_interfaces::srv::SetMotorConfig_Request::_uart_name_type arg)
  {
    msg_.uart_name = std::move(arg);
    return Init_SetMotorConfig_Request_uart_baudrate(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Request msg_;
};

class Init_SetMotorConfig_Request_motor_id
{
public:
  Init_SetMotorConfig_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorConfig_Request_uart_name motor_id(::motorctrl_interfaces::srv::SetMotorConfig_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_SetMotorConfig_Request_uart_name(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SetMotorConfig_Request>()
{
  return motorctrl_interfaces::srv::builder::Init_SetMotorConfig_Request_motor_id();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorConfig_Response_message
{
public:
  explicit Init_SetMotorConfig_Response_message(::motorctrl_interfaces::srv::SetMotorConfig_Response & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SetMotorConfig_Response message(::motorctrl_interfaces::srv::SetMotorConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Response msg_;
};

class Init_SetMotorConfig_Response_success
{
public:
  Init_SetMotorConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorConfig_Response_message success(::motorctrl_interfaces::srv::SetMotorConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMotorConfig_Response_message(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SetMotorConfig_Response>()
{
  return motorctrl_interfaces::srv::builder::Init_SetMotorConfig_Response_success();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorConfig_Event_response
{
public:
  explicit Init_SetMotorConfig_Event_response(::motorctrl_interfaces::srv::SetMotorConfig_Event & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::SetMotorConfig_Event response(::motorctrl_interfaces::srv::SetMotorConfig_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Event msg_;
};

class Init_SetMotorConfig_Event_request
{
public:
  explicit Init_SetMotorConfig_Event_request(::motorctrl_interfaces::srv::SetMotorConfig_Event & msg)
  : msg_(msg)
  {}
  Init_SetMotorConfig_Event_response request(::motorctrl_interfaces::srv::SetMotorConfig_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetMotorConfig_Event_response(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Event msg_;
};

class Init_SetMotorConfig_Event_info
{
public:
  Init_SetMotorConfig_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorConfig_Event_request info(::motorctrl_interfaces::srv::SetMotorConfig_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetMotorConfig_Event_request(msg_);
  }

private:
  ::motorctrl_interfaces::srv::SetMotorConfig_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::SetMotorConfig_Event>()
{
  return motorctrl_interfaces::srv::builder::Init_SetMotorConfig_Event_info();
}

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__BUILDER_HPP_
