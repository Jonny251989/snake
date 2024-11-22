set(target view)
set(CMAKE_AUTOMOC ON) # Автоматически запускает moc
set(CMAKE_AUTOUIC ON)

add_library(${target} STATIC view.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} snake elixir gamecontroller Qt6::Widgets)