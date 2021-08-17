file(GLOB_RECURSE SRC "*.hpp" "*.cpp")
add_library(template SHARED ${SRC})
