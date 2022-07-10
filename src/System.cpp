#include "System.hpp"
#include "SystemManager.hpp"

System::System(SystemManager* p_systemManager)  :   m_systemManager(p_systemManager)
{

};

System::~System()
{

};

SystemManager* System::GetSystemManager()
{
    return m_systemManager;
}
