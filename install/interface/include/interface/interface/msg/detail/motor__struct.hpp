// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Motor __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mag = 0;
      this->heading = 0;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mag = 0;
      this->heading = 0;
    }
  }

  // field types and members
  using _mag_type =
    int16_t;
  _mag_type mag;
  using _heading_type =
    int16_t;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__mag(
    const int16_t & _arg)
  {
    this->mag = _arg;
    return *this;
  }
  Type & set__heading(
    const int16_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Motor
    std::shared_ptr<interface::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Motor
    std::shared_ptr<interface::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->mag != other.mag) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  interface::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__MOTOR__STRUCT_HPP_
