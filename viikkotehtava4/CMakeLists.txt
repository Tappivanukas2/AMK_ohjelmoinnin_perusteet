cmake_minimum_required(VERSION 3.5)

project(viikkotehtava4 LANGUAGES C)

add_executable(viikkotehtava4 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
