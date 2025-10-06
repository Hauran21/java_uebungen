// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motorctrl_interfaces:srv/SearchMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/search_motors.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__STRUCT_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Request __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Request __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchMotors_Request_
{
  using Type = SearchMotors_Request_<ContainerAllocator>;

  explicit SearchMotors_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->baudrate = 0ul;
    }
  }

  explicit SearchMotors_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->baudrate = 0ul;
    }
  }

  // field types and members
  using _uart_port_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _uart_port_type uart_port;
  using _baudrate_type =
    uint32_t;
  _baudrate_type baudrate;

  // setters for named parameter idiom
  Type & set__uart_port(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->uart_port = _arg;
    return *this;
  }
  Type & set__baudrate(
    const uint32_t & _arg)
  {
    this->baudrate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Request
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Request
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchMotors_Request_ & other) const
  {
    if (this->uart_port != other.uart_port) {
      return false;
    }
    if (this->baudrate != other.baudrate) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchMotors_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchMotors_Request_

// alias to use template instance with default allocator
using SearchMotors_Request =
  motorctrl_interfaces::srv::SearchMotors_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces


#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Response __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Response __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchMotors_Response_
{
  using Type = SearchMotors_Response_<ContainerAllocator>;

  explicit SearchMotors_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit SearchMotors_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _motor_ids_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _motor_ids_type motor_ids;
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__motor_ids(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->motor_ids = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Response
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Response
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchMotors_Response_ & other) const
  {
    if (this->motor_ids != other.motor_ids) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchMotors_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchMotors_Response_

// alias to use template instance with default allocator
using SearchMotors_Response =
  motorctrl_interfaces::srv::SearchMotors_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Event __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Event __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchMotors_Event_
{
  using Type = SearchMotors_Event_<ContainerAllocator>;

  explicit SearchMotors_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SearchMotors_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SearchMotors_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::SearchMotors_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Event
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__SearchMotors_Event
    std::shared_ptr<motorctrl_interfaces::srv::SearchMotors_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchMotors_Event_ & other) const
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
  bool operator!=(const SearchMotors_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchMotors_Event_

// alias to use template instance with default allocator
using SearchMotors_Event =
  motorctrl_interfaces::srv::SearchMotors_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace motorctrl_interfaces
{

namespace srv
{

struct SearchMotors
{
  using Request = motorctrl_interfaces::srv::SearchMotors_Request;
  using Response = motorctrl_interfaces::srv::SearchMotors_Response;
  using Event = motorctrl_interfaces::srv::SearchMotors_Event;
};

}  // namespace srv

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__SEARCH_MOTORS__STRUCT_HPP_
