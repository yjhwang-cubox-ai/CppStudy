cmake_minimum_required (VERSION 3.16)

set (TARGET_NAME "starcraft")

file (GLOB SRCS 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
file (GLOB HRDS 
        ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
)

add_executable(${TARGET_NAME} ${SRCS} ${HRDS})