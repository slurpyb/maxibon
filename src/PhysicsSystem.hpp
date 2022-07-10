#ifndef PHYSICSSYSTEM_HPP
#define PHYSICSSYSTEM_HPP
#include "System.hpp"

class PhysicsSystem : public System
{
    public:
        PhysicsSystem(SystemManager* p_systemManager);
        
        void Update();
};

#endif // PHYSICSSYSTEM_HPP
