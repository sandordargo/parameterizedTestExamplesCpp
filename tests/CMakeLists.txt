set(BINARY ${CMAKE_PROJECT_NAME}_tests_test)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()  # Prepares the CMakeList.txt for Conan.

include_directories(../include)

add_executable(${BINARY} ${TEST_SOURCES})
target_link_libraries(${BINARY} PUBLIC ${CONAN_LIBS})
target_link_libraries(${BINARY} PUBLIC Leapyear_src_lib)

add_test(NAME ${BINARY} COMMAND ${BINARY})
