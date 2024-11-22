set(target gamestartoptionswidget)

set(CMAKE_AUTOMOC ON) # Автоматически запускает moc
set(CMAKE_AUTOUIC ON)

add_library(${target} STATIC gamestartoptionswidget.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} view Qt6::Widgets)