cmake_minimum_required (VERSION 3.16)

set (TARGET_NAME "test")

file (GLOB SRCS 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(${TARGET_NAME} ${SRCS})