cmake_minimum_required(VERSION 3.16)

project(OpenGLPractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_language(C)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/glfw/include
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/glad/include
)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs/glfw/lib)

add_executable(OpenGLPractice src/main.cpp
    src/simpletreangle.h src/simpletreangle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/glad/src/glad.c
)

target_link_libraries(OpenGLPractice glfw3)

include(GNUInstallDirs)
install(TARGETS OpenGLPractice
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
