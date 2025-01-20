// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_spot_msgs:srv/BlockPose.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__STRUCT_HPP_
#define WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__srv__BlockPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__srv__BlockPose_Request __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockPose_Request_
{
  using Type = BlockPose_Request_<ContainerAllocator>;

  explicit BlockPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->block = "";
    }
  }

  explicit BlockPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : block(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->block = "";
    }
  }

  // field types and members
  using _block_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _block_type block;

  // setters for named parameter idiom
  Type & set__block(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->block = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__srv__BlockPose_Request
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__srv__BlockPose_Request
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockPose_Request_ & other) const
  {
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockPose_Request_

// alias to use template instance with default allocator
using BlockPose_Request =
  webots_spot_msgs::srv::BlockPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_spot_msgs


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__srv__BlockPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__srv__BlockPose_Response __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BlockPose_Response_
{
  using Type = BlockPose_Response_<ContainerAllocator>;

  explicit BlockPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
    }
  }

  explicit BlockPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = "";
    }
  }

  // field types and members
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__srv__BlockPose_Response
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__srv__BlockPose_Response
    std::shared_ptr<webots_spot_msgs::srv::BlockPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockPose_Response_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockPose_Response_

// alias to use template instance with default allocator
using BlockPose_Response =
  webots_spot_msgs::srv::BlockPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_spot_msgs

namespace webots_spot_msgs
{

namespace srv
{

struct BlockPose
{
  using Request = webots_spot_msgs::srv::BlockPose_Request;
  using Response = webots_spot_msgs::srv::BlockPose_Response;
};

}  // namespace srv

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__SRV__DETAIL__BLOCK_POSE__STRUCT_HPP_
