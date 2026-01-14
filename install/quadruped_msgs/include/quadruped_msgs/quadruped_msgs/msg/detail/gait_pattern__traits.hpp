// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadruped_msgs:msg/GaitPattern.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/gait_pattern.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__TRAITS_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadruped_msgs/msg/detail/gait_pattern__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'foot1_step_position'
// Member 'foot2_step_position'
// Member 'foot3_step_position'
// Member 'foot4_step_position'
// Member 'com_position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace quadruped_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GaitPattern & msg,
  std::ostream & out)
{
  out << "{";
  // member: foot1_step_position
  {
    out << "foot1_step_position: ";
    to_flow_style_yaml(msg.foot1_step_position, out);
    out << ", ";
  }

  // member: foot2_step_position
  {
    out << "foot2_step_position: ";
    to_flow_style_yaml(msg.foot2_step_position, out);
    out << ", ";
  }

  // member: foot3_step_position
  {
    out << "foot3_step_position: ";
    to_flow_style_yaml(msg.foot3_step_position, out);
    out << ", ";
  }

  // member: foot4_step_position
  {
    out << "foot4_step_position: ";
    to_flow_style_yaml(msg.foot4_step_position, out);
    out << ", ";
  }

  // member: com_position
  {
    out << "com_position: ";
    to_flow_style_yaml(msg.com_position, out);
    out << ", ";
  }

  // member: foot1_phase
  {
    out << "foot1_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot1_phase, out);
    out << ", ";
  }

  // member: foot2_phase
  {
    out << "foot2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot2_phase, out);
    out << ", ";
  }

  // member: foot3_phase
  {
    out << "foot3_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot3_phase, out);
    out << ", ";
  }

  // member: foot4_phase
  {
    out << "foot4_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot4_phase, out);
    out << ", ";
  }

  // member: foot1_state
  {
    out << "foot1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot1_state, out);
    out << ", ";
  }

  // member: foot2_state
  {
    out << "foot2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot2_state, out);
    out << ", ";
  }

  // member: foot3_state
  {
    out << "foot3_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot3_state, out);
    out << ", ";
  }

  // member: foot4_state
  {
    out << "foot4_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot4_state, out);
    out << ", ";
  }

  // member: step_height
  {
    out << "step_height: ";
    rosidl_generator_traits::value_to_yaml(msg.step_height, out);
    out << ", ";
  }

  // member: predicted_states
  {
    if (msg.predicted_states.size() == 0) {
      out << "predicted_states: []";
    } else {
      out << "predicted_states: [";
      size_t pending_items = msg.predicted_states.size();
      for (auto item : msg.predicted_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predicted_phases
  {
    if (msg.predicted_phases.size() == 0) {
      out << "predicted_phases: []";
    } else {
      out << "predicted_phases: [";
      size_t pending_items = msg.predicted_phases.size();
      for (auto item : msg.predicted_phases) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prediction_stages
  {
    out << "prediction_stages: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_stages, out);
    out << ", ";
  }

  // member: prediction_horizon
  {
    out << "prediction_horizon: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_horizon, out);
    out << ", ";
  }

  // member: prediction_timestep
  {
    out << "prediction_timestep: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_timestep, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GaitPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: foot1_step_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot1_step_position:\n";
    to_block_style_yaml(msg.foot1_step_position, out, indentation + 2);
  }

  // member: foot2_step_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot2_step_position:\n";
    to_block_style_yaml(msg.foot2_step_position, out, indentation + 2);
  }

  // member: foot3_step_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot3_step_position:\n";
    to_block_style_yaml(msg.foot3_step_position, out, indentation + 2);
  }

  // member: foot4_step_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot4_step_position:\n";
    to_block_style_yaml(msg.foot4_step_position, out, indentation + 2);
  }

  // member: com_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com_position:\n";
    to_block_style_yaml(msg.com_position, out, indentation + 2);
  }

  // member: foot1_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot1_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot1_phase, out);
    out << "\n";
  }

  // member: foot2_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot2_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot2_phase, out);
    out << "\n";
  }

  // member: foot3_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot3_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot3_phase, out);
    out << "\n";
  }

  // member: foot4_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot4_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.foot4_phase, out);
    out << "\n";
  }

  // member: foot1_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot1_state, out);
    out << "\n";
  }

  // member: foot2_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot2_state, out);
    out << "\n";
  }

  // member: foot3_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot3_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot3_state, out);
    out << "\n";
  }

  // member: foot4_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot4_state: ";
    rosidl_generator_traits::value_to_yaml(msg.foot4_state, out);
    out << "\n";
  }

  // member: step_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_height: ";
    rosidl_generator_traits::value_to_yaml(msg.step_height, out);
    out << "\n";
  }

  // member: predicted_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_states.size() == 0) {
      out << "predicted_states: []\n";
    } else {
      out << "predicted_states:\n";
      for (auto item : msg.predicted_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: predicted_phases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_phases.size() == 0) {
      out << "predicted_phases: []\n";
    } else {
      out << "predicted_phases:\n";
      for (auto item : msg.predicted_phases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prediction_stages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_stages: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_stages, out);
    out << "\n";
  }

  // member: prediction_horizon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_horizon: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_horizon, out);
    out << "\n";
  }

  // member: prediction_timestep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_timestep: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_timestep, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GaitPattern & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace quadruped_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadruped_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadruped_msgs::msg::GaitPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadruped_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadruped_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadruped_msgs::msg::GaitPattern & msg)
{
  return quadruped_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadruped_msgs::msg::GaitPattern>()
{
  return "quadruped_msgs::msg::GaitPattern";
}

template<>
inline const char * name<quadruped_msgs::msg::GaitPattern>()
{
  return "quadruped_msgs/msg/GaitPattern";
}

template<>
struct has_fixed_size<quadruped_msgs::msg::GaitPattern>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadruped_msgs::msg::GaitPattern>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quadruped_msgs::msg::GaitPattern>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADRUPED_MSGS__MSG__DETAIL__GAIT_PATTERN__TRAITS_HPP_
