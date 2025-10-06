// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motorctrl_interfaces:srv/TurnRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/turn_robot.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__TURN_ROBOT__BUILDER_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__TURN_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motorctrl_interfaces/srv/detail/turn_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurnRobot_Request_angle
{
public:
  Init_TurnRobot_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motorctrl_interfaces::srv::TurnRobot_Request angle(::motorctrl_interfaces::srv::TurnRobot_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::TurnRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::TurnRobot_Request>()
{
  return motorctrl_interfaces::srv::builder::Init_TurnRobot_Request_angle();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurnRobot_Response_status
{
public:
  Init_TurnRobot_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motorctrl_interfaces::srv::TurnRobot_Response status(::motorctrl_interfaces::srv::TurnRobot_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::TurnRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::TurnRobot_Response>()
{
  return motorctrl_interfaces::srv::builder::Init_TurnRobot_Response_status();
}

}  // namespace motorctrl_interfaces


namespace motorctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurnRobot_Event_response
{
public:
  explicit Init_TurnRobot_Event_response(::motorctrl_interfaces::srv::TurnRobot_Event & msg)
  : msg_(msg)
  {}
  ::motorctrl_interfaces::srv::TurnRobot_Event response(::motorctrl_interfaces::srv::TurnRobot_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motorctrl_interfaces::srv::TurnRobot_Event msg_;
};

class Init_TurnRobot_Event_request
{
public:
  explicit Init_TurnRobot_Event_request(::motorctrl_interfaces::srv::TurnRobot_Event & msg)
  : msg_(msg)
  {}
  Init_TurnRobot_Event_response request(::motorctrl_interfaces::srv::TurnRobot_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TurnRobot_Event_response(msg_);
  }

private:
  ::motorctrl_interfaces::srv::TurnRobot_Event msg_;
};

class Init_TurnRobot_Event_info
{
public:
  Init_TurnRobot_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnRobot_Event_request info(::motorctrl_interfaces::srv::TurnRobot_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TurnRobot_Event_request(msg_);
  }

private:
  ::motorctrl_interfaces::srv::TurnRobot_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motorctrl_interfaces::srv::TurnRobot_Event>()
{
  return motorctrl_interfaces::srv::builder::Init_TurnRobot_Event_info();
}

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__TURN_ROBOT__BUILDER_HPP_
