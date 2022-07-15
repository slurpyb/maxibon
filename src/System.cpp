#include "System.hpp"
#include "SystemManager.hpp"

System::System(SystemManager* p_systemManager, const SystemType& l_systemType)  :   m_systemManager(p_systemManager)
{

};

System::~System() {};

SystemManager* System::GetSystemManager()
{
    return m_systemManager;
}

const SystemType& System::getSystemType()
{
    return m_systemType;
}
