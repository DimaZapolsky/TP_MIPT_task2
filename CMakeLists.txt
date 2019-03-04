cmake_minimum_required(VERSION 2.8)

project(TP_homework)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(SOURCES_LIST C/main.cpp)

include(FindPythonInterp)
execute_process(
        COMMAND ${PYTHON_EXECUTABLE} preparing.py
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/A
)

include_directories(A)
include_directories(B)
include_directories(C)

add_executable(TP_homework ${SOURCES_LIST})

add_subdirectory(B)

target_link_libraries(TP_homework lib)

install(TARGETS TP_homework DESTINATION /bin)
