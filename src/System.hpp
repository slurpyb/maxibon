#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <iostream>
#include <string>
#include <type_traits>
#include <memory>

class SystemManager;
class System
{
    public:
        System(SystemManager* p_systemManager);
        virtual ~System() {};

        SystemManager* GetSystemManager();

    protected:
        SystemManager* m_systemManager;
};


#endif // SYSTEM_HPP
