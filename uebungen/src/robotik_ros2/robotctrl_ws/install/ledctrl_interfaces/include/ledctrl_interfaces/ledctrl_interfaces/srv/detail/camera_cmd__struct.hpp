// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ledctrl_interfaces/srv/camera_cmd.hpp"


#ifndef LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__STRUCT_HPP_
#define LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Request __declspec(deprecated)
#endif

namespace ledctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraCmd_Request_
{
  using Type = CameraCmd_Request_<ContainerAllocator>;

  explicit CameraCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
      this->side = 0;
      this->duration_on = 0.0f;
      this->duration_off = 0.0f;
      this->repetitions = 0;
    }
  }

  explicit CameraCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
      this->side = 0;
      this->duration_on = 0.0f;
      this->duration_off = 0.0f;
      this->repetitions = 0;
    }
  }

  // field types and members
  using _cmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type cmd;
  using _side_type =
    int8_t;
  _side_type side;
  using _color_on_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _color_on_type color_on;
  using _color_off_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _color_off_type color_off;
  using _duration_on_type =
    float;
  _duration_on_type duration_on;
  using _duration_off_type =
    float;
  _duration_off_type duration_off;
  using _repetitions_type =
    int8_t;
  _repetitions_type repetitions;

  // setters for named parameter idiom
  Type & set__cmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__side(
    const int8_t & _arg)
  {
    this->side = _arg;
    return *this;
  }
  Type & set__color_on(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->color_on = _arg;
    return *this;
  }
  Type & set__color_off(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->color_off = _arg;
    return *this;
  }
  Type & set__duration_on(
    const float & _arg)
  {
    this->duration_on = _arg;
    return *this;
  }
  Type & set__duration_off(
    const float & _arg)
  {
    this->duration_off = _arg;
    return *this;
  }
  Type & set__repetitions(
    const int8_t & _arg)
  {
    this->repetitions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Request
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Request
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCmd_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->side != other.side) {
      return false;
    }
    if (this->color_on != other.color_on) {
      return false;
    }
    if (this->color_off != other.color_off) {
      return false;
    }
    if (this->duration_on != other.duration_on) {
      return false;
    }
    if (this->duration_off != other.duration_off) {
      return false;
    }
    if (this->repetitions != other.repetitions) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCmd_Request_

// alias to use template instance with default allocator
using CameraCmd_Request =
  ledctrl_interfaces::srv::CameraCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ledctrl_interfaces


#ifndef _WIN32
# define DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Response __declspec(deprecated)
#endif

namespace ledctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraCmd_Response_
{
  using Type = CameraCmd_Response_<ContainerAllocator>;

  explicit CameraCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit CameraCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Response
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Response
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCmd_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCmd_Response_

// alias to use template instance with default allocator
using CameraCmd_Response =
  ledctrl_interfaces::srv::CameraCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ledctrl_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Event __attribute__((deprecated))
#else
# define DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Event __declspec(deprecated)
#endif

namespace ledctrl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraCmd_Event_
{
  using Type = CameraCmd_Event_<ContainerAllocator>;

  explicit CameraCmd_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit CameraCmd_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::CameraCmd_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ledctrl_interfaces::srv::CameraCmd_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Event
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ledctrl_interfaces__srv__CameraCmd_Event
    std::shared_ptr<ledctrl_interfaces::srv::CameraCmd_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCmd_Event_ & other) const
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
  bool operator!=(const CameraCmd_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCmd_Event_

// alias to use template instance with default allocator
using CameraCmd_Event =
  ledctrl_interfaces::srv::CameraCmd_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ledctrl_interfaces

namespace ledctrl_interfaces
{

namespace srv
{

struct CameraCmd
{
  using Request = ledctrl_interfaces::srv::CameraCmd_Request;
  using Response = ledctrl_interfaces::srv::CameraCmd_Response;
  using Event = ledctrl_interfaces::srv::CameraCmd_Event;
};

}  // namespace srv

}  // namespace ledctrl_interfaces

#endif  // LEDCTRL_INTERFACES__SRV__DETAIL__CAMERA_CMD__STRUCT_HPP_
