#ifndef AUDIOSYSTEM_HPP
#define AUDIOSYSTEM_HPP

#include "System.hpp"

class AudioSystem : public System
{
    public:
        AudioSystem(SystemManager* p_systemManager);
        
        void Update();
};
#endif // AUDIOSYSTEM_HPP
