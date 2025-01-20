// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_spot_msgs:action/Stack.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__ACTION__DETAIL__STACK__STRUCT_HPP_
#define WEBOTS_SPOT_MSGS__ACTION__DETAIL__STACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_Goal __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_Goal __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_Goal_
{
  using Type = Stack_Goal_<ContainerAllocator>;

  explicit Stack_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->block = "";
      this->location = "";
    }
  }

  explicit Stack_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : block(_alloc),
    location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->block = "";
      this->location = "";
    }
  }

  // field types and members
  using _block_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _block_type block;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__block(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->block = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_Goal
    std::shared_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_Goal
    std::shared_ptr<webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_Goal_ & other) const
  {
    if (this->block != other.block) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_Goal_

// alias to use template instance with default allocator
using Stack_Goal =
  webots_spot_msgs::action::Stack_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_Result __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_Result __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_Result_
{
  using Type = Stack_Result_<ContainerAllocator>;

  explicit Stack_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stacked = false;
    }
  }

  explicit Stack_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stacked = false;
    }
  }

  // field types and members
  using _stacked_type =
    bool;
  _stacked_type stacked;

  // setters for named parameter idiom
  Type & set__stacked(
    const bool & _arg)
  {
    this->stacked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_Result
    std::shared_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_Result
    std::shared_ptr<webots_spot_msgs::action::Stack_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_Result_ & other) const
  {
    if (this->stacked != other.stacked) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_Result_

// alias to use template instance with default allocator
using Stack_Result =
  webots_spot_msgs::action::Stack_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_Feedback __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_Feedback_
{
  using Type = Stack_Feedback_<ContainerAllocator>;

  explicit Stack_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stacking = false;
    }
  }

  explicit Stack_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stacking = false;
    }
  }

  // field types and members
  using _stacking_type =
    bool;
  _stacking_type stacking;

  // setters for named parameter idiom
  Type & set__stacking(
    const bool & _arg)
  {
    this->stacking = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_Feedback
    std::shared_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_Feedback
    std::shared_ptr<webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_Feedback_ & other) const
  {
    if (this->stacking != other.stacking) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_Feedback_

// alias to use template instance with default allocator
using Stack_Feedback =
  webots_spot_msgs::action::Stack_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "webots_spot_msgs/action/detail/stack__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Request __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_SendGoal_Request_
{
  using Type = Stack_SendGoal_Request_<ContainerAllocator>;

  explicit Stack_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Stack_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    webots_spot_msgs::action::Stack_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const webots_spot_msgs::action::Stack_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Request
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Request
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_SendGoal_Request_

// alias to use template instance with default allocator
using Stack_SendGoal_Request =
  webots_spot_msgs::action::Stack_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Response __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_SendGoal_Response_
{
  using Type = Stack_SendGoal_Response_<ContainerAllocator>;

  explicit Stack_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Stack_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Response
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_SendGoal_Response
    std::shared_ptr<webots_spot_msgs::action::Stack_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_SendGoal_Response_

// alias to use template instance with default allocator
using Stack_SendGoal_Response =
  webots_spot_msgs::action::Stack_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs

namespace webots_spot_msgs
{

namespace action
{

struct Stack_SendGoal
{
  using Request = webots_spot_msgs::action::Stack_SendGoal_Request;
  using Response = webots_spot_msgs::action::Stack_SendGoal_Response;
};

}  // namespace action

}  // namespace webots_spot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Request __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_GetResult_Request_
{
  using Type = Stack_GetResult_Request_<ContainerAllocator>;

  explicit Stack_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Stack_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Request
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Request
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_GetResult_Request_

// alias to use template instance with default allocator
using Stack_GetResult_Request =
  webots_spot_msgs::action::Stack_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "webots_spot_msgs/action/detail/stack__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Response __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_GetResult_Response_
{
  using Type = Stack_GetResult_Response_<ContainerAllocator>;

  explicit Stack_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Stack_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    webots_spot_msgs::action::Stack_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const webots_spot_msgs::action::Stack_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Response
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_GetResult_Response
    std::shared_ptr<webots_spot_msgs::action::Stack_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_GetResult_Response_

// alias to use template instance with default allocator
using Stack_GetResult_Response =
  webots_spot_msgs::action::Stack_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs

namespace webots_spot_msgs
{

namespace action
{

struct Stack_GetResult
{
  using Request = webots_spot_msgs::action::Stack_GetResult_Request;
  using Response = webots_spot_msgs::action::Stack_GetResult_Response;
};

}  // namespace action

}  // namespace webots_spot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "webots_spot_msgs/action/detail/stack__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__action__Stack_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__action__Stack_FeedbackMessage __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Stack_FeedbackMessage_
{
  using Type = Stack_FeedbackMessage_<ContainerAllocator>;

  explicit Stack_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Stack_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const webots_spot_msgs::action::Stack_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__action__Stack_FeedbackMessage
    std::shared_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__action__Stack_FeedbackMessage
    std::shared_ptr<webots_spot_msgs::action::Stack_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stack_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stack_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stack_FeedbackMessage_

// alias to use template instance with default allocator
using Stack_FeedbackMessage =
  webots_spot_msgs::action::Stack_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace webots_spot_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace webots_spot_msgs
{

namespace action
{

struct Stack
{
  /// The goal message defined in the action definition.
  using Goal = webots_spot_msgs::action::Stack_Goal;
  /// The result message defined in the action definition.
  using Result = webots_spot_msgs::action::Stack_Result;
  /// The feedback message defined in the action definition.
  using Feedback = webots_spot_msgs::action::Stack_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = webots_spot_msgs::action::Stack_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = webots_spot_msgs::action::Stack_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = webots_spot_msgs::action::Stack_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Stack Stack;

}  // namespace action

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__ACTION__DETAIL__STACK__STRUCT_HPP_
