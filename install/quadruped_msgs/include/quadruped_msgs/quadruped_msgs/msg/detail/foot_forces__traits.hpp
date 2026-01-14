// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadruped_msgs:msg/FootForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/foot_forces.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__TRAITS_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadruped_msgs/msg/detail/foot_forces__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'foot1_force'
// Member 'foot2_force'
// Member 'foot3_force'
// Member 'foot4_force'
// Member 'total_force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace quadruped_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootForces & msg,
  std::ostream & out)
{
  out << "{";
  // member: foot1_force
  {
    out << "foot1_force: ";
    to_flow_style_yaml(msg.foot1_force, out);
    out << ", ";
  }

  // member: foot2_force
  {
    out << "foot2_force: ";
    to_flow_style_yaml(msg.foot2_force, out);
    out << ", ";
  }

  // member: foot3_force
  {
    out << "foot3_force: ";
    to_flow_style_yaml(msg.foot3_force, out);
    out << ", ";
  }

  // member: foot4_force
  {
    out << "foot4_force: ";
    to_flow_style_yaml(msg.foot4_force, out);
    out << ", ";
  }

  // member: total_force
  {
    out << "total_force: ";
    to_flow_style_yaml(msg.total_force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FootForces & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: foot1_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot1_force:\n";
    to_block_style_yaml(msg.foot1_force, out, indentation + 2);
  }

  // member: foot2_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot2_force:\n";
    to_block_style_yaml(msg.foot2_force, out, indentation + 2);
  }

  // member: foot3_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot3_force:\n";
    to_block_style_yaml(msg.foot3_force, out, indentation + 2);
  }

  // member: foot4_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "foot4_force:\n";
    to_block_style_yaml(msg.foot4_force, out, indentation + 2);
  }

  // member: total_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_force:\n";
    to_block_style_yaml(msg.total_force, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootForces & msg, bool use_flow_style = false)
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
  const quadruped_msgs::msg::FootForces & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadruped_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadruped_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadruped_msgs::msg::FootForces & msg)
{
  return quadruped_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadruped_msgs::msg::FootForces>()
{
  return "quadruped_msgs::msg::FootForces";
}

template<>
inline const char * name<quadruped_msgs::msg::FootForces>()
{
  return "quadruped_msgs/msg/FootForces";
}

template<>
struct has_fixed_size<quadruped_msgs::msg::FootForces>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<quadruped_msgs::msg::FootForces>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<quadruped_msgs::msg::FootForces>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADRUPED_MSGS__MSG__DETAIL__FOOT_FORCES__TRAITS_HPP_
