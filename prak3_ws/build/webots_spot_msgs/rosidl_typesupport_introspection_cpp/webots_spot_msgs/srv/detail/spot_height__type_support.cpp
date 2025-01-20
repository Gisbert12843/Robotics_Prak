// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from webots_spot_msgs:srv/SpotHeight.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "webots_spot_msgs/srv/detail/spot_height__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webots_spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SpotHeight_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webots_spot_msgs::srv::SpotHeight_Request(_init);
}

void SpotHeight_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webots_spot_msgs::srv::SpotHeight_Request *>(message_memory);
  typed_message->~SpotHeight_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpotHeight_Request_message_member_array[1] = {
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_spot_msgs::srv::SpotHeight_Request, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpotHeight_Request_message_members = {
  "webots_spot_msgs::srv",  // message namespace
  "SpotHeight_Request",  // message name
  1,  // number of fields
  sizeof(webots_spot_msgs::srv::SpotHeight_Request),
  SpotHeight_Request_message_member_array,  // message members
  SpotHeight_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SpotHeight_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpotHeight_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpotHeight_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webots_spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_spot_msgs::srv::SpotHeight_Request>()
{
  return &::webots_spot_msgs::srv::rosidl_typesupport_introspection_cpp::SpotHeight_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_spot_msgs, srv, SpotHeight_Request)() {
  return &::webots_spot_msgs::srv::rosidl_typesupport_introspection_cpp::SpotHeight_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "webots_spot_msgs/srv/detail/spot_height__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webots_spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SpotHeight_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webots_spot_msgs::srv::SpotHeight_Response(_init);
}

void SpotHeight_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webots_spot_msgs::srv::SpotHeight_Response *>(message_memory);
  typed_message->~SpotHeight_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpotHeight_Response_message_member_array[1] = {
  {
    "answer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webots_spot_msgs::srv::SpotHeight_Response, answer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpotHeight_Response_message_members = {
  "webots_spot_msgs::srv",  // message namespace
  "SpotHeight_Response",  // message name
  1,  // number of fields
  sizeof(webots_spot_msgs::srv::SpotHeight_Response),
  SpotHeight_Response_message_member_array,  // message members
  SpotHeight_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SpotHeight_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpotHeight_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpotHeight_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webots_spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webots_spot_msgs::srv::SpotHeight_Response>()
{
  return &::webots_spot_msgs::srv::rosidl_typesupport_introspection_cpp::SpotHeight_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_spot_msgs, srv, SpotHeight_Response)() {
  return &::webots_spot_msgs::srv::rosidl_typesupport_introspection_cpp::SpotHeight_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "webots_spot_msgs/srv/detail/spot_height__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace webots_spot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SpotHeight_service_members = {
  "webots_spot_msgs::srv",  // service namespace
  "SpotHeight",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<webots_spot_msgs::srv::SpotHeight>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SpotHeight_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpotHeight_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webots_spot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<webots_spot_msgs::srv::SpotHeight>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::webots_spot_msgs::srv::rosidl_typesupport_introspection_cpp::SpotHeight_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::webots_spot_msgs::srv::SpotHeight_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::webots_spot_msgs::srv::SpotHeight_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webots_spot_msgs, srv, SpotHeight)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<webots_spot_msgs::srv::SpotHeight>();
}

#ifdef __cplusplus
}
#endif
