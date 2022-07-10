#ifndef GRAPHICSSYSTEM_HPP
#define GRAPHICSSYSTEM_HPP

#include "System.hpp"

class GraphicsSystem : public System
{
    public:
        GraphicsSystem(SystemManager* p_systemManager);
        
        void Update();
};

#endif // GRAPHICSSYSTEM_HPP
