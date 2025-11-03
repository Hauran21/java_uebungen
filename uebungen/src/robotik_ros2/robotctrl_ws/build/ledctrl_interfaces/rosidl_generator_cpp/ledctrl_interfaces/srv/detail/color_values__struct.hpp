// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ledctrl_interfaces:srv/ColorValues.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/color_values.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__STRUCT_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ledctrl_interfaces__srv__ColorValues_Request __attribute__((deprecated))
#else
# define DEPRECATED__ledctrl_interfaces__srv__ColorValues_Request __declspec(deprecated)
#endif

namespace ledctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColorValues_Request_
{
  using Type = ColorValues_Request_<ContainerAllocator>;

  explicit ColorValues_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ColorValues_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ledctrl_interfaces__srv__ColorValues_Request
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ledctrl_interfaces__srv__ColorValues_Request
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorValues_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorValues_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorValues_Request_

// alias to use template instance with default allocator
using ColorValues_Request =
  ledctrl_interfaces::srv::ColorValues_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ledctrl_interfaces


#ifndef _WIN32
# define DEPRECATED__ledctrl_interfaces__srv__ColorValues_Response __attribute__((deprecated))
#else
# define DEPRECATED__ledctrl_interfaces__srv__ColorValues_Response __declspec(deprecated)
#endif

namespace ledctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColorValues_Response_
{
  using Type = ColorValues_Response_<ContainerAllocator>;

  explicit ColorValues_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ColorValues_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _colors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _colors_type colors;
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__colors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->colors = _arg;
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
    ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ledctrl_interfaces__srv__ColorValues_Response
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ledctrl_interfaces__srv__ColorValues_Response
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorValues_Response_ & other) const
  {
    if (this->colors != other.colors) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorValues_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorValues_Response_

// alias to use template instance with default allocator
using ColorValues_Response =
  ledctrl_interfaces::srv::ColorValues_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ledctrl_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ledctrl_interfaces__srv__ColorValues_Event __attribute__((deprecated))
#else
# define DEPRECATED__ledctrl_interfaces__srv__ColorValues_Event __declspec(deprecated)
#endif

namespace ledctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColorValues_Event_
{
  using Type = ColorValues_Event_<ContainerAllocator>;

  explicit ColorValues_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ColorValues_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::ColorValues_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::ColorValues_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ledctrl_interfaces__srv__ColorValues_Event
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ledctrl_interfaces__srv__ColorValues_Event
    std::shared_ptr<ledctrl_interfaces::srv::ColorValues_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorValues_Event_ & other) const
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
  bool operator!=(const ColorValues_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorValues_Event_

// alias to use template instance with default allocator
using ColorValues_Event =
  ledctrl_interfaces::srv::ColorValues_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ledctrl_interfaces

namespace ledctrl_interfaces
{

namespace srv
{

struct ColorValues
{
  using Request = ledctrl_interfaces::srv::ColorValues_Request;
  using Response = ledctrl_interfaces::srv::ColorValues_Response;
  using Event = ledctrl_interfaces::srv::ColorValues_Event;
};

}  // namespace srv

}  // namespace ledctrl_interfaces

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__COLOR_VALUES__STRUCT_HPP_
