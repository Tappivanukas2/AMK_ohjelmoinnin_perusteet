cmake_minimum_required(VERSION 3.5)

project(viikkotehtava1 LANGUAGES C)

add_executable(viikkotehtava1 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
