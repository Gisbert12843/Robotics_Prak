// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__STRUCT_HPP_
#define WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_spot_msgs__msg__GaitInput __attribute__((deprecated))
#else
# define DEPRECATED__webots_spot_msgs__msg__GaitInput __declspec(deprecated)
#endif

namespace webots_spot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GaitInput_
{
  using Type = GaitInput_<ContainerAllocator>;

  explicit GaitInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->step_length = 0.0;
      this->lateral_fraction = 0.0;
      this->yaw_rate = 0.0;
      this->step_velocity = 0.0;
      this->clearance_height = 0.0;
      this->penetration_depth = 0.0;
      this->swing_period = 0.0;
      this->yaw_control = 0.0;
      this->yaw_control_on = 0.0;
    }
  }

  explicit GaitInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->step_length = 0.0;
      this->lateral_fraction = 0.0;
      this->yaw_rate = 0.0;
      this->step_velocity = 0.0;
      this->clearance_height = 0.0;
      this->penetration_depth = 0.0;
      this->swing_period = 0.0;
      this->yaw_control = 0.0;
      this->yaw_control_on = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _step_length_type =
    double;
  _step_length_type step_length;
  using _lateral_fraction_type =
    double;
  _lateral_fraction_type lateral_fraction;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _step_velocity_type =
    double;
  _step_velocity_type step_velocity;
  using _clearance_height_type =
    double;
  _clearance_height_type clearance_height;
  using _penetration_depth_type =
    double;
  _penetration_depth_type penetration_depth;
  using _swing_period_type =
    double;
  _swing_period_type swing_period;
  using _yaw_control_type =
    double;
  _yaw_control_type yaw_control;
  using _yaw_control_on_type =
    double;
  _yaw_control_on_type yaw_control_on;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__step_length(
    const double & _arg)
  {
    this->step_length = _arg;
    return *this;
  }
  Type & set__lateral_fraction(
    const double & _arg)
  {
    this->lateral_fraction = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__step_velocity(
    const double & _arg)
  {
    this->step_velocity = _arg;
    return *this;
  }
  Type & set__clearance_height(
    const double & _arg)
  {
    this->clearance_height = _arg;
    return *this;
  }
  Type & set__penetration_depth(
    const double & _arg)
  {
    this->penetration_depth = _arg;
    return *this;
  }
  Type & set__swing_period(
    const double & _arg)
  {
    this->swing_period = _arg;
    return *this;
  }
  Type & set__yaw_control(
    const double & _arg)
  {
    this->yaw_control = _arg;
    return *this;
  }
  Type & set__yaw_control_on(
    const double & _arg)
  {
    this->yaw_control_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_spot_msgs::msg::GaitInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_spot_msgs::msg::GaitInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::msg::GaitInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_spot_msgs::msg::GaitInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_spot_msgs__msg__GaitInput
    std::shared_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_spot_msgs__msg__GaitInput
    std::shared_ptr<webots_spot_msgs::msg::GaitInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaitInput_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->step_length != other.step_length) {
      return false;
    }
    if (this->lateral_fraction != other.lateral_fraction) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->step_velocity != other.step_velocity) {
      return false;
    }
    if (this->clearance_height != other.clearance_height) {
      return false;
    }
    if (this->penetration_depth != other.penetration_depth) {
      return false;
    }
    if (this->swing_period != other.swing_period) {
      return false;
    }
    if (this->yaw_control != other.yaw_control) {
      return false;
    }
    if (this->yaw_control_on != other.yaw_control_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaitInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaitInput_

// alias to use template instance with default allocator
using GaitInput =
  webots_spot_msgs::msg::GaitInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__MSG__DETAIL__GAIT_INPUT__STRUCT_HPP_
