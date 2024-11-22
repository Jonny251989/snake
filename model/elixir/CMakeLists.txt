set(target elixir)

add_library(${target} STATIC elixir.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item )