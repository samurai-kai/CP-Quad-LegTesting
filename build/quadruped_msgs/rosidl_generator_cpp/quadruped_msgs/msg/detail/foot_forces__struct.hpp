// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadruped_msgs:msg/FootForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_forces.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__STRUCT_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'foot1_force'
// Member 'foot2_force'
// Member 'foot3_force'
// Member 'foot4_force'
// Member 'total_force'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadruped_msgs__msg__FootForces __attribute__((deprecated))
#else
# define DEPRECATED__quadruped_msgs__msg__FootForces __declspec(deprecated)
#endif

namespace quadruped_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootForces_
{
  using Type = FootForces_<ContainerAllocator>;

  explicit FootForces_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot1_force(_init),
    foot2_force(_init),
    foot3_force(_init),
    foot4_force(_init),
    total_force(_init)
  {
    (void)_init;
  }

  explicit FootForces_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot1_force(_alloc, _init),
    foot2_force(_alloc, _init),
    foot3_force(_alloc, _init),
    foot4_force(_alloc, _init),
    total_force(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _foot1_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot1_force_type foot1_force;
  using _foot2_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot2_force_type foot2_force;
  using _foot3_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot3_force_type foot3_force;
  using _foot4_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot4_force_type foot4_force;
  using _total_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _total_force_type total_force;

  // setters for named parameter idiom
  Type & set__foot1_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot1_force = _arg;
    return *this;
  }
  Type & set__foot2_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot2_force = _arg;
    return *this;
  }
  Type & set__foot3_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot3_force = _arg;
    return *this;
  }
  Type & set__foot4_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot4_force = _arg;
    return *this;
  }
  Type & set__total_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->total_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadruped_msgs::msg::FootForces_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadruped_msgs::msg::FootForces_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::FootForces_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::FootForces_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadruped_msgs__msg__FootForces
    std::shared_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadruped_msgs__msg__FootForces
    std::shared_ptr<quadruped_msgs::msg::FootForces_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootForces_ & other) const
  {
    if (this->foot1_force != other.foot1_force) {
      return false;
    }
    if (this->foot2_force != other.foot2_force) {
      return false;
    }
    if (this->foot3_force != other.foot3_force) {
      return false;
    }
    if (this->foot4_force != other.foot4_force) {
      return false;
    }
    if (this->total_force != other.total_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootForces_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootForces_

// alias to use template instance with default allocator
using FootForces =
  quadruped_msgs::msg::FootForces_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__STRUCT_HPP_
