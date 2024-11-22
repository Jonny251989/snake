set(target food)

add_library(${target} STATIC food.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item Qt6::Widgets)