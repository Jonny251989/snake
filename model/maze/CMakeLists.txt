set(target maze)

add_library(${target} STATIC maze.cpp)
target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item Qt6::Core Qt6::Widgets)
