set(target gamescreen)

add_library(${target} STATIC gamescreen.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} view item elixir gamecontroller scoremodel inputname Qt6::Widgets)