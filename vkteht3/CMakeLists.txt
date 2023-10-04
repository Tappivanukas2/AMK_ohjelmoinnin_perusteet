cmake_minimum_required(VERSION 3.5)

project(vkteht3 LANGUAGES C)

add_executable(vkteht3 main.c)

include(GNUInstallDirs)
install(TARGETS vkteht3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
