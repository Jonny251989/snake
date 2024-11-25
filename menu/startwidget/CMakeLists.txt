set(target startwidget)

set(CMAKE_AUTOMOC ON)  # Автоматически запускает moc
set(CMAKE_AUTOUIC ON)   # Автоматически запускает uic для .ui файлов



add_library(${target} STATIC startwidget.cpp)

target_include_directories(${target} PUBLIC .)


target_link_libraries(${target} scoremodel inputname view Qt6::Widgets)