project("Linear Algebra")
cmake_minimum_required(VERSION 3.10)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(run main.c utility.c linear_algebra.c)

target_link_libraries(run ${OpenCV_LIBS})