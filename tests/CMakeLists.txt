find_library(template HINTS "${CMAKE_CURRENT_SOURCE_DIR}/template_lib")
include(CTest)

include_directories(../modules/googletest/googletest/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

enable_testing()

file(GLOB_RECURSE SRC "*.hpp" "*.cpp")
add_executable(tests ${SRC})
target_link_libraries(tests gtest template)
add_test(tests tests COMMAND tests)
