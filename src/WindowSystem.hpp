#ifndef WINDOWSYSTEM_HPP
#define WINDOWSYSTEM_HPP

#include <string>
#include <iostream>

#include "System.hpp"

class Engine;
class GLFWwindow;
class Application;

class WindowSystem : public System<WindowSystem>
{
    public:
        WindowSystem(SystemManager* p_systemManager);
        ~WindowSystem();
        
        bool start();
        void onTick();
        bool stop();

        // virtual void Notify(const Message& l_message) override;
        virtual void Update() override {};
        

    private:
        friend class SystemManager;
        friend class Application;
        GLFWwindow* m_glfwWindow = nullptr;
        Application* m_application = nullptr;
        int m_height;
        int m_width;
        std::string m_title;
        void OnViewportResize(const int& l_width, const int& l_height);
        static void WindowResizeCallback(GLFWwindow* p_window, int l_width, int l_height);
        static void WindowRefreshCallback(GLFWwindow* p_window);
        Engine* m_engine;  
};




#endif // WINDOWSYSTEM_HPP
