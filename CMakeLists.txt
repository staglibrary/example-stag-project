cmake_minimum_required(VERSION 3.22)
project(example_stag_project)

set(CMAKE_CXX_STANDARD 20)

# Find and include the STAG library
find_package(stag REQUIRED)
message(STATUS "Found STAG!")
include_directories(${STAG_INCLUDE_DIRS})

# Define the executable for your project
add_executable(example_stag_project
        main.cpp)

# Link to the STAG library
target_link_libraries(example_stag_project stag)
