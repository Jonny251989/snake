set(target startwidget)

set(CMAKE_AUTOMOC ON) # Автоматически запускает moc
set(CMAKE_AUTOUIC ON)

add_library(${target} STATIC startwidget.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} inputname scoremodel view Qt6::Widgets)