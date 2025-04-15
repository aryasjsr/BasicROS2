// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg_interfaces:action/CountUntil.idl
// generated code does not contain a copyright notice

#ifndef PKG_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__BUILDER_HPP_
#define PKG_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pkg_interfaces/action/detail/count_until__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_Goal_delay
{
public:
  explicit Init_CountUntil_Goal_delay(::pkg_interfaces::action::CountUntil_Goal & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::action::CountUntil_Goal delay(::pkg_interfaces::action::CountUntil_Goal::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_Goal msg_;
};

class Init_CountUntil_Goal_target_number
{
public:
  Init_CountUntil_Goal_target_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_Goal_delay target_number(::pkg_interfaces::action::CountUntil_Goal::_target_number_type arg)
  {
    msg_.target_number = std::move(arg);
    return Init_CountUntil_Goal_delay(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_Goal>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_Goal_target_number();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_Result_reached_number
{
public:
  Init_CountUntil_Result_reached_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg_interfaces::action::CountUntil_Result reached_number(::pkg_interfaces::action::CountUntil_Result::_reached_number_type arg)
  {
    msg_.reached_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_Result>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_Result_reached_number();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_Feedback_current_number
{
public:
  Init_CountUntil_Feedback_current_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg_interfaces::action::CountUntil_Feedback current_number(::pkg_interfaces::action::CountUntil_Feedback::_current_number_type arg)
  {
    msg_.current_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_Feedback>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_Feedback_current_number();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_SendGoal_Request_goal
{
public:
  explicit Init_CountUntil_SendGoal_Request_goal(::pkg_interfaces::action::CountUntil_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::action::CountUntil_SendGoal_Request goal(::pkg_interfaces::action::CountUntil_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_SendGoal_Request msg_;
};

class Init_CountUntil_SendGoal_Request_goal_id
{
public:
  Init_CountUntil_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_SendGoal_Request_goal goal_id(::pkg_interfaces::action::CountUntil_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CountUntil_SendGoal_Request_goal(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_SendGoal_Request>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_SendGoal_Request_goal_id();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_SendGoal_Response_stamp
{
public:
  explicit Init_CountUntil_SendGoal_Response_stamp(::pkg_interfaces::action::CountUntil_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::action::CountUntil_SendGoal_Response stamp(::pkg_interfaces::action::CountUntil_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_SendGoal_Response msg_;
};

class Init_CountUntil_SendGoal_Response_accepted
{
public:
  Init_CountUntil_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_SendGoal_Response_stamp accepted(::pkg_interfaces::action::CountUntil_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CountUntil_SendGoal_Response_stamp(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_SendGoal_Response>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_SendGoal_Response_accepted();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_GetResult_Request_goal_id
{
public:
  Init_CountUntil_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg_interfaces::action::CountUntil_GetResult_Request goal_id(::pkg_interfaces::action::CountUntil_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_GetResult_Request>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_GetResult_Request_goal_id();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_GetResult_Response_result
{
public:
  explicit Init_CountUntil_GetResult_Response_result(::pkg_interfaces::action::CountUntil_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::action::CountUntil_GetResult_Response result(::pkg_interfaces::action::CountUntil_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_GetResult_Response msg_;
};

class Init_CountUntil_GetResult_Response_status
{
public:
  Init_CountUntil_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_GetResult_Response_result status(::pkg_interfaces::action::CountUntil_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CountUntil_GetResult_Response_result(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_GetResult_Response>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_GetResult_Response_status();
}

}  // namespace pkg_interfaces


namespace pkg_interfaces
{

namespace action
{

namespace builder
{

class Init_CountUntil_FeedbackMessage_feedback
{
public:
  explicit Init_CountUntil_FeedbackMessage_feedback(::pkg_interfaces::action::CountUntil_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pkg_interfaces::action::CountUntil_FeedbackMessage feedback(::pkg_interfaces::action::CountUntil_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_FeedbackMessage msg_;
};

class Init_CountUntil_FeedbackMessage_goal_id
{
public:
  Init_CountUntil_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CountUntil_FeedbackMessage_feedback goal_id(::pkg_interfaces::action::CountUntil_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CountUntil_FeedbackMessage_feedback(msg_);
  }

private:
  ::pkg_interfaces::action::CountUntil_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg_interfaces::action::CountUntil_FeedbackMessage>()
{
  return pkg_interfaces::action::builder::Init_CountUntil_FeedbackMessage_goal_id();
}

}  // namespace pkg_interfaces

#endif  // PKG_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__BUILDER_HPP_
