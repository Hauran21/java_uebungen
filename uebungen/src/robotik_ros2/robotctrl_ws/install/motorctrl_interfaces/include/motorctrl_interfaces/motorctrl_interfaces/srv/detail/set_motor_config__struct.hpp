// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motorctrl_interfaces:srv/SetMotorConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/set_motor_config.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__STRUCT_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Request __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorConfig_Request_
{
  using Type = SetMotorConfig_Request_<ContainerAllocator>;

  explicit SetMotorConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->uart_name = "";
      this->uart_baudrate = 0ul;
      this->motor_id_new = 0;
      this->uart_baudrate_new = 0ul;
    }
  }

  explicit SetMotorConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uart_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->uart_name = "";
      this->uart_baudrate = 0ul;
      this->motor_id_new = 0;
      this->uart_baudrate_new = 0ul;
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _uart_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uart_name_type uart_name;
  using _uart_baudrate_type =
    uint32_t;
  _uart_baudrate_type uart_baudrate;
  using _motor_id_new_type =
    uint8_t;
  _motor_id_new_type motor_id_new;
  using _uart_baudrate_new_type =
    uint32_t;
  _uart_baudrate_new_type uart_baudrate_new;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint8_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__uart_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uart_name = _arg;
    return *this;
  }
  Type & set__uart_baudrate(
    const uint32_t & _arg)
  {
    this->uart_baudrate = _arg;
    return *this;
  }
  Type & set__motor_id_new(
    const uint8_t & _arg)
  {
    this->motor_id_new = _arg;
    return *this;
  }
  Type & set__uart_baudrate_new(
    const uint32_t & _arg)
  {
    this->uart_baudrate_new = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Request
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Request
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorConfig_Request_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->uart_name != other.uart_name) {
      return false;
    }
    if (this->uart_baudrate != other.uart_baudrate) {
      return false;
    }
    if (this->motor_id_new != other.motor_id_new) {
      return false;
    }
    if (this->uart_baudrate_new != other.uart_baudrate_new) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorConfig_Request_

// alias to use template instance with default allocator
using SetMotorConfig_Request =
  motorctrl_interfaces::srv::SetMotorConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces


#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Response __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorConfig_Response_
{
  using Type = SetMotorConfig_Response_<ContainerAllocator>;

  explicit SetMotorConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetMotorConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Response
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Response
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorConfig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorConfig_Response_

// alias to use template instance with default allocator
using SetMotorConfig_Response =
  motorctrl_interfaces::srv::SetMotorConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Event __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Event __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorConfig_Event_
{
  using Type = SetMotorConfig_Event_<ContainerAllocator>;

  explicit SetMotorConfig_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetMotorConfig_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SetMotorConfig_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SetMotorConfig_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Event
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__SetMotorConfig_Event
    std::shared_ptr<motorctrl_interfaces::srv::SetMotorConfig_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorConfig_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorConfig_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorConfig_Event_

// alias to use template instance with default allocator
using SetMotorConfig_Event =
  motorctrl_interfaces::srv::SetMotorConfig_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace motorctrl_interfaces
{

namespace srv
{

struct SetMotorConfig
{
  using Request = motorctrl_interfaces::srv::SetMotorConfig_Request;
  using Response = motorctrl_interfaces::srv::SetMotorConfig_Response;
  using Event = motorctrl_interfaces::srv::SetMotorConfig_Event;
};

}  // namespace srv

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SET_MOTOR_CONFIG__STRUCT_HPP_
