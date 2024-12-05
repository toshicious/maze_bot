// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Motor_heading
{
public:
  explicit Init_Motor_heading(::interface::msg::Motor & msg)
  : msg_(msg)
  {}
  ::interface::msg::Motor heading(::interface::msg::Motor::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Motor msg_;
};

class Init_Motor_mag
{
public:
  Init_Motor_mag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_heading mag(::interface::msg::Motor::_mag_type arg)
  {
    msg_.mag = std::move(arg);
    return Init_Motor_heading(msg_);
  }

private:
  ::interface::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Motor>()
{
  return interface::msg::builder::Init_Motor_mag();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__MOTOR__BUILDER_HPP_
