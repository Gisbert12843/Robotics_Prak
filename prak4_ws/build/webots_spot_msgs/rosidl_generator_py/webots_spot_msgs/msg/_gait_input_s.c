// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from webots_spot_msgs:msg/GaitInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "webots_spot_msgs/msg/detail/gait_input__struct.h"
#include "webots_spot_msgs/msg/detail/gait_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool webots_spot_msgs__msg__gait_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("webots_spot_msgs.msg._gait_input.GaitInput", full_classname_dest, 42) == 0);
  }
  webots_spot_msgs__msg__GaitInput * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_fraction
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_fraction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_fraction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // clearance_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "clearance_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->clearance_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // penetration_depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "penetration_depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->penetration_depth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // swing_period
    PyObject * field = PyObject_GetAttrString(_pymsg, "swing_period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->swing_period = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_control");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_control = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_control_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_control_on");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_control_on = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * webots_spot_msgs__msg__gait_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GaitInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("webots_spot_msgs.msg._gait_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GaitInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  webots_spot_msgs__msg__GaitInput * ros_message = (webots_spot_msgs__msg__GaitInput *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_fraction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_fraction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_fraction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clearance_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->clearance_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clearance_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // penetration_depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->penetration_depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "penetration_depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swing_period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->swing_period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swing_period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_control
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_control_on
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_control_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_control_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
