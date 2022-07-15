#include "SystemManager.hpp"
#include "UpdateSystem.hpp"

SystemManager::SystemManager(Engine* p_engine):   m_engine(p_engine)
{

}

SystemManager::~SystemManager()
{
    
}

bool SystemManager::start()
{
    m_p_updateSystem = std::make_unique<UpdateSystem>(this);
    return true;
}

void SystemManager::onTick()
{
    
}


bool SystemManager::stop()
{
    return true;
}

bool SystemManager::setupSystems()
{
    return true;
}

