#include "UpdateManager.hpp"
#include "Engine.hpp"
#include "SystemManager.hpp"

UpdateManager::UpdateManager(Engine* p_engine)  :   Manager(p_engine)
{

};

bool UpdateManager::start()
{
    if (!initialize())
    {
        return false;
    }
    return true;
}

bool UpdateManager::stop()
{
    return true;
}

bool UpdateManager::initialize()
{
    SystemManager* systemManager = m_engine->GetSystemManager();
    PhysicsSystem* physicsSystem = systemManager->GetSystem<PhysicsSystem>("physics_system");
    
    return true;
}

bool UpdateManager::destroy()
{
    return true;
}

