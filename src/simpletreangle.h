#ifndef SIMPLETREANGLE_H
#define SIMPLETREANGLE_H

#include "glad/glad.h"
#include "GLFW/glfw3.h"

class SimpleTreangle
{
public:
    SimpleTreangle();
    ~SimpleTreangle();

    void show();

private:
    GLFWwindow *window;
};

#endif // SIMPLETREANGLE_H
