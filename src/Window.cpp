#include "Window.hpp"

#include "../include/GLFW/glfw3.h"

GLFWwindow* Window::createWindow()
{
    return glfwCreateWindow(m_width, m_height, m_title.c_str(), NULL, NULL);
}

void Window::OnViewportResize(const int& l_width, const int& l_height)
{
     glViewport(0, 0, (GLsizei)l_width, (GLsizei)l_height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
}

void Window::WindowResizeCallback(GLFWwindow* p_window, int l_width, int l_height)
{
    Window *window = static_cast<Window*>(glfwGetWindowUserPointer(p_window));
    window->OnViewportResize(l_width, l_height);
}

void Window::WindowRefreshCallback(GLFWwindow* p_window)
{
    Window *window = static_cast<Window*>(glfwGetWindowUserPointer(p_window));
}
