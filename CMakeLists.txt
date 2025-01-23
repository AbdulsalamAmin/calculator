cmake_minimum_required(VERSION 3.5)

project(tamrin3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(tamrin3 src/main.cpp
    src/calculator.cpp
    include/calculator.h

)

include(GNUInstallDirs)

install(TARGETS tamrin3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
