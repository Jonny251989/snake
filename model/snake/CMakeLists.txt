set(target snake)

add_library(${target} STATIC snake.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item Qt6::Widgets)