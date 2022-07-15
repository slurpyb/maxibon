#include "Engine.hpp"

#include "SystemManager.hpp"
#include "UpdateManager.hpp"
#include "Window.hpp"

#include "../include/GLFW/glfw3.h"

Engine::Engine(Application* p_application)
    :   m_application(p_application)
{
    
}

Engine::~Engine()
{
    
}

bool Engine::start()
{
    if (!initialize())
    {
        return false;
    }

    m_systemManager->start();

    if (!m_window->m_glfwWindow)
    {
        fprintf(stderr, "ERROR: GLFW Could Not Open Window");
        glfwTerminate();
        return false;
    }

    return true;
}

void Engine::tick()
{
    while(!glfwWindowShouldClose(m_window->m_glfwWindow))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(m_window->m_glfwWindow);
        glfwPollEvents();
        m_systemManager->onTick();
    }
}

bool Engine::stop()
{
    m_systemManager->stop();
    return true;
}

SystemManager* Engine::GetSystemManager()
{
    return m_systemManager.get();
}

bool Engine::initialize()
{
    glfwInit();

    m_window = std::make_unique<Window>();
    m_systemManager = std::make_unique<SystemManager>(this);

    m_updateManager = std::make_unique<UpdateManager>(this);
    
// glfwSetErrorCallback(glfwErrorCallback); 

    if (!glfwInit())
    {
        fprintf(stderr, "ERROR: GLFW Failed to Initialize"); 
        // return GLFW_INIT_FAILURE; // TODO: Exit Application (Call Function)
        return false;
    }
    return true;
}

bool Engine::destroy()
{
    return true;
}
