#include "UpdateSystem.hpp"
#include "SystemManager.hpp"
#include "Types.h"

UpdateSystem::UpdateSystem(SystemManager* p_systemManager)
    : System(p_systemManager, SystemType::Update)
{
    
}

UpdateSystem::~UpdateSystem()
{
    
}

