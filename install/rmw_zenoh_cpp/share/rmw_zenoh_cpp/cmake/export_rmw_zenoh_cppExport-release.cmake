#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmw_zenoh_cpp::rmw_zenoh_cpp" for configuration "Release"
set_property(TARGET rmw_zenoh_cpp::rmw_zenoh_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmw_zenoh_cpp::rmw_zenoh_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "ament_index_cpp::ament_index_cpp;fastcdr;rcpputils::rcpputils;rcutils::rcutils;rosidl_typesupport_fastrtps_c::rosidl_typesupport_fastrtps_c;rosidl_typesupport_fastrtps_cpp::rosidl_typesupport_fastrtps_cpp;rmw::rmw;tracetools::tracetools"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmw_zenoh_cpp.so"
  IMPORTED_SONAME_RELEASE "librmw_zenoh_cpp.so"
  )

list(APPEND _cmake_import_check_targets rmw_zenoh_cpp::rmw_zenoh_cpp )
list(APPEND _cmake_import_check_files_for_rmw_zenoh_cpp::rmw_zenoh_cpp "${_IMPORT_PREFIX}/lib/librmw_zenoh_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
