cmake_minimum_required(VERSION 3.23)

project(image-encryption LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

find_package(OpenCV REQUIRED)

add_executable(image
        main.cpp)

target_include_directories(image
        PRIVATE
        ${CMAKE_SOURCE_DIR}
        ${OpenCV_INCLUDE_DIRS})

target_link_libraries(image
        PRIVATE
        ${OpenCV_LIBS})