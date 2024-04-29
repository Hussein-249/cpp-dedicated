cmake_minimum_required(VERSION 3.5)

project(cpp-dedicated LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp-dedicated main.cpp
    tests/testkaratsuba.h tests/testkaratsuba.cpp
    math/karatsuba.h
    math/karatsuba.cpp)

# include(cpp-dedicated/tests)

include(GNUInstallDirs)
install(TARGETS cpp-dedicated
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
