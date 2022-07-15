#ifndef SYSTEMMANAGER_HPP
#define SYSTEMMANAGER_HPP

#include <vector>
#include <memory>
#include <string>
#include <algorithm>
#include <tuple>

// class WindowSystem;
class SystemBase;
class Engine;

class PhysicsSystem;
class GraphicsSystem;
class AudioSystem;
class InputSystem;

class UpdateSystem;
class EventSystem;
class StateSystem;
// class GLFWwindow;

class SystemManager
{
    public:
        SystemManager(Engine* p_engine);
        ~SystemManager();

        bool start();
        void onTick();
        bool stop();



    private:
        bool setupSystems();

        Engine* m_engine;

        std::unique_ptr<UpdateSystem> m_p_updateSystem;
};



#endif // SYSTEMMANAGER_HPP
