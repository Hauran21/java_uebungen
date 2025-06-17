// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/camera_cmd.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__BUILDER_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ledctrl_interfaces/srv/detail/camera_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraCmd_Request_repetitions
{
public:
  explicit Init_CameraCmd_Request_repetitions(::ledctrl_interfaces::srv::CameraCmd_Request & msg)
  : msg_(msg)
  {}
  ::ledctrl_interfaces::srv::CameraCmd_Request repetitions(::ledctrl_interfaces::srv::CameraCmd_Request::_repetitions_type arg)
  {
    msg_.repetitions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

class Init_CameraCmd_Request_duration_off
{
public:
  explicit Init_CameraCmd_Request_duration_off(::ledctrl_interfaces::srv::CameraCmd_Request & msg)
  : msg_(msg)
  {}
  Init_CameraCmd_Request_repetitions duration_off(::ledctrl_interfaces::srv::CameraCmd_Request::_duration_off_type arg)
  {
    msg_.duration_off = std::move(arg);
    return Init_CameraCmd_Request_repetitions(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

class Init_CameraCmd_Request_duration_on
{
public:
  explicit Init_CameraCmd_Request_duration_on(::ledctrl_interfaces::srv::CameraCmd_Request & msg)
  : msg_(msg)
  {}
  Init_CameraCmd_Request_duration_off duration_on(::ledctrl_interfaces::srv::CameraCmd_Request::_duration_on_type arg)
  {
    msg_.duration_on = std::move(arg);
    return Init_CameraCmd_Request_duration_off(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

class Init_CameraCmd_Request_color_off
{
public:
  explicit Init_CameraCmd_Request_color_off(::ledctrl_interfaces::srv::CameraCmd_Request & msg)
  : msg_(msg)
  {}
  Init_CameraCmd_Request_duration_on color_off(::ledctrl_interfaces::srv::CameraCmd_Request::_color_off_type arg)
  {
    msg_.color_off = std::move(arg);
    return Init_CameraCmd_Request_duration_on(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

class Init_CameraCmd_Request_color_on
{
public:
  explicit Init_CameraCmd_Request_color_on(::ledctrl_interfaces::srv::CameraCmd_Request & msg)
  : msg_(msg)
  {}
  Init_CameraCmd_Request_color_off color_on(::ledctrl_interfaces::srv::CameraCmd_Request::_color_on_type arg)
  {
    msg_.color_on = std::move(arg);
    return Init_CameraCmd_Request_color_off(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

class Init_CameraCmd_Request_side
{
public:
  explicit Init_CameraCmd_Request_side(::ledctrl_interfaces::srv::CameraCmd_Request & msg)
  : msg_(msg)
  {}
  Init_CameraCmd_Request_color_on side(::ledctrl_interfaces::srv::CameraCmd_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return Init_CameraCmd_Request_color_on(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

class Init_CameraCmd_Request_cmd
{
public:
  Init_CameraCmd_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCmd_Request_side cmd(::ledctrl_interfaces::srv::CameraCmd_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_CameraCmd_Request_side(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::CameraCmd_Request>()
{
  return ledctrl_interfaces::srv::builder::Init_CameraCmd_Request_cmd();
}

}  // namespace ledctrl_interfaces


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraCmd_Response_status
{
public:
  Init_CameraCmd_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ledctrl_interfaces::srv::CameraCmd_Response status(::ledctrl_interfaces::srv::CameraCmd_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::CameraCmd_Response>()
{
  return ledctrl_interfaces::srv::builder::Init_CameraCmd_Response_status();
}

}  // namespace ledctrl_interfaces


namespace ledctrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_CameraCmd_Event_response
{
public:
  explicit Init_CameraCmd_Event_response(::ledctrl_interfaces::srv::CameraCmd_Event & msg)
  : msg_(msg)
  {}
  ::ledctrl_interfaces::srv::CameraCmd_Event response(::ledctrl_interfaces::srv::CameraCmd_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Event msg_;
};

class Init_CameraCmd_Event_request
{
public:
  explicit Init_CameraCmd_Event_request(::ledctrl_interfaces::srv::CameraCmd_Event & msg)
  : msg_(msg)
  {}
  Init_CameraCmd_Event_response request(::ledctrl_interfaces::srv::CameraCmd_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CameraCmd_Event_response(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Event msg_;
};

class Init_CameraCmd_Event_info
{
public:
  Init_CameraCmd_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCmd_Event_request info(::ledctrl_interfaces::srv::CameraCmd_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CameraCmd_Event_request(msg_);
  }

private:
  ::ledctrl_interfaces::srv::CameraCmd_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ledctrl_interfaces::srv::CameraCmd_Event>()
{
  return ledctrl_interfaces::srv::builder::Init_CameraCmd_Event_info();
}

}  // namespace ledctrl_interfaces

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__BUILDER_HPP_
