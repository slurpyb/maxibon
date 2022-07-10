#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <memory>

class Engine;
class Window;
class Application
{
    public:
        Application();
        ~Application();

        bool start();
        void run();
        bool stop();

    private:
        std::unique_ptr<Engine> m_engine;
        Window* m_window;
};

#endif // APPLICATION_HPP
