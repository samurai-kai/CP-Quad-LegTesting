// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/quadruped_state.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__STRUCT_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'p1'
// Member 'p2'
// Member 'p3'
// Member 'p4'
// Member 'pc'
// Member 'h1'
// Member 'h2'
// Member 'h3'
// Member 'h4'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'v1'
// Member 'v2'
// Member 'v3'
// Member 'v4'
// Member 'angular_velocity'
// Member 'com_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadruped_msgs__msg__QuadrupedState __attribute__((deprecated))
#else
# define DEPRECATED__quadruped_msgs__msg__QuadrupedState __declspec(deprecated)
#endif

namespace quadruped_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadrupedState_
{
  using Type = QuadrupedState_<ContainerAllocator>;

  explicit QuadrupedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p1(_init),
    p2(_init),
    p3(_init),
    p4(_init),
    pc(_init),
    v1(_init),
    v2(_init),
    v3(_init),
    v4(_init),
    h1(_init),
    h2(_init),
    h3(_init),
    h4(_init),
    orientation(_init),
    angular_velocity(_init),
    com_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contact_1 = false;
      this->contact_2 = false;
      this->contact_3 = false;
      this->contact_4 = false;
    }
  }

  explicit QuadrupedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p1(_alloc, _init),
    p2(_alloc, _init),
    p3(_alloc, _init),
    p4(_alloc, _init),
    pc(_alloc, _init),
    v1(_alloc, _init),
    v2(_alloc, _init),
    v3(_alloc, _init),
    v4(_alloc, _init),
    h1(_alloc, _init),
    h2(_alloc, _init),
    h3(_alloc, _init),
    h4(_alloc, _init),
    orientation(_alloc, _init),
    angular_velocity(_alloc, _init),
    com_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->contact_1 = false;
      this->contact_2 = false;
      this->contact_3 = false;
      this->contact_4 = false;
    }
  }

  // field types and members
  using _p1_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _p1_type p1;
  using _p2_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _p2_type p2;
  using _p3_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _p3_type p3;
  using _p4_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _p4_type p4;
  using _pc_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pc_type pc;
  using _v1_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v1_type v1;
  using _v2_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v2_type v2;
  using _v3_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v3_type v3;
  using _v4_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _v4_type v4;
  using _h1_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _h1_type h1;
  using _h2_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _h2_type h2;
  using _h3_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _h3_type h3;
  using _h4_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _h4_type h4;
  using _joint_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_positions_type joint_positions;
  using _joint_velocities_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_velocities_type joint_velocities;
  using _joint_efforts_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_efforts_type joint_efforts;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _com_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _com_velocity_type com_velocity;
  using _j1_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _j1_type j1;
  using _j2_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _j2_type j2;
  using _j3_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _j3_type j3;
  using _j4_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _j4_type j4;
  using _contact_1_type =
    bool;
  _contact_1_type contact_1;
  using _contact_2_type =
    bool;
  _contact_2_type contact_2;
  using _contact_3_type =
    bool;
  _contact_3_type contact_3;
  using _contact_4_type =
    bool;
  _contact_4_type contact_4;

  // setters for named parameter idiom
  Type & set__p1(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->p1 = _arg;
    return *this;
  }
  Type & set__p2(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->p2 = _arg;
    return *this;
  }
  Type & set__p3(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->p3 = _arg;
    return *this;
  }
  Type & set__p4(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->p4 = _arg;
    return *this;
  }
  Type & set__pc(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pc = _arg;
    return *this;
  }
  Type & set__v1(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v1 = _arg;
    return *this;
  }
  Type & set__v2(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v2 = _arg;
    return *this;
  }
  Type & set__v3(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v3 = _arg;
    return *this;
  }
  Type & set__v4(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->v4 = _arg;
    return *this;
  }
  Type & set__h1(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->h1 = _arg;
    return *this;
  }
  Type & set__h2(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->h2 = _arg;
    return *this;
  }
  Type & set__h3(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->h3 = _arg;
    return *this;
  }
  Type & set__h4(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->h4 = _arg;
    return *this;
  }
  Type & set__joint_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_positions = _arg;
    return *this;
  }
  Type & set__joint_velocities(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_velocities = _arg;
    return *this;
  }
  Type & set__joint_efforts(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_efforts = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__com_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->com_velocity = _arg;
    return *this;
  }
  Type & set__j1(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->j1 = _arg;
    return *this;
  }
  Type & set__j2(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->j2 = _arg;
    return *this;
  }
  Type & set__j3(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->j3 = _arg;
    return *this;
  }
  Type & set__j4(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->j4 = _arg;
    return *this;
  }
  Type & set__contact_1(
    const bool & _arg)
  {
    this->contact_1 = _arg;
    return *this;
  }
  Type & set__contact_2(
    const bool & _arg)
  {
    this->contact_2 = _arg;
    return *this;
  }
  Type & set__contact_3(
    const bool & _arg)
  {
    this->contact_3 = _arg;
    return *this;
  }
  Type & set__contact_4(
    const bool & _arg)
  {
    this->contact_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadruped_msgs::msg::QuadrupedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadruped_msgs::msg::QuadrupedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::QuadrupedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::QuadrupedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadruped_msgs__msg__QuadrupedState
    std::shared_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadruped_msgs__msg__QuadrupedState
    std::shared_ptr<quadruped_msgs::msg::QuadrupedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadrupedState_ & other) const
  {
    if (this->p1 != other.p1) {
      return false;
    }
    if (this->p2 != other.p2) {
      return false;
    }
    if (this->p3 != other.p3) {
      return false;
    }
    if (this->p4 != other.p4) {
      return false;
    }
    if (this->pc != other.pc) {
      return false;
    }
    if (this->v1 != other.v1) {
      return false;
    }
    if (this->v2 != other.v2) {
      return false;
    }
    if (this->v3 != other.v3) {
      return false;
    }
    if (this->v4 != other.v4) {
      return false;
    }
    if (this->h1 != other.h1) {
      return false;
    }
    if (this->h2 != other.h2) {
      return false;
    }
    if (this->h3 != other.h3) {
      return false;
    }
    if (this->h4 != other.h4) {
      return false;
    }
    if (this->joint_positions != other.joint_positions) {
      return false;
    }
    if (this->joint_velocities != other.joint_velocities) {
      return false;
    }
    if (this->joint_efforts != other.joint_efforts) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->com_velocity != other.com_velocity) {
      return false;
    }
    if (this->j1 != other.j1) {
      return false;
    }
    if (this->j2 != other.j2) {
      return false;
    }
    if (this->j3 != other.j3) {
      return false;
    }
    if (this->j4 != other.j4) {
      return false;
    }
    if (this->contact_1 != other.contact_1) {
      return false;
    }
    if (this->contact_2 != other.contact_2) {
      return false;
    }
    if (this->contact_3 != other.contact_3) {
      return false;
    }
    if (this->contact_4 != other.contact_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadrupedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadrupedState_

// alias to use template instance with default allocator
using QuadrupedState =
  quadruped_msgs::msg::QuadrupedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__STRUCT_HPP_
