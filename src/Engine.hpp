#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <memory>

template <typename T> using Ptr = std::unique_ptr<T>;

class SystemManager;
class Application;
struct Window;
class UpdateManager;


class Engine
{
    public:
        Engine(Application* p_application);
        ~Engine();

        bool start();
        void tick();
        bool stop();


        static void glfwErrorCallback(int error, const char *description);
        static bool glewInitialized;

        SystemManager* GetSystemManager();

    private:
        friend class Application;
        bool initialize();
        bool destroy();
        Application* m_application;
        Ptr<Window> m_window = nullptr;
        Ptr<SystemManager> m_systemManager = nullptr;

        Ptr<UpdateManager> m_updateManager = nullptr;
        

        enum ErrorCode
        {
            GLFW_INIT_FAILURE, GLEW_INIT_FAILURE, CREATE_WINDOW_FAILURE, SUCCESS
        };
};

#endif // ENGINE_HPP
