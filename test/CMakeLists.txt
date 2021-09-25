enable_testing()


add_executable(
  hello_test
  hello_test.cpp
  ../source/simple.cpp
)
target_link_libraries(
  hello_test
  gtest_main
)

target_include_directories(hello_test 
    PUBLIC ../include)

include(GoogleTest)
gtest_discover_tests(hello_test)