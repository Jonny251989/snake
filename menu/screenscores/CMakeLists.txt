set(target screenscores)
set(CMAKE_AUTOMOC ON) # Автоматически запускает moc
set(CMAKE_AUTOUIC ON)
add_library(${target} STATIC screenscores.cpp)

target_include_directories(${target} PUBLIC .)

target_link_libraries (${target} item scoremodel Qt6::Widgets)