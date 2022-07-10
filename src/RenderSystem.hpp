#ifndef RENDERSYSTEM_HPP
#define RENDERSYSTEM_HPP

#include <iostream>

#include "System.hpp"
#include "Observer.hpp"

class RenderSystem  :   public System,  public Observer<RenderSystem>
{
    public:
        RenderSystem();
        ~RenderSystem();
        
        virtual void initialize() override;
        virtual void update() override;
        virtual void destroy() override;
};

#endif // RENDERSYSTEM_HPP
