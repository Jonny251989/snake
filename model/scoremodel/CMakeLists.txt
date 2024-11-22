set(target scoremodel)

add_library(${target} STATIC scoremodel.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item Qt6::Widgets)