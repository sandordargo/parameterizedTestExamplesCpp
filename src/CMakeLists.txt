set(BINARY ${CMAKE_PROJECT_NAME}_src)



include_directories(../include)


file(GLOB SOURCES *.cpp)
set(SOURCES ${SOURCES})

add_executable(Leapyear_src ${SOURCES})

add_library(Leapyear_src_lib STATIC ${SOURCES})

target_link_libraries(Leapyear_src PUBLIC ${CONAN_LIBS})