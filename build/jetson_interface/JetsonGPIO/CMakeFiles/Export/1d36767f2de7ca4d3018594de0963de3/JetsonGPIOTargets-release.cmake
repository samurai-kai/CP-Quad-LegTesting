#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "JetsonGPIO::JetsonGPIO" for configuration "Release"
set_property(TARGET JetsonGPIO::JetsonGPIO APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(JetsonGPIO::JetsonGPIO PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libJetsonGPIO.so.1.2.5"
  IMPORTED_SONAME_RELEASE "libJetsonGPIO.so.1"
  )

list(APPEND _cmake_import_check_targets JetsonGPIO::JetsonGPIO )
list(APPEND _cmake_import_check_files_for_JetsonGPIO::JetsonGPIO "${_IMPORT_PREFIX}/lib/libJetsonGPIO.so.1.2.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
