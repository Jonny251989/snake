cmake_minimum_required(VERSION 3.15)

project (mysnake CXX)

set(target mysnake)

set(CMAKE_AUTOMOC ON) # Автоматически запускает moc
set(CMAKE_AUTORCC ON) # Для ресурсов Qt
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

find_package(Qt6 REQUIRED COMPONENTS Core Widgets )

add_subdirectory(menu)
add_subdirectory(model)
add_subdirectory(view)
add_subdirectory(gui)

add_executable(${target} main.cpp)
    
target_link_libraries (${target} screencontroller Qt6::Widgets)
