set(target item)

add_library(${target} STATIC item.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} Qt6::Widgets)