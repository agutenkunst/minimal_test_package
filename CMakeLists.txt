cmake_minimum_required(VERSION 3.0.2)
project(minimal_test_package)

find_package(catkin REQUIRED COMPONENTS)

catkin_python_setup()
catkin_package()

include_directories(include)

add_library(moduleBLib src/moduleB.cpp)

#############
## Testing ##
#############


if(CATKIN_ENABLE_TESTING)

  catkin_add_nosetests(test/moduleA_unittest.py)

  catkin_add_gtest(moduleB_gtest
                   test/moduleB_gtest.cpp)
  target_link_libraries(moduleB_gtest moduleBLib)
endif()
