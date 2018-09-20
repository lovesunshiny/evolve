cmake_minimum_required(VERSION 3.1)
project(fthoughts C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -std=gnu++0x")

include_directories(fthoughts)


find_package(OpenCV REQUIRED)
include_directories(${OPenCV_DIRS})

find_library(RUNTIME_LIB rt /usr/lib  /usr/local/lib NO_DEFAULT_PATH)

aux_source_directory(. DIR_CORE_SRCS)

add_executable(fthoughts ${DIR_CORE_SRCS})

#target_link_libraries(fthoughts ${RUNTIME_LIB})
