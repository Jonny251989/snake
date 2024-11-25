set(target inputname)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_library(${target} STATIC inputname.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item view Qt6::Widgets)