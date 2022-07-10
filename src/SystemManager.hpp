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

class EventSystem;
class StateSystem;
// class GLFWwindow;

        enum class SystemType   :   int
        {
            Graphics = 0, Physics = 1, Input = 2, Audio = 3
        };

class SystemManager
{
    public:
        SystemManager(Engine* p_engine);
        ~SystemManager();

        bool start();
        void onTick();
        bool stop();

        template <typename T>
        T* GetSystem(const SystemType& l_systemType)
        {
            const int& tmp = (int)l_systemType;
            return std::get<tmp>(m_systemsTuple);
        };



    private:
        bool initialize();
        bool destroy();

        Engine* m_engine;
        // std::unique_ptr<RenderSystem>   m_p_renderSystem;
        // std::unique_ptr<WindowSystem>   m_p_windowSystem;
        std::unique_ptr<GraphicsSystem> m_p_graphicsSystem = nullptr;
        std::unique_ptr<PhysicsSystem>  m_p_physicsSystem = nullptr;
        std::unique_ptr<InputSystem>    m_p_inputSystem = nullptr;
        std::unique_ptr<AudioSystem>    m_p_audioSystem = nullptr;

        
        // std::tuple<GraphicsSystem*, PhysicsSystem*, InputSystem*, AudioSystem*> m_systemsTuple;
        // std::tuple<GraphicsSystem*, PhysicsSystem*, InputSystem*, AudioSystem*> m_makeSystemsTuple();

        // std::vector<std::unique_ptr<System>> m_systems;
        std::vector<SystemBase> m_systems;
};



#endif // SYSTEMMANAGER_HPP
