#include "simpletreangle.h"
#include <iostream>

SimpleTreangle::SimpleTreangle()
{
    if(!glfwInit()) {
        std::cerr << "Failed initialize GLFW library!" << std::endl;
    }

    window = glfwCreateWindow(800, 600, "Hello Triangle!", nullptr, nullptr);

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed load GLAD!" << std::endl;
    }
}

SimpleTreangle::~SimpleTreangle()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}

void SimpleTreangle::show()
{
    while (!glfwWindowShouldClose(window)) {

        glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }
}
