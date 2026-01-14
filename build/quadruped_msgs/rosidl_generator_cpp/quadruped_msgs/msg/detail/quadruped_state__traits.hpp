// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadruped_msgs:msg/QuadrupedState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadruped_msgs/msg/quadruped_state.hpp"


#ifndef QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__TRAITS_HPP_
#define QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadruped_msgs/msg/detail/quadruped_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

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
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'v1'
// Member 'v2'
// Member 'v3'
// Member 'v4'
// Member 'angular_velocity'
// Member 'com_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace quadruped_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadrupedState & msg,
  std::ostream & out)
{
  out << "{";
  // member: p1
  {
    out << "p1: ";
    to_flow_style_yaml(msg.p1, out);
    out << ", ";
  }

  // member: p2
  {
    out << "p2: ";
    to_flow_style_yaml(msg.p2, out);
    out << ", ";
  }

  // member: p3
  {
    out << "p3: ";
    to_flow_style_yaml(msg.p3, out);
    out << ", ";
  }

  // member: p4
  {
    out << "p4: ";
    to_flow_style_yaml(msg.p4, out);
    out << ", ";
  }

  // member: pc
  {
    out << "pc: ";
    to_flow_style_yaml(msg.pc, out);
    out << ", ";
  }

  // member: v1
  {
    out << "v1: ";
    to_flow_style_yaml(msg.v1, out);
    out << ", ";
  }

  // member: v2
  {
    out << "v2: ";
    to_flow_style_yaml(msg.v2, out);
    out << ", ";
  }

  // member: v3
  {
    out << "v3: ";
    to_flow_style_yaml(msg.v3, out);
    out << ", ";
  }

  // member: v4
  {
    out << "v4: ";
    to_flow_style_yaml(msg.v4, out);
    out << ", ";
  }

  // member: h1
  {
    out << "h1: ";
    to_flow_style_yaml(msg.h1, out);
    out << ", ";
  }

  // member: h2
  {
    out << "h2: ";
    to_flow_style_yaml(msg.h2, out);
    out << ", ";
  }

  // member: h3
  {
    out << "h3: ";
    to_flow_style_yaml(msg.h3, out);
    out << ", ";
  }

  // member: h4
  {
    out << "h4: ";
    to_flow_style_yaml(msg.h4, out);
    out << ", ";
  }

  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_velocities
  {
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []";
    } else {
      out << "joint_velocities: [";
      size_t pending_items = msg.joint_velocities.size();
      for (auto item : msg.joint_velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_efforts
  {
    if (msg.joint_efforts.size() == 0) {
      out << "joint_efforts: []";
    } else {
      out << "joint_efforts: [";
      size_t pending_items = msg.joint_efforts.size();
      for (auto item : msg.joint_efforts) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: com_velocity
  {
    out << "com_velocity: ";
    to_flow_style_yaml(msg.com_velocity, out);
    out << ", ";
  }

  // member: j1
  {
    if (msg.j1.size() == 0) {
      out << "j1: []";
    } else {
      out << "j1: [";
      size_t pending_items = msg.j1.size();
      for (auto item : msg.j1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j2
  {
    if (msg.j2.size() == 0) {
      out << "j2: []";
    } else {
      out << "j2: [";
      size_t pending_items = msg.j2.size();
      for (auto item : msg.j2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j3
  {
    if (msg.j3.size() == 0) {
      out << "j3: []";
    } else {
      out << "j3: [";
      size_t pending_items = msg.j3.size();
      for (auto item : msg.j3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j4
  {
    if (msg.j4.size() == 0) {
      out << "j4: []";
    } else {
      out << "j4: [";
      size_t pending_items = msg.j4.size();
      for (auto item : msg.j4) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact_1
  {
    out << "contact_1: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_1, out);
    out << ", ";
  }

  // member: contact_2
  {
    out << "contact_2: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_2, out);
    out << ", ";
  }

  // member: contact_3
  {
    out << "contact_3: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_3, out);
    out << ", ";
  }

  // member: contact_4
  {
    out << "contact_4: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadrupedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: p1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p1:\n";
    to_block_style_yaml(msg.p1, out, indentation + 2);
  }

  // member: p2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p2:\n";
    to_block_style_yaml(msg.p2, out, indentation + 2);
  }

  // member: p3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p3:\n";
    to_block_style_yaml(msg.p3, out, indentation + 2);
  }

  // member: p4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p4:\n";
    to_block_style_yaml(msg.p4, out, indentation + 2);
  }

  // member: pc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pc:\n";
    to_block_style_yaml(msg.pc, out, indentation + 2);
  }

  // member: v1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1:\n";
    to_block_style_yaml(msg.v1, out, indentation + 2);
  }

  // member: v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2:\n";
    to_block_style_yaml(msg.v2, out, indentation + 2);
  }

  // member: v3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v3:\n";
    to_block_style_yaml(msg.v3, out, indentation + 2);
  }

  // member: v4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v4:\n";
    to_block_style_yaml(msg.v4, out, indentation + 2);
  }

  // member: h1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h1:\n";
    to_block_style_yaml(msg.h1, out, indentation + 2);
  }

  // member: h2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h2:\n";
    to_block_style_yaml(msg.h2, out, indentation + 2);
  }

  // member: h3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h3:\n";
    to_block_style_yaml(msg.h3, out, indentation + 2);
  }

  // member: h4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h4:\n";
    to_block_style_yaml(msg.h4, out, indentation + 2);
  }

  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []\n";
    } else {
      out << "joint_velocities:\n";
      for (auto item : msg.joint_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_efforts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_efforts.size() == 0) {
      out << "joint_efforts: []\n";
    } else {
      out << "joint_efforts:\n";
      for (auto item : msg.joint_efforts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: com_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com_velocity:\n";
    to_block_style_yaml(msg.com_velocity, out, indentation + 2);
  }

  // member: j1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j1.size() == 0) {
      out << "j1: []\n";
    } else {
      out << "j1:\n";
      for (auto item : msg.j1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j2.size() == 0) {
      out << "j2: []\n";
    } else {
      out << "j2:\n";
      for (auto item : msg.j2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j3.size() == 0) {
      out << "j3: []\n";
    } else {
      out << "j3:\n";
      for (auto item : msg.j3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: j4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j4.size() == 0) {
      out << "j4: []\n";
    } else {
      out << "j4:\n";
      for (auto item : msg.j4) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: contact_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_1: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_1, out);
    out << "\n";
  }

  // member: contact_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_2: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_2, out);
    out << "\n";
  }

  // member: contact_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_3: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_3, out);
    out << "\n";
  }

  // member: contact_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_4: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadrupedState & msg, bool use_flow_style = false)
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
  const quadruped_msgs::msg::QuadrupedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadruped_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadruped_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadruped_msgs::msg::QuadrupedState & msg)
{
  return quadruped_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadruped_msgs::msg::QuadrupedState>()
{
  return "quadruped_msgs::msg::QuadrupedState";
}

template<>
inline const char * name<quadruped_msgs::msg::QuadrupedState>()
{
  return "quadruped_msgs/msg/QuadrupedState";
}

template<>
struct has_fixed_size<quadruped_msgs::msg::QuadrupedState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadruped_msgs::msg::QuadrupedState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quadruped_msgs::msg::QuadrupedState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADRUPED_MSGS__MSG__DETAIL__QUADRUPED_STATE__TRAITS_HPP_
