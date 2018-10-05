cmake_minimum_required(VERSION 2.6)

#SET(CMAKE_BUILD_TYPE "RELEASE")

#Eigen is header only, ...
#... its header files are installed at standard path /usr/include/eigen3/...
#... so it is not require neither to find package , nor to add any include path

ADD_EXECUTABLE(example_1 example_1.cpp)
ADD_EXECUTABLE(example_2 example_2.cpp)
