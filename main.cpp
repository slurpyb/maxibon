// #include "GLFW/glfw3.h"
#include <iostream>
#include <memory>

// #include "include/GLFW/glfw3.h"
#include "src/Application.hpp"

int main(void)
{
    std::unique_ptr<Application> app = std::make_unique<Application>();
    if (app->start())
    {
        app->run();
    };

    app->stop();
    
    // glfwTerminate();
    return 0;
}