add_executable(client src/main.cpp)
target_link_libraries(client PRIVATE lib)
# target_compile_features(client PRIVATE cxx_std_17)


add_executable(client-test test/client.test.cpp)
target_link_libraries(client-test PRIVATE CONAN_PKG::catch2)
# target_compile_features(client-test PRIVATE cxx_std_17)


