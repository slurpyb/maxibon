#include "SystemManager.hpp"
#include "WindowSystem.hpp"
#include "RenderSystem.hpp"

SystemManager::SystemManager(Engine* p_engine):   m_engine(p_engine)
{
    m_systemsTuple = m_makeSystemsTuple();
}

SystemManager::~SystemManager()
{
    
}

bool SystemManager::start()
{
    // m_windowSystem->start();
    // m_windowSystem

    this->initialize();

    return true;
}

void SystemManager::onTick()
{
    // m_windowSystem->onTick();
    // for (auto& const sys : m_systems)
    // {
    //     sys->Update();
    // }
}

bool SystemManager::stop()
{
    return true;
}

std::tuple<GraphicsSystem*, PhysicsSystem*, InputSystem*, AudioSystem*> SystemManager::m_makeSystemsTuple()
{
    return std::make_tuple(m_p_graphicsSystem.get(), m_p_physicsSystem.get(), m_p_inputSystem.get(), m_p_audioSystem.get());
}


bool SystemManager::initialize()
{
    
    // m_windowSystem = static_cast<WindowSystem*>(m_systems[0].get());

    // Message m(1);
    // m.m_payloadString = "blah blah blah";
    // this->m_systems[0]->Notify(m);
    // m_windowSystem = GetSystem<WindowSystem>("window_system");
    return true;
}

bool SystemManager::destroy()
{
    return true;
}
