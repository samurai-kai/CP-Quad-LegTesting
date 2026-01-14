// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadruped_msgs:msg/FootForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_forces.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__BUILDER_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadruped_msgs/msg/detail/foot_forces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadruped_msgs
{

namespace msg
{

namespace builder
{

class Init_FootForces_total_force
{
public:
  explicit Init_FootForces_total_force(::quadruped_msgs::msg::FootForces & msg)
  : msg_(msg)
  {}
  ::quadruped_msgs::msg::FootForces total_force(::quadruped_msgs::msg::FootForces::_total_force_type arg)
  {
    msg_.total_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadruped_msgs::msg::FootForces msg_;
};

class Init_FootForces_foot4_force
{
public:
  explicit Init_FootForces_foot4_force(::quadruped_msgs::msg::FootForces & msg)
  : msg_(msg)
  {}
  Init_FootForces_total_force foot4_force(::quadruped_msgs::msg::FootForces::_foot4_force_type arg)
  {
    msg_.foot4_force = std::move(arg);
    return Init_FootForces_total_force(msg_);
  }

private:
  ::quadruped_msgs::msg::FootForces msg_;
};

class Init_FootForces_foot3_force
{
public:
  explicit Init_FootForces_foot3_force(::quadruped_msgs::msg::FootForces & msg)
  : msg_(msg)
  {}
  Init_FootForces_foot4_force foot3_force(::quadruped_msgs::msg::FootForces::_foot3_force_type arg)
  {
    msg_.foot3_force = std::move(arg);
    return Init_FootForces_foot4_force(msg_);
  }

private:
  ::quadruped_msgs::msg::FootForces msg_;
};

class Init_FootForces_foot2_force
{
public:
  explicit Init_FootForces_foot2_force(::quadruped_msgs::msg::FootForces & msg)
  : msg_(msg)
  {}
  Init_FootForces_foot3_force foot2_force(::quadruped_msgs::msg::FootForces::_foot2_force_type arg)
  {
    msg_.foot2_force = std::move(arg);
    return Init_FootForces_foot3_force(msg_);
  }

private:
  ::quadruped_msgs::msg::FootForces msg_;
};

class Init_FootForces_foot1_force
{
public:
  Init_FootForces_foot1_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootForces_foot2_force foot1_force(::quadruped_msgs::msg::FootForces::_foot1_force_type arg)
  {
    msg_.foot1_force = std::move(arg);
    return Init_FootForces_foot2_force(msg_);
  }

private:
  ::quadruped_msgs::msg::FootForces msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadruped_msgs::msg::FootForces>()
{
  return quadruped_msgs::msg::builder::Init_FootForces_foot1_force();
}

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__BUILDER_HPP_
