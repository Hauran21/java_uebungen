// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cameractrl_interfaces:srv/TriggerSnapshot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cameractrl_interfaces/srv/trigger_snapshot.hpp"


#ifndef CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__BUILDER_HPP_
#define CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cameractrl_interfaces/srv/detail/trigger_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cameractrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerSnapshot_Request_fr
{
public:
  Init_TriggerSnapshot_Request_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cameractrl_interfaces::srv::TriggerSnapshot_Request fr(::cameractrl_interfaces::srv::TriggerSnapshot_Request::_fr_type arg)
  {
    msg_.fr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cameractrl_interfaces::srv::TriggerSnapshot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cameractrl_interfaces::srv::TriggerSnapshot_Request>()
{
  return cameractrl_interfaces::srv::builder::Init_TriggerSnapshot_Request_fr();
}

}  // namespace cameractrl_interfaces


namespace cameractrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerSnapshot_Response_success
{
public:
  Init_TriggerSnapshot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cameractrl_interfaces::srv::TriggerSnapshot_Response success(::cameractrl_interfaces::srv::TriggerSnapshot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cameractrl_interfaces::srv::TriggerSnapshot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cameractrl_interfaces::srv::TriggerSnapshot_Response>()
{
  return cameractrl_interfaces::srv::builder::Init_TriggerSnapshot_Response_success();
}

}  // namespace cameractrl_interfaces


namespace cameractrl_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerSnapshot_Event_response
{
public:
  explicit Init_TriggerSnapshot_Event_response(::cameractrl_interfaces::srv::TriggerSnapshot_Event & msg)
  : msg_(msg)
  {}
  ::cameractrl_interfaces::srv::TriggerSnapshot_Event response(::cameractrl_interfaces::srv::TriggerSnapshot_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cameractrl_interfaces::srv::TriggerSnapshot_Event msg_;
};

class Init_TriggerSnapshot_Event_request
{
public:
  explicit Init_TriggerSnapshot_Event_request(::cameractrl_interfaces::srv::TriggerSnapshot_Event & msg)
  : msg_(msg)
  {}
  Init_TriggerSnapshot_Event_response request(::cameractrl_interfaces::srv::TriggerSnapshot_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TriggerSnapshot_Event_response(msg_);
  }

private:
  ::cameractrl_interfaces::srv::TriggerSnapshot_Event msg_;
};

class Init_TriggerSnapshot_Event_info
{
public:
  Init_TriggerSnapshot_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerSnapshot_Event_request info(::cameractrl_interfaces::srv::TriggerSnapshot_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TriggerSnapshot_Event_request(msg_);
  }

private:
  ::cameractrl_interfaces::srv::TriggerSnapshot_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cameractrl_interfaces::srv::TriggerSnapshot_Event>()
{
  return cameractrl_interfaces::srv::builder::Init_TriggerSnapshot_Event_info();
}

}  // namespace cameractrl_interfaces

#endif  // CAMERACTRL_INTERFACES__SRV__DETAIL__TRIGGER_SNAPSHOT__BUILDER_HPP_
