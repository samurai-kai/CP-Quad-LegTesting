// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_states.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__quadruped_msgs__msg__FootStates __attribute__((deprecated))
#else
# define DEPRECATED__quadruped_msgs__msg__FootStates __declspec(deprecated)
#endif

namespace quadruped_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootStates_
{
  using Type = FootStates_<ContainerAllocator>;

  explicit FootStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot1_state = 0;
      this->foot2_state = 0;
      this->foot3_state = 0;
      this->foot4_state = 0;
    }
  }

  explicit FootStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot1_state = 0;
      this->foot2_state = 0;
      this->foot3_state = 0;
      this->foot4_state = 0;
    }
  }

  // field types and members
  using _foot1_state_type =
    int16_t;
  _foot1_state_type foot1_state;
  using _foot2_state_type =
    int16_t;
  _foot2_state_type foot2_state;
  using _foot3_state_type =
    int16_t;
  _foot3_state_type foot3_state;
  using _foot4_state_type =
    int16_t;
  _foot4_state_type foot4_state;

  // setters for named parameter idiom
  Type & set__foot1_state(
    const int16_t & _arg)
  {
    this->foot1_state = _arg;
    return *this;
  }
  Type & set__foot2_state(
    const int16_t & _arg)
  {
    this->foot2_state = _arg;
    return *this;
  }
  Type & set__foot3_state(
    const int16_t & _arg)
  {
    this->foot3_state = _arg;
    return *this;
  }
  Type & set__foot4_state(
    const int16_t & _arg)
  {
    this->foot4_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadruped_msgs::msg::FootStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadruped_msgs::msg::FootStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::FootStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::FootStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadruped_msgs__msg__FootStates
    std::shared_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadruped_msgs__msg__FootStates
    std::shared_ptr<quadruped_msgs::msg::FootStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootStates_ & other) const
  {
    if (this->foot1_state != other.foot1_state) {
      return false;
    }
    if (this->foot2_state != other.foot2_state) {
      return false;
    }
    if (this->foot3_state != other.foot3_state) {
      return false;
    }
    if (this->foot4_state != other.foot4_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootStates_

// alias to use template instance with default allocator
using FootStates =
  quadruped_msgs::msg::FootStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_HPP_
