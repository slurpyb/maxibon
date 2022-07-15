#ifndef UPDATESYSTEM_HPP
#define UPDATESYSTEM_HPP

#include "System.hpp"
#include "Observer.hpp"

class SystemManager;
class UpdateSystem  :   public System, public Observer
{
    public:
        UpdateSystem(SystemManager* p_systemManager);
};

#endif // UPDATESYSTEM_HPP
