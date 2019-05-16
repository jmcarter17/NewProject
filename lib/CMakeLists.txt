cmake_minimum_required(VERSION 3.13)
project(lib LANGUAGES CXX)

set(SRC src/helloworld)

add_library(lib ${SRC})
target_include_directories(lib PUBLIC include)
target_compile_features(lib PRIVATE cxx_std_17)

set(TEST
    test/lib.test.cpp
    test/helloworld.test.cpp
)

add_executable(lib-test ${TEST})
target_link_libraries(lib-test PRIVATE lib)
target_link_libraries(lib-test PRIVATE CONAN_PKG::catch2)
target_compile_features(lib-test PRIVATE cxx_std_17)