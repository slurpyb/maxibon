#ifndef INPUTSYSTEM_HPP
#define INPUTSYSTEM_HPP

#include "System.hpp"

class InputSystem : public System
{
    public:
        InputSystem(SystemManager* p_systemManager);
        
        void Update();
};

#endif // INPUTSYSTEM_HPP
