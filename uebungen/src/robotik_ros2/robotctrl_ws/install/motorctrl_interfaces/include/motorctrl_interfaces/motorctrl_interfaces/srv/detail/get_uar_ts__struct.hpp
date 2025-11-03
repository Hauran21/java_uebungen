// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motorctrl_interfaces:srv/GetUARTs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motorctrl_interfaces/srv/get_uar_ts.hpp"


#ifndef MOTORCTRL_INTERFACES__SRV__DETAIL__GET_UAR_TS__STRUCT_HPP_
#define MOTORCTRL_INTERFACES__SRV__DETAIL__GET_UAR_TS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Request __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Request __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUARTs_Request_
{
  using Type = GetUARTs_Request_<ContainerAllocator>;

  explicit GetUARTs_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetUARTs_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Request
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Request
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUARTs_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUARTs_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUARTs_Request_

// alias to use template instance with default allocator
using GetUARTs_Request =
  motorctrl_interfaces::srv::GetUARTs_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces


#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Response __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Response __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUARTs_Response_
{
  using Type = GetUARTs_Response_<ContainerAllocator>;

  explicit GetUARTs_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetUARTs_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _uart_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _uart_names_type uart_names;

  // setters for named parameter idiom
  Type & set__uart_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->uart_names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Response
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Response
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUARTs_Response_ & other) const
  {
    if (this->uart_names != other.uart_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetUARTs_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUARTs_Response_

// alias to use template instance with default allocator
using GetUARTs_Response =
  motorctrl_interfaces::srv::GetUARTs_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Event __attribute__((deprecated))
#else
# define DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Event __declspec(deprecated)
#endif

namespace motorctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetUARTs_Event_
{
  using Type = GetUARTs_Event_<ContainerAllocator>;

  explicit GetUARTs_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetUARTs_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::GetUARTs_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<motorctrl_interfaces::srv::GetUARTs_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Event
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motorctrl_interfaces__srv__GetUARTs_Event
    std::shared_ptr<motorctrl_interfaces::srv::GetUARTs_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetUARTs_Event_ & other) const
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
  bool operator!=(const GetUARTs_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetUARTs_Event_

// alias to use template instance with default allocator
using GetUARTs_Event =
  motorctrl_interfaces::srv::GetUARTs_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace motorctrl_interfaces

namespace motorctrl_interfaces
{

namespace srv
{

struct GetUARTs
{
  using Request = motorctrl_interfaces::srv::GetUARTs_Request;
  using Response = motorctrl_interfaces::srv::GetUARTs_Response;
  using Event = motorctrl_interfaces::srv::GetUARTs_Event;
};

}  // namespace srv

}  // namespace motorctrl_interfaces

#endif  // MOTORCTRL_INTERFACES__SRV__DETAIL__GET_UAR_TS__STRUCT_HPP_
