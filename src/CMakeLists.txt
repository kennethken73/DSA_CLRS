# DSA_CLRS Program
# Ken Harvey  <kennethken73@gmail.com>

cmake_minimum_required(VERSION 3.22)

# compile commands json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project
project(DSA_CLRS)

# Version
set(DSA_CLRS_VERSION_MAJOR 1)
set(DSA_CLRS_VERSION_MINOR 0)
set(DSA_CLRS_VERSION_PATCH 0)
set(DSA_CLRS_VERSION
  ${DSA_CLRS_VERSION_MAJOR}.${DSA_CLRS_VERSION_MINOR}.${DSA_CLRS_VERSION_PATCH}
)

# Languages
set(DSA_CLRS_LANGUAGES CXX)

# Standard & Extensions
## Supported values: 98 | 11 | 14 | 17 | 20 | 23
set(CMAKE_CXX_STANDARD          20)
## Whether to enforce the standard (on included dependencies even?)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)
## CMake can set compiler-specific flags for features in-use in code.
## Turning this off obviates when a language-feature is missing for a given standard.
## TODO test whether this affects GDB sessions
set(CMAKE_CXX_EXTENSIONS        ON)

# Flags
## turn-on all warnings
set(CMAKE_CXX_FLAGS "-Wall")
## produce max debug symbols
## TODO ideally we should have a DEBUG and RELEASE build..
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g3")
## turn-off compiler-extensions
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic-errors")
## maximum warning/error reporting
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Weffc++ -Wextra -Wsign-conversion")
## Treat warnings as erros
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
## generate maximum debug information
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Og -ggdb")

# user-defined variables
string(APPEND MY_PROJECT_ROOT_DIR "../")
list(APPEND MY_PROJECT_LIB_DIRS "../lib")

# NOTE touch CMakeLists.txt to get this file (and the following report)
#      to be re-evaluated on compile
message("\nReporting Variables..")
include(CMakePrintHelpers)
cmake_print_variables(CMAKE_CXX_COMPILER_ID)
cmake_print_variables(CMAKE_CXX_COMPILER_VERSION)
cmake_print_variables(CMAKE_CXX_EXTENSIONS)
cmake_print_variables(CMAKE_CXX_FLAGS)
cmake_print_variables(CMAKE_CXX_STANDARD)
cmake_print_variables(CMAKE_CXX_STANDARD_REQUIRED)
cmake_print_variables(PROJECT_BINARY_DIR)
cmake_print_variables(PROJECT_SOURCE_DIR)
message("\nReporting User Defined Variables..")
cmake_print_variables(MY_PROJECT_ROOT_DIR)
cmake_print_variables(MY_PROJECT_LIB_DIRS)
cmake_print_variables(DSA_CLRS_VERSION)
message("")


## TODO how to do this properly?
# cmake_print_properties(TARGETS DSA_CLRS
#   PROPERTIES BUILD_RPATH)

# included headers/implementation
## add_subdirectory tells CMake to add the directories to compilation
##  ..requiring the directories to have their own CMakeLists

add_library(myProjLib STATIC "${MY_PROJECT_LIB_DIRS}/myTimer.cpp")

add_subdirectory("${PROJECT_SOURCE_DIR}/include/myAlgo/")
add_subdirectory("${PROJECT_SOURCE_DIR}/include/myDS/")

# executable
add_executable(DSA_CLRS DSA_CLRS.cpp)

# additional linking
## myAlgoLib and myDSLib are CMake tokens (targets?) defined in
##   myAlgo/CMakeLists.txt and myDS/CMakeLists.txt
target_link_libraries(DSA_CLRS PUBLIC myProjLib)
target_link_libraries(DSA_CLRS PUBLIC myAlgoLib)
target_link_libraries(DSA_CLRS PUBLIC myDSLib)

target_include_directories(DSA_CLRS PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/include/myAlgo"
  "${MY_PROJECT_LIB_DIRS}"
  "${PROJECT_SOURCE_DIR}/include/myDS")



# TODO run.sh target (consider running test build for multiple executables)

