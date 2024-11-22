set(target screencontroller)

add_library(${target} STATIC screencontroller.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} screenscores item maze scoremodel startwidget gamestartoptionswidget gamescreen Qt6::Widgets)