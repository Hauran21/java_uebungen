// generated from
// rosidl_typesupport_introspection_c/resource/rosidl_typesupport_introspection_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef MOTORCTRL_INTERFACES__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
#define MOTORCTRL_INTERFACES__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_motorctrl_interfaces __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_motorctrl_interfaces __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_INTROSPECTION_C_BUILDING_DLL_motorctrl_interfaces
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_motorctrl_interfaces ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_motorctrl_interfaces ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_motorctrl_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motorctrl_interfaces __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_IMPORT_motorctrl_interfaces
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_motorctrl_interfaces __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_INTROSPECTION_C_PUBLIC_motorctrl_interfaces
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MOTORCTRL_INTERFACES__MSG__ROSIDL_TYPESUPPORT_INTROSPECTION_C__VISIBILITY_CONTROL_H_
