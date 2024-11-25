set(target screencontroller)

set(CMAKE_AUTOMOC ON)  # Автоматически запускает moc
set(CMAKE_AUTOUIC ON)   # Автоматически запускает uic для .ui файлов

add_library(${target} STATIC screencontroller.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries(${target} screenscores gamescreen gamestartoptionswidget startwidget gamecontroller scoremodel inputname elixir item Qt6::Widgets)