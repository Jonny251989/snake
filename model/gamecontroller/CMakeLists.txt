set(target gamecontroller)

add_library(${target} STATIC gamecontroller.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} snake elixir food maze Qt6::Widgets)