// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_spot_msgs:srv/SpotMotion.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__STRUCT_HPP_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__srv__SpotMotion_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__srv__SpotMotion_Request __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpotMotion_Request_
{
  using Type = SpotMotion_Request_<ContainerAllocator>;

  explicit SpotMotion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->override = false;
    }
  }

  explicit SpotMotion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->override = false;
    }
  }

  // field types and members
  using _override_type =
    bool;
  _override_type override;

  // setters for named parameter idiom
  Type & set__override(
    const bool & _arg)
  {
    this->override = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__srv__SpotMotion_Request
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__srv__SpotMotion_Request
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotMotion_Request_ & other) const
  {
    if (this->override != other.override) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotMotion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotMotion_Request_

// alias to use template instance with default allocator
using SpotMotion_Request =
  webots_spot_msgs::srv::SpotMotion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_spot_msgs


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__srv__SpotMotion_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__srv__SpotMotion_Response __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpotMotion_Response_
{
  using Type = SpotMotion_Response_<ContainerAllocator>;

  explicit SpotMotion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  explicit SpotMotion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : answer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = "";
    }
  }

  // field types and members
  using _answer_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__srv__SpotMotion_Response
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__srv__SpotMotion_Response
    std::shared_ptr<webots_spot_msgs::srv::SpotMotion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotMotion_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotMotion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotMotion_Response_

// alias to use template instance with default allocator
using SpotMotion_Response =
  webots_spot_msgs::srv::SpotMotion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_spot_msgs

namespace webots_spot_msgs
{

namespace srv
{

struct SpotMotion
{
  using Request = webots_spot_msgs::srv::SpotMotion_Request;
  using Response = webots_spot_msgs::srv::SpotMotion_Response;
};

}  // namespace srv

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__SPOT_MOTION__STRUCT_HPP_
