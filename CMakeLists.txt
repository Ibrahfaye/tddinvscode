cmake_minimum_required(VERSION 3.10)
project(tddinvscode)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)

set(BUILD_EXEC_CONAN_INSTALL ON)
if(${BUILD_EXEC_CONAN_INSTALL})
    execute_process(COMMAND conan install ${CMAKE_SOURCE_DIR}) # Execution conan install
    include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
endif()

find_package(GTest REQUIRED)

#add_library()
# Change *.cpp to *.c, if you're making a C program
file(GLOB src CONFIGURE_DEPENDS src/*.cpp)
include_directories(include/)

#add_library(srcfiles )
add_executable(${PROJECT_NAME} main.cpp ${src})
target_include_directories(${PROJECT_NAME} PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}test maintest.cpp ${src} tests/agentTest.cpp)
target_link_libraries(${PROJECT_NAME}test 
	GTest::GTest	
        #gmock
        #gtest
        #gtest_main
)
target_include_directories(${PROJECT_NAME}test PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/include)
