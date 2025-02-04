// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_spot_msgs:msg/Legs.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__STRUCT_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__msg__Legs __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__msg__Legs __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Legs_
{
  using Type = Legs_<ContainerAllocator>;

  explicit Legs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 12>::iterator, double>(this->leg.begin(), this->leg.end(), 0.0);
    }
  }

  explicit Legs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : leg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 12>::iterator, double>(this->leg.begin(), this->leg.end(), 0.0);
    }
  }

  // field types and members
  using _leg_type =
    std::array<double, 12>;
  _leg_type leg;

  // setters for named parameter idiom
  Type & set__leg(
    const std::array<double, 12> & _arg)
  {
    this->leg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::msg::Legs_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::msg::Legs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::msg::Legs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::msg::Legs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__msg__Legs
    std::shared_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__msg__Legs
    std::shared_ptr<webots_spot_msgs::msg::Legs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Legs_ & other) const
  {
    if (this->leg != other.leg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Legs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Legs_

// alias to use template instance with default allocator
using Legs =
  webots_spot_msgs::msg::Legs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__LEGS__STRUCT_HPP_
