// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/quadruped_state.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__BUILDER_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadruped_msgs/msg/detail/quadruped_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadruped_msgs
{

namespace msg
{

namespace builder
{

class Init_QuadrupedState_contact_4
{
public:
  explicit Init_QuadrupedState_contact_4(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  ::quadruped_msgs::msg::QuadrupedState contact_4(::quadruped_msgs::msg::QuadrupedState::_contact_4_type arg)
  {
    msg_.contact_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_contact_3
{
public:
  explicit Init_QuadrupedState_contact_3(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_contact_4 contact_3(::quadruped_msgs::msg::QuadrupedState::_contact_3_type arg)
  {
    msg_.contact_3 = std::move(arg);
    return Init_QuadrupedState_contact_4(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_contact_2
{
public:
  explicit Init_QuadrupedState_contact_2(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_contact_3 contact_2(::quadruped_msgs::msg::QuadrupedState::_contact_2_type arg)
  {
    msg_.contact_2 = std::move(arg);
    return Init_QuadrupedState_contact_3(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_contact_1
{
public:
  explicit Init_QuadrupedState_contact_1(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_contact_2 contact_1(::quadruped_msgs::msg::QuadrupedState::_contact_1_type arg)
  {
    msg_.contact_1 = std::move(arg);
    return Init_QuadrupedState_contact_2(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_j4
{
public:
  explicit Init_QuadrupedState_j4(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_contact_1 j4(::quadruped_msgs::msg::QuadrupedState::_j4_type arg)
  {
    msg_.j4 = std::move(arg);
    return Init_QuadrupedState_contact_1(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_j3
{
public:
  explicit Init_QuadrupedState_j3(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_j4 j3(::quadruped_msgs::msg::QuadrupedState::_j3_type arg)
  {
    msg_.j3 = std::move(arg);
    return Init_QuadrupedState_j4(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_j2
{
public:
  explicit Init_QuadrupedState_j2(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_j3 j2(::quadruped_msgs::msg::QuadrupedState::_j2_type arg)
  {
    msg_.j2 = std::move(arg);
    return Init_QuadrupedState_j3(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_j1
{
public:
  explicit Init_QuadrupedState_j1(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_j2 j1(::quadruped_msgs::msg::QuadrupedState::_j1_type arg)
  {
    msg_.j1 = std::move(arg);
    return Init_QuadrupedState_j2(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_com_velocity
{
public:
  explicit Init_QuadrupedState_com_velocity(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_j1 com_velocity(::quadruped_msgs::msg::QuadrupedState::_com_velocity_type arg)
  {
    msg_.com_velocity = std::move(arg);
    return Init_QuadrupedState_j1(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_angular_velocity
{
public:
  explicit Init_QuadrupedState_angular_velocity(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_com_velocity angular_velocity(::quadruped_msgs::msg::QuadrupedState::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_QuadrupedState_com_velocity(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_orientation
{
public:
  explicit Init_QuadrupedState_orientation(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_angular_velocity orientation(::quadruped_msgs::msg::QuadrupedState::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_QuadrupedState_angular_velocity(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_joint_efforts
{
public:
  explicit Init_QuadrupedState_joint_efforts(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_orientation joint_efforts(::quadruped_msgs::msg::QuadrupedState::_joint_efforts_type arg)
  {
    msg_.joint_efforts = std::move(arg);
    return Init_QuadrupedState_orientation(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_joint_velocities
{
public:
  explicit Init_QuadrupedState_joint_velocities(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_joint_efforts joint_velocities(::quadruped_msgs::msg::QuadrupedState::_joint_velocities_type arg)
  {
    msg_.joint_velocities = std::move(arg);
    return Init_QuadrupedState_joint_efforts(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_joint_positions
{
public:
  explicit Init_QuadrupedState_joint_positions(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_joint_velocities joint_positions(::quadruped_msgs::msg::QuadrupedState::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_QuadrupedState_joint_velocities(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_h4
{
public:
  explicit Init_QuadrupedState_h4(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_joint_positions h4(::quadruped_msgs::msg::QuadrupedState::_h4_type arg)
  {
    msg_.h4 = std::move(arg);
    return Init_QuadrupedState_joint_positions(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_h3
{
public:
  explicit Init_QuadrupedState_h3(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_h4 h3(::quadruped_msgs::msg::QuadrupedState::_h3_type arg)
  {
    msg_.h3 = std::move(arg);
    return Init_QuadrupedState_h4(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_h2
{
public:
  explicit Init_QuadrupedState_h2(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_h3 h2(::quadruped_msgs::msg::QuadrupedState::_h2_type arg)
  {
    msg_.h2 = std::move(arg);
    return Init_QuadrupedState_h3(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_h1
{
public:
  explicit Init_QuadrupedState_h1(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_h2 h1(::quadruped_msgs::msg::QuadrupedState::_h1_type arg)
  {
    msg_.h1 = std::move(arg);
    return Init_QuadrupedState_h2(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_v4
{
public:
  explicit Init_QuadrupedState_v4(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_h1 v4(::quadruped_msgs::msg::QuadrupedState::_v4_type arg)
  {
    msg_.v4 = std::move(arg);
    return Init_QuadrupedState_h1(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_v3
{
public:
  explicit Init_QuadrupedState_v3(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_v4 v3(::quadruped_msgs::msg::QuadrupedState::_v3_type arg)
  {
    msg_.v3 = std::move(arg);
    return Init_QuadrupedState_v4(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_v2
{
public:
  explicit Init_QuadrupedState_v2(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_v3 v2(::quadruped_msgs::msg::QuadrupedState::_v2_type arg)
  {
    msg_.v2 = std::move(arg);
    return Init_QuadrupedState_v3(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_v1
{
public:
  explicit Init_QuadrupedState_v1(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_v2 v1(::quadruped_msgs::msg::QuadrupedState::_v1_type arg)
  {
    msg_.v1 = std::move(arg);
    return Init_QuadrupedState_v2(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_pc
{
public:
  explicit Init_QuadrupedState_pc(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_v1 pc(::quadruped_msgs::msg::QuadrupedState::_pc_type arg)
  {
    msg_.pc = std::move(arg);
    return Init_QuadrupedState_v1(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_p4
{
public:
  explicit Init_QuadrupedState_p4(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_pc p4(::quadruped_msgs::msg::QuadrupedState::_p4_type arg)
  {
    msg_.p4 = std::move(arg);
    return Init_QuadrupedState_pc(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_p3
{
public:
  explicit Init_QuadrupedState_p3(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_p4 p3(::quadruped_msgs::msg::QuadrupedState::_p3_type arg)
  {
    msg_.p3 = std::move(arg);
    return Init_QuadrupedState_p4(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_p2
{
public:
  explicit Init_QuadrupedState_p2(::quadruped_msgs::msg::QuadrupedState & msg)
  : msg_(msg)
  {}
  Init_QuadrupedState_p3 p2(::quadruped_msgs::msg::QuadrupedState::_p2_type arg)
  {
    msg_.p2 = std::move(arg);
    return Init_QuadrupedState_p3(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

class Init_QuadrupedState_p1
{
public:
  Init_QuadrupedState_p1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadrupedState_p2 p1(::quadruped_msgs::msg::QuadrupedState::_p1_type arg)
  {
    msg_.p1 = std::move(arg);
    return Init_QuadrupedState_p2(msg_);
  }

private:
  ::quadruped_msgs::msg::QuadrupedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadruped_msgs::msg::QuadrupedState>()
{
  return quadruped_msgs::msg::builder::Init_QuadrupedState_p1();
}

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__BUILDER_HPP_
