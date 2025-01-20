// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_spot_msgs:action/PeakAndDetectObject.idl
// generated code does not contain a copyright notice

#ifndef WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__BUILDER_HPP_
#define WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_spot_msgs/action/detail/peak_and_detect_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_Goal_image
{
public:
  Init_PeakAndDetectObject_Goal_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_Goal image(::webots_spot_msgs::action::PeakAndDetectObject_Goal::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_Goal>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_Goal_image();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_Result_object
{
public:
  Init_PeakAndDetectObject_Result_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_Result object(::webots_spot_msgs::action::PeakAndDetectObject_Result::_object_type arg)
  {
    msg_.object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_Result>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_Result_object();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_Feedback_status
{
public:
  Init_PeakAndDetectObject_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_Feedback status(::webots_spot_msgs::action::PeakAndDetectObject_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_Feedback>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_Feedback_status();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_SendGoal_Request_goal
{
public:
  explicit Init_PeakAndDetectObject_SendGoal_Request_goal(::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request goal(::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request msg_;
};

class Init_PeakAndDetectObject_SendGoal_Request_goal_id
{
public:
  Init_PeakAndDetectObject_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeakAndDetectObject_SendGoal_Request_goal goal_id(::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PeakAndDetectObject_SendGoal_Request_goal(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Request>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_SendGoal_Request_goal_id();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_SendGoal_Response_stamp
{
public:
  explicit Init_PeakAndDetectObject_SendGoal_Response_stamp(::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response stamp(::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response msg_;
};

class Init_PeakAndDetectObject_SendGoal_Response_accepted
{
public:
  Init_PeakAndDetectObject_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeakAndDetectObject_SendGoal_Response_stamp accepted(::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PeakAndDetectObject_SendGoal_Response_stamp(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_SendGoal_Response>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_SendGoal_Response_accepted();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_GetResult_Request_goal_id
{
public:
  Init_PeakAndDetectObject_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request goal_id(::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Request>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_GetResult_Request_goal_id();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_GetResult_Response_result
{
public:
  explicit Init_PeakAndDetectObject_GetResult_Response_result(::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response result(::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response msg_;
};

class Init_PeakAndDetectObject_GetResult_Response_status
{
public:
  Init_PeakAndDetectObject_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeakAndDetectObject_GetResult_Response_result status(::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PeakAndDetectObject_GetResult_Response_result(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_GetResult_Response>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_GetResult_Response_status();
}

}  // namespace webots_spot_msgs


namespace webots_spot_msgs
{

namespace action
{

namespace builder
{

class Init_PeakAndDetectObject_FeedbackMessage_feedback
{
public:
  explicit Init_PeakAndDetectObject_FeedbackMessage_feedback(::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage feedback(::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage msg_;
};

class Init_PeakAndDetectObject_FeedbackMessage_goal_id
{
public:
  Init_PeakAndDetectObject_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PeakAndDetectObject_FeedbackMessage_feedback goal_id(::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PeakAndDetectObject_FeedbackMessage_feedback(msg_);
  }

private:
  ::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_spot_msgs::action::PeakAndDetectObject_FeedbackMessage>()
{
  return webots_spot_msgs::action::builder::Init_PeakAndDetectObject_FeedbackMessage_goal_id();
}

}  // namespace webots_spot_msgs

#endif  // WEBOTS_SPOT_MSGS__ACTION__DETAIL__PEAK_AND_DETECT_OBJECT__BUILDER_HPP_
