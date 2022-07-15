#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include <iostream>
#include <string>
#include <type_traits>
#include <memory>

#include "Types.h"

class SystemManager;
class System
{
    public:
        System(SystemManager* p_systemManagerm, const SystemType& l_systemType);
        virtual ~System();

        SystemManager* GetSystemManager();
        
        const SystemType& getSystemType();


    protected:
        SystemManager* m_systemManager;
        SystemType m_systemType;
};


#endif // SYSTEM_HPP
