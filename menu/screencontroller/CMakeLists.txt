set(target screencontroller)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_library(${target} STATIC screencontroller.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries(${target} screenscores gamescreen gamestartoptionswidget startwidget gamecontroller scoremodel inputname elixir item Qt6::Widgets)