# William Wu, 2013 March 05

# cmake requirement
cmake_minimum_required(VERSION 2.8.4)

# project name
project( CMAKEDEMO ) 

# version
set (CMAKEDEMO_VERSION_MAJOR 1)
set (CMAKEDEMO_VERSION_MINOR 0)

# compile options
if (UNIX)
  message(status " Setting GCC flags")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexceptions -g -Wall")
else()
  message(status " Setting MSVC flags")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHc-")
endif()
message(status " ** CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

# subdirectories
add_subdirectory (src)