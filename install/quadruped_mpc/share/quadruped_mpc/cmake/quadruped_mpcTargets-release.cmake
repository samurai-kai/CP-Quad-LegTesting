#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "quadruped_mpc::quadruped_mpc_controllers" for configuration "Release"
set_property(TARGET quadruped_mpc::quadruped_mpc_controllers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(quadruped_mpc::quadruped_mpc_controllers PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libquadruped_mpc_controllers.so"
  IMPORTED_SONAME_RELEASE "libquadruped_mpc_controllers.so"
  )

list(APPEND _cmake_import_check_targets quadruped_mpc::quadruped_mpc_controllers )
list(APPEND _cmake_import_check_files_for_quadruped_mpc::quadruped_mpc_controllers "${_IMPORT_PREFIX}/lib/libquadruped_mpc_controllers.so" )

# Import target "quadruped_mpc::acados_generated_code" for configuration "Release"
set_property(TARGET quadruped_mpc::acados_generated_code APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(quadruped_mpc::acados_generated_code PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libacados_generated_code.so"
  IMPORTED_SONAME_RELEASE "libacados_generated_code.so"
  )

list(APPEND _cmake_import_check_targets quadruped_mpc::acados_generated_code )
list(APPEND _cmake_import_check_files_for_quadruped_mpc::acados_generated_code "${_IMPORT_PREFIX}/lib/libacados_generated_code.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
