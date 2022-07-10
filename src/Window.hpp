#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>

class GLFWwindow;


struct Window
{
    Window() = default;
    ~Window() {};
    int m_height = 480;
    int m_width = 640;
    std::string m_title = "untitled";
    GLFWwindow* m_glfwWindow = createWindow();

    GLFWwindow* createWindow();

    void OnViewportResize(const int& l_width, const int& l_height);
    static void WindowResizeCallback(GLFWwindow* p_window, int l_width, int l_height);
    static void WindowRefreshCallback(GLFWwindow* p_window);
};

#endif // WINDOW_HPP
