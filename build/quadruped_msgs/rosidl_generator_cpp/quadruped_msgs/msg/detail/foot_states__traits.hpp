// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadruped_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_states.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__TRAITS_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadruped_msgs/msg/detail/foot_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace quadruped_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootStates & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FootStates & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootStates & msg, bool use_flow_style = false)
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
  const quadruped_msgs::msg::FootStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadruped_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadruped_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadruped_msgs::msg::FootStates & msg)
{
  return quadruped_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadruped_msgs::msg::FootStates>()
{
  return "quadruped_msgs::msg::FootStates";
}

template<>
inline const char * name<quadruped_msgs::msg::FootStates>()
{
  return "quadruped_msgs/msg/FootStates";
}

template<>
struct has_fixed_size<quadruped_msgs::msg::FootStates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quadruped_msgs::msg::FootStates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quadruped_msgs::msg::FootStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_STATES__TRAITS_HPP_
