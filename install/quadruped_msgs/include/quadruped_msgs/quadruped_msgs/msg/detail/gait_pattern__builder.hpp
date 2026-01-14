// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/gait_pattern.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__BUILDER_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadruped_msgs/msg/detail/gait_pattern__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadruped_msgs
{

namespace msg
{

namespace builder
{

class Init_GaitPattern_prediction_timestep
{
public:
  explicit Init_GaitPattern_prediction_timestep(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  ::quadruped_msgs::msg::GaitPattern prediction_timestep(::quadruped_msgs::msg::GaitPattern::_prediction_timestep_type arg)
  {
    msg_.prediction_timestep = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_prediction_horizon
{
public:
  explicit Init_GaitPattern_prediction_horizon(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_prediction_timestep prediction_horizon(::quadruped_msgs::msg::GaitPattern::_prediction_horizon_type arg)
  {
    msg_.prediction_horizon = std::move(arg);
    return Init_GaitPattern_prediction_timestep(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_prediction_stages
{
public:
  explicit Init_GaitPattern_prediction_stages(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_prediction_horizon prediction_stages(::quadruped_msgs::msg::GaitPattern::_prediction_stages_type arg)
  {
    msg_.prediction_stages = std::move(arg);
    return Init_GaitPattern_prediction_horizon(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_predicted_phases
{
public:
  explicit Init_GaitPattern_predicted_phases(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_prediction_stages predicted_phases(::quadruped_msgs::msg::GaitPattern::_predicted_phases_type arg)
  {
    msg_.predicted_phases = std::move(arg);
    return Init_GaitPattern_prediction_stages(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_predicted_states
{
public:
  explicit Init_GaitPattern_predicted_states(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_predicted_phases predicted_states(::quadruped_msgs::msg::GaitPattern::_predicted_states_type arg)
  {
    msg_.predicted_states = std::move(arg);
    return Init_GaitPattern_predicted_phases(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_step_height
{
public:
  explicit Init_GaitPattern_step_height(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_predicted_states step_height(::quadruped_msgs::msg::GaitPattern::_step_height_type arg)
  {
    msg_.step_height = std::move(arg);
    return Init_GaitPattern_predicted_states(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot4_state
{
public:
  explicit Init_GaitPattern_foot4_state(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_step_height foot4_state(::quadruped_msgs::msg::GaitPattern::_foot4_state_type arg)
  {
    msg_.foot4_state = std::move(arg);
    return Init_GaitPattern_step_height(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot3_state
{
public:
  explicit Init_GaitPattern_foot3_state(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot4_state foot3_state(::quadruped_msgs::msg::GaitPattern::_foot3_state_type arg)
  {
    msg_.foot3_state = std::move(arg);
    return Init_GaitPattern_foot4_state(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot2_state
{
public:
  explicit Init_GaitPattern_foot2_state(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot3_state foot2_state(::quadruped_msgs::msg::GaitPattern::_foot2_state_type arg)
  {
    msg_.foot2_state = std::move(arg);
    return Init_GaitPattern_foot3_state(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot1_state
{
public:
  explicit Init_GaitPattern_foot1_state(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot2_state foot1_state(::quadruped_msgs::msg::GaitPattern::_foot1_state_type arg)
  {
    msg_.foot1_state = std::move(arg);
    return Init_GaitPattern_foot2_state(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot4_phase
{
public:
  explicit Init_GaitPattern_foot4_phase(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot1_state foot4_phase(::quadruped_msgs::msg::GaitPattern::_foot4_phase_type arg)
  {
    msg_.foot4_phase = std::move(arg);
    return Init_GaitPattern_foot1_state(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot3_phase
{
public:
  explicit Init_GaitPattern_foot3_phase(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot4_phase foot3_phase(::quadruped_msgs::msg::GaitPattern::_foot3_phase_type arg)
  {
    msg_.foot3_phase = std::move(arg);
    return Init_GaitPattern_foot4_phase(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot2_phase
{
public:
  explicit Init_GaitPattern_foot2_phase(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot3_phase foot2_phase(::quadruped_msgs::msg::GaitPattern::_foot2_phase_type arg)
  {
    msg_.foot2_phase = std::move(arg);
    return Init_GaitPattern_foot3_phase(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot1_phase
{
public:
  explicit Init_GaitPattern_foot1_phase(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot2_phase foot1_phase(::quadruped_msgs::msg::GaitPattern::_foot1_phase_type arg)
  {
    msg_.foot1_phase = std::move(arg);
    return Init_GaitPattern_foot2_phase(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_com_position
{
public:
  explicit Init_GaitPattern_com_position(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot1_phase com_position(::quadruped_msgs::msg::GaitPattern::_com_position_type arg)
  {
    msg_.com_position = std::move(arg);
    return Init_GaitPattern_foot1_phase(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot4_step_position
{
public:
  explicit Init_GaitPattern_foot4_step_position(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_com_position foot4_step_position(::quadruped_msgs::msg::GaitPattern::_foot4_step_position_type arg)
  {
    msg_.foot4_step_position = std::move(arg);
    return Init_GaitPattern_com_position(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot3_step_position
{
public:
  explicit Init_GaitPattern_foot3_step_position(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot4_step_position foot3_step_position(::quadruped_msgs::msg::GaitPattern::_foot3_step_position_type arg)
  {
    msg_.foot3_step_position = std::move(arg);
    return Init_GaitPattern_foot4_step_position(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot2_step_position
{
public:
  explicit Init_GaitPattern_foot2_step_position(::quadruped_msgs::msg::GaitPattern & msg)
  : msg_(msg)
  {}
  Init_GaitPattern_foot3_step_position foot2_step_position(::quadruped_msgs::msg::GaitPattern::_foot2_step_position_type arg)
  {
    msg_.foot2_step_position = std::move(arg);
    return Init_GaitPattern_foot3_step_position(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

class Init_GaitPattern_foot1_step_position
{
public:
  Init_GaitPattern_foot1_step_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GaitPattern_foot2_step_position foot1_step_position(::quadruped_msgs::msg::GaitPattern::_foot1_step_position_type arg)
  {
    msg_.foot1_step_position = std::move(arg);
    return Init_GaitPattern_foot2_step_position(msg_);
  }

private:
  ::quadruped_msgs::msg::GaitPattern msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadruped_msgs::msg::GaitPattern>()
{
  return quadruped_msgs::msg::builder::Init_GaitPattern_foot1_step_position();
}

}  // namespace quadruped_msgs

#endif  // QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__BUILDER_HPP_
