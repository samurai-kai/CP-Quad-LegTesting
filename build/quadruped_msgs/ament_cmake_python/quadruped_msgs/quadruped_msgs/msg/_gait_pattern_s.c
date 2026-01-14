// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quadruped_msgs:msg/GaitPattern.idl
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
#include "quadruped_msgs/msg/detail/gait_pattern__struct.h"
#include "quadruped_msgs/msg/detail/gait_pattern__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool quadruped_msgs__msg__gait_pattern__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("quadruped_msgs.msg._gait_pattern.GaitPattern", full_classname_dest, 44) == 0);
  }
  quadruped_msgs__msg__GaitPattern * ros_message = _ros_message;
  {  // foot1_step_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot1_step_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->foot1_step_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // foot2_step_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot2_step_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->foot2_step_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // foot3_step_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot3_step_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->foot3_step_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // foot4_step_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot4_step_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->foot4_step_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // com_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "com_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->com_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // foot1_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot1_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot1_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot2_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot2_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot2_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot3_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot3_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot3_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot4_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot4_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot4_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot1_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot1_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->foot1_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // foot2_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot2_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->foot2_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // foot3_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot3_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->foot3_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // foot4_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot4_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->foot4_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // step_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // predicted_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "predicted_states");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->predicted_states), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->predicted_states.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'predicted_states'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->predicted_states), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->predicted_states.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // predicted_phases
    PyObject * field = PyObject_GetAttrString(_pymsg, "predicted_phases");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->predicted_phases), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->predicted_phases.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'predicted_phases'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->predicted_phases), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->predicted_phases.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // prediction_stages
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_stages");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prediction_stages = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // prediction_horizon
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_horizon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prediction_horizon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prediction_timestep
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_timestep");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prediction_timestep = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quadruped_msgs__msg__gait_pattern__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GaitPattern */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quadruped_msgs.msg._gait_pattern");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GaitPattern");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quadruped_msgs__msg__GaitPattern * ros_message = (quadruped_msgs__msg__GaitPattern *)raw_ros_message;
  {  // foot1_step_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->foot1_step_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot1_step_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot2_step_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->foot2_step_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot2_step_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot3_step_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->foot3_step_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot3_step_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot4_step_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->foot4_step_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot4_step_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // com_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->com_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "com_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot1_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot1_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot1_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot2_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot2_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot2_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot3_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot3_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot3_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot4_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot4_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot4_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot1_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->foot1_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot1_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot2_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->foot2_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot2_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot3_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->foot3_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot3_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot4_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->foot4_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot4_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // predicted_states
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "predicted_states");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int32_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->predicted_states.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->predicted_states.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->predicted_states.size * sizeof(int32_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // predicted_phases
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "predicted_phases");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->predicted_phases.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->predicted_phases.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->predicted_phases.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // prediction_stages
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->prediction_stages);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prediction_stages", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prediction_horizon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prediction_horizon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prediction_horizon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prediction_timestep
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prediction_timestep);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prediction_timestep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
