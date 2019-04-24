cmake_minimum_required(VERSION 3.10)
project(Memoria-Virtual)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(Memoria-Virtual main.cpp Logica/Lista.cpp Logica/Lista.h Logica/Nodo.cpp Logica/Nodo.h GUI/ventanaprincipal.h GUI/ventanaprincipal.cpp GUI/ventanaprincipal.ui GUI/assets/resources.qrc)
target_link_libraries(Memoria-Virtual Qt5::Core Qt5::Gui Qt5::Widgets)
