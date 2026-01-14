# Install script for directory: /home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor/install

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/release/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lib" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo]|[Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll]|[Nn][Oo][Nn][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/release/target/release/libzenohc.so")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo]|[Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll]|[Nn][Oo][Nn][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE OPTIONAL RENAME "zenohc.pc" FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/install/zenohc_RELEASE.pc")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo]|[Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll]|[Nn][Oo][Nn][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/release/target/release/libzenohc.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo]|[Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll]|[Nn][Oo][Nn][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/zenohc" TYPE FILE RENAME "zenohcConfig.cmake" FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/install/zenohc_RELEASEConfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee]|[Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo]|[Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll]|[Nn][Oo][Nn][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/zenohc" TYPE FILE RENAME "zenohcConfigVersion.cmake" FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/install/zenohc_RELEASEConfigVersion.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lib" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/debug/target/debug/libzenohcd.so")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE OPTIONAL RENAME "zenohc.pc" FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/install/zenohc_DEBUG.pc")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/debug/target/debug/libzenohcd.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/zenohc" TYPE FILE RENAME "zenohcConfig.cmake" FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/install/zenohc_DEBUGConfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/zenohc" TYPE FILE RENAME "zenohcConfigVersion.cmake" FILES "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build/install/zenohc_DEBUGConfigVersion.cmake")
  endif()
endif()

