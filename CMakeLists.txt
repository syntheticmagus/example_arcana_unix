cmake_minimum_required(VERSION 3.12)

project(arcana_linux)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Dependencies EXCLUDE_FROM_ALL)

set(SOURCES
    "main.cpp")

add_executable(arcana_linux ${SOURCES})

target_link_libraries(arcana_linux
    PRIVATE arcana)
