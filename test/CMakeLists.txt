cmake_minimum_required(VERSION 3.0)

include_directories(../source/)

# Add test cpp file
add_executable(tests tests-hashtablecxx.cpp tests-node.cpp tests-main.cpp)
target_link_libraries(tests hashtablecxx)
add_test(tests tests COMMAND Test)