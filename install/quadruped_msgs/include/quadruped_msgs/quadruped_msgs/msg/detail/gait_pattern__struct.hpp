// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/gait_pattern.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__STRUCT_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'foot1_step_position'
// Member 'foot2_step_position'
// Member 'foot3_step_position'
// Member 'foot4_step_position'
// Member 'com_position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadruped_msgs__msg__GaitPattern __attribute__((deprecated))
#else
# define DEPRECATED__quadruped_msgs__msg__GaitPattern __declspec(deprecated)
#endif

namespace quadruped_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GaitPattern_
{
  using Type = GaitPattern_<ContainerAllocator>;

  explicit GaitPattern_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot1_step_position(_init),
    foot2_step_position(_init),
    foot3_step_position(_init),
    foot4_step_position(_init),
    com_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot1_phase = 0.0f;
      this->foot2_phase = 0.0f;
      this->foot3_phase = 0.0f;
      this->foot4_phase = 0.0f;
      this->foot1_state = 0l;
      this->foot2_state = 0l;
      this->foot3_state = 0l;
      this->foot4_state = 0l;
      this->step_height = 0.0f;
      this->prediction_stages = 0l;
      this->prediction_horizon = 0.0f;
      this->prediction_timestep = 0.0f;
    }
  }

  explicit GaitPattern_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot1_step_position(_alloc, _init),
    foot2_step_position(_alloc, _init),
    foot3_step_position(_alloc, _init),
    foot4_step_position(_alloc, _init),
    com_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->foot1_phase = 0.0f;
      this->foot2_phase = 0.0f;
      this->foot3_phase = 0.0f;
      this->foot4_phase = 0.0f;
      this->foot1_state = 0l;
      this->foot2_state = 0l;
      this->foot3_state = 0l;
      this->foot4_state = 0l;
      this->step_height = 0.0f;
      this->prediction_stages = 0l;
      this->prediction_horizon = 0.0f;
      this->prediction_timestep = 0.0f;
    }
  }

  // field types and members
  using _foot1_step_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot1_step_position_type foot1_step_position;
  using _foot2_step_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot2_step_position_type foot2_step_position;
  using _foot3_step_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot3_step_position_type foot3_step_position;
  using _foot4_step_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot4_step_position_type foot4_step_position;
  using _com_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _com_position_type com_position;
  using _foot1_phase_type =
    float;
  _foot1_phase_type foot1_phase;
  using _foot2_phase_type =
    float;
  _foot2_phase_type foot2_phase;
  using _foot3_phase_type =
    float;
  _foot3_phase_type foot3_phase;
  using _foot4_phase_type =
    float;
  _foot4_phase_type foot4_phase;
  using _foot1_state_type =
    int32_t;
  _foot1_state_type foot1_state;
  using _foot2_state_type =
    int32_t;
  _foot2_state_type foot2_state;
  using _foot3_state_type =
    int32_t;
  _foot3_state_type foot3_state;
  using _foot4_state_type =
    int32_t;
  _foot4_state_type foot4_state;
  using _step_height_type =
    float;
  _step_height_type step_height;
  using _predicted_states_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _predicted_states_type predicted_states;
  using _predicted_phases_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _predicted_phases_type predicted_phases;
  using _prediction_stages_type =
    int32_t;
  _prediction_stages_type prediction_stages;
  using _prediction_horizon_type =
    float;
  _prediction_horizon_type prediction_horizon;
  using _prediction_timestep_type =
    float;
  _prediction_timestep_type prediction_timestep;

  // setters for named parameter idiom
  Type & set__foot1_step_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot1_step_position = _arg;
    return *this;
  }
  Type & set__foot2_step_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot2_step_position = _arg;
    return *this;
  }
  Type & set__foot3_step_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot3_step_position = _arg;
    return *this;
  }
  Type & set__foot4_step_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot4_step_position = _arg;
    return *this;
  }
  Type & set__com_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->com_position = _arg;
    return *this;
  }
  Type & set__foot1_phase(
    const float & _arg)
  {
    this->foot1_phase = _arg;
    return *this;
  }
  Type & set__foot2_phase(
    const float & _arg)
  {
    this->foot2_phase = _arg;
    return *this;
  }
  Type & set__foot3_phase(
    const float & _arg)
  {
    this->foot3_phase = _arg;
    return *this;
  }
  Type & set__foot4_phase(
    const float & _arg)
  {
    this->foot4_phase = _arg;
    return *this;
  }
  Type & set__foot1_state(
    const int32_t & _arg)
  {
    this->foot1_state = _arg;
    return *this;
  }
  Type & set__foot2_state(
    const int32_t & _arg)
  {
    this->foot2_state = _arg;
    return *this;
  }
  Type & set__foot3_state(
    const int32_t & _arg)
  {
    this->foot3_state = _arg;
    return *this;
  }
  Type & set__foot4_state(
    const int32_t & _arg)
  {
    this->foot4_state = _arg;
    return *this;
  }
  Type & set__step_height(
    const float & _arg)
  {
    this->step_height = _arg;
    return *this;
  }
  Type & set__predicted_states(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->predicted_states = _arg;
    return *this;
  }
  Type & set__predicted_phases(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->predicted_phases = _arg;
    return *this;
  }
  Type & set__prediction_stages(
    const int32_t & _arg)
  {
    this->prediction_stages = _arg;
    return *this;
  }
  Type & set__prediction_horizon(
    const float & _arg)
  {
    this->prediction_horizon = _arg;
    return *this;
  }
  Type & set__prediction_timestep(
    const float & _arg)
  {
    this->prediction_timestep = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadruped_msgs::msg::GaitPattern_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadruped_msgs::msg::GaitPattern_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::GaitPattern_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadruped_msgs::msg::GaitPattern_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadruped_msgs__msg__GaitPattern
    std::shared_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadruped_msgs__msg__GaitPattern
    std::shared_ptr<quadruped_msgs::msg::GaitPattern_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaitPattern_ & other) const
  {
    if (this->foot1_step_position != other.foot1_step_position) {
      return false;
    }
    if (this->foot2_step_position != other.foot2_step_position) {
      return false;
    }
    if (this->foot3_step_position != other.foot3_step_position) {
      return false;
    }
    if (this->foot4_step_position != other.foot4_step_position) {
      return false;
    }
    if (this->com_position != other.com_position) {
      return false;
    }
    if (this->foot1_phase != other.foot1_phase) {
      return false;
    }
    if (this->foot2_phase != other.foot2_phase) {
      return false;
    }
    if (this->foot3_phase != other.foot3_phase) {
      return false;
    }
    if (this->foot4_phase != other.foot4_phase) {
      return false;
    }
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
    if (this->step_height != other.step_height) {
      return false;
    }
    if (this->predicted_states != other.predicted_states) {
      return false;
    }
    if (this->predicted_phases != other.predicted_phases) {
      return false;
    }
    if (this->prediction_stages != other.prediction_stages) {
      return false;
    }
    if (this->prediction_horizon != other.prediction_horizon) {
      return false;
    }
    if (this->prediction_timestep != other.prediction_timestep) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaitPattern_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaitPattern_

// alias to use template instance with default allocator
using GaitPattern =
  quadruped_msgs::msg::GaitPattern_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__STRUCT_HPP_
