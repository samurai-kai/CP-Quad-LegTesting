# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor"
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-build"
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/install"
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/tmp"
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-stamp"
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src"
  "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/ws/build/zenoh_cpp_vendor/zenoh_c_vendor-prefix/src/zenoh_c_vendor-stamp${cfgdir}") # cfgdir has leading slash
endif()
