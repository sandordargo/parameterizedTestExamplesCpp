cmake_minimum_required(VERSION 3.5)
project(ParameterizedTestExamples)

enable_testing()
find_package(GTest)

include(ExternalProject)
if(NOT ${GTEST_FOUND}) # Download gtest if not installed
    message("No system gtest use external project")
    ExternalProject_Add(googletest
            GIT_REPOSITORY    https://github.com/google/googletest.git
            GIT_TAG           master
            SOURCE_DIR        "${CMAKE_BINARY_DIR}/googletest-src"
            BINARY_DIR        "${CMAKE_BINARY_DIR}/googletest-build"
            CONFIGURE_COMMAND ""
            BUILD_COMMAND     ""
            INSTALL_COMMAND   ""
            TEST_COMMAND      ""
            )
    add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
            ${CMAKE_BINARY_DIR}/googletest-build
            EXCLUDE_FROM_ALL)
    set(GTEST_BOTH_LIBRARIES gtest gtest_main)
endif()

include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${CMAKE_BINARY_DIR}/test)
include_directories(include)


set(CMAKE_CXX_STANDARD 14)

add_executable(ParameterizedTestExamples test/main.cpp include/LeapYearCalendar.h
        src/LeapYearCalendar.cpp test/LeapYearStandaloneTests.cpp
        test/LeapYearFixtureTests.cpp test/LeapYearIterationTest.cpp
        test/LeapYearParameterizedTestFixture.cpp test/LeapYearFixtureCombinedWithParameterizedTests.cpp
        test/LeapYearMultipleParametersTests.cpp)
target_link_libraries(ParameterizedTestExamples ${GTEST_BOTH_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
add_test(NAME ParameterizedTestExamples COMMAND ParameterizedTestExamples)