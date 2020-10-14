add_executable(test_foo test_foo.cpp)
target_link_libraries(test_foo foo)
target_include_directories(test_foo PRIVATE "extern/ut/include")
