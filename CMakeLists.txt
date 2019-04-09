cmake_minimum_required(VERSION 3.13)
project(ps3eye C CXX)


set(CMAKE_CXX_STANDARD 14)

include(FindPkgConfig)
find_package(OpenCV REQUIRED)
pkg_check_modules(LIBUSB1 REQUIRED libusb-1.0>=1.0.17)


include_directories(${OpenCV_INCLUDE_DIRS} ${LIBUSB1_INCLUDE_DIRS})
link_directories(${LIBUSB1_LIBRARY_DIRS})

add_executable(ps3eye ps3eye.cpp main.cpp)

target_link_libraries(ps3eye ${OpenCV_LIBS} ${LIBUSB1_LIBRARIES})
