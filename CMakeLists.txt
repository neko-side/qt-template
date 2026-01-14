cmake_minimum_required(VERSION 4.0.0)

project(qt)

find_package(Qt6 REQUIRED
    COMPONENTS
    Core
    Gui
    Widgets
)

add_executable(qt main.cpp)

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)
