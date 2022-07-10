#include "WindowSystem.hpp"
#include "../include/GLFW/glfw3.h"



WindowSystem::WindowSystem(SystemManager* p_systemManager)    
:       System(p_systemManager, "window_system"),
        m_glfwWindow(nullptr),
        m_height(640),
        m_width(480),
        m_title("Maxibon"),
        m_engine(nullptr)
{
    
}


WindowSystem::~WindowSystem()
{
    
}



bool WindowSystem::start()
{ 
    // glfwInit();
    m_glfwWindow = glfwCreateWindow(m_height, m_width, m_title.c_str(), NULL, NULL);
    glfwSetWindowUserPointer(m_glfwWindow, this);
    glfwSetFramebufferSizeCallback(m_glfwWindow, WindowResizeCallback);
    glfwSetWindowRefreshCallback(m_glfwWindow, WindowRefreshCallback);
    glfwMakeContextCurrent(m_glfwWindow);
    return true;
}


void WindowSystem::onTick()
{
    
}


bool WindowSystem::stop()
{
    return true;
}


void WindowSystem::OnViewportResize(const int& l_width, const int& l_height)
{
    glViewport(0, 0, (GLsizei)l_width, (GLsizei)l_height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
}


void WindowSystem::WindowResizeCallback(GLFWwindow* p_window, int l_width, int l_height)
{
    WindowSystem *window = static_cast<WindowSystem*>(glfwGetWindowUserPointer(p_window));
    window->OnViewportResize(l_width, l_height);
}


void WindowSystem::WindowRefreshCallback(GLFWwindow* p_window)
{
    WindowSystem *window = static_cast<WindowSystem*>(glfwGetWindowUserPointer(p_window));
}
// void WindowSystem::Notify(const Message& l_message)
// {
//     std::cout << "OnNotify WindowSystem" << std::endl;
// }
