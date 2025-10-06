// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorctrl_interfaces:srv/GetUARTs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/get_uar_ts.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__GET_UAR_TS__BUILDER_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__GET_UAR_TS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorctrl_interfaces/srv/detail/get_uar_ts__struct.hpp"
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
auto build<::motorctrl_interfaces::srv::GetUARTs_Request>()
{
  return ::motorctrl_interfaces::srv::GetUARTs_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetUARTs_Response_uart_names
{
public:
  Init_GetUARTs_Response_uart_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motorctrl_interfaces::srv::GetUARTs_Response uart_names(::motorctrl_interfaces::srv::GetUARTs_Response::_uart_names_type arg)
  {
    msg_.uart_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetUARTs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::GetUARTs_Response>()
{
  return motorctrl_interfaces::srv::builder::Init_GetUARTs_Response_uart_names();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetUARTs_Event_response
{
public:
  explicit Init_GetUARTs_Event_response(::motorctrl_interfaces::srv::GetUARTs_Event & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::GetUARTs_Event response(::motorctrl_interfaces::srv::GetUARTs_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetUARTs_Event msg_;
};

class Init_GetUARTs_Event_request
{
public:
  explicit Init_GetUARTs_Event_request(::motorctrl_interfaces::srv::GetUARTs_Event & msg)
  : msg_(msg)
  {}
  Init_GetUARTs_Event_response request(::motorctrl_interfaces::srv::GetUARTs_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetUARTs_Event_response(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetUARTs_Event msg_;
};

class Init_GetUARTs_Event_info
{
public:
  Init_GetUARTs_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetUARTs_Event_request info(::motorctrl_interfaces::srv::GetUARTs_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetUARTs_Event_request(msg_);
  }

private:
  ::motorctrl_interfaces::srv::GetUARTs_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::GetUARTs_Event>()
{
  return motorctrl_interfaces::srv::builder::Init_GetUARTs_Event_info();
}

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__GET_UAR_TS__BUILDER_HPP_
