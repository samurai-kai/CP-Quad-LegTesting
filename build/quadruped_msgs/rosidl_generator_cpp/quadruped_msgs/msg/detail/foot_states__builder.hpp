// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_states.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__BUILDER_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadruped_msgs/msg/detail/foot_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadruped_msgs
{

namespace msg
{

namespace builder
{

class Init_FootStates_foot4_state
{
public:
  explicit Init_FootStates_foot4_state(::quadruped_msgs::msg::FootStates & msg)
  : msg_(msg)
  {}
  ::quadruped_msgs::msg::FootStates foot4_state(::quadruped_msgs::msg::FootStates::_foot4_state_type arg)
  {
    msg_.foot4_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadruped_msgs::msg::FootStates msg_;
};

class Init_FootStates_foot3_state
{
public:
  explicit Init_FootStates_foot3_state(::quadruped_msgs::msg::FootStates & msg)
  : msg_(msg)
  {}
  Init_FootStates_foot4_state foot3_state(::quadruped_msgs::msg::FootStates::_foot3_state_type arg)
  {
    msg_.foot3_state = std::move(arg);
    return Init_FootStates_foot4_state(msg_);
  }

private:
  ::quadruped_msgs::msg::FootStates msg_;
};

class Init_FootStates_foot2_state
{
public:
  explicit Init_FootStates_foot2_state(::quadruped_msgs::msg::FootStates & msg)
  : msg_(msg)
  {}
  Init_FootStates_foot3_state foot2_state(::quadruped_msgs::msg::FootStates::_foot2_state_type arg)
  {
    msg_.foot2_state = std::move(arg);
    return Init_FootStates_foot3_state(msg_);
  }

private:
  ::quadruped_msgs::msg::FootStates msg_;
};

class Init_FootStates_foot1_state
{
public:
  Init_FootStates_foot1_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootStates_foot2_state foot1_state(::quadruped_msgs::msg::FootStates::_foot1_state_type arg)
  {
    msg_.foot1_state = std::move(arg);
    return Init_FootStates_foot2_state(msg_);
  }

private:
  ::quadruped_msgs::msg::FootStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadruped_msgs::msg::FootStates>()
{
  return quadruped_msgs::msg::builder::Init_FootStates_foot1_state();
}

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__BUILDER_HPP_
