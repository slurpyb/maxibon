#include "Application.hpp"
#include "Engine.hpp"
#include "../include/GLFW/glfw3.h"

Application::Application()
:   m_engine(std::make_unique<Engine>(this)),
    m_window(nullptr)
{
    
}

Application::~Application()
{
    
}

bool Application::start()
{
    m_engine->start();
    m_window = m_engine->m_window.get();
    return true;
}

void Application::run()
{
    m_engine->tick();
}

bool Application::stop()
{
    m_engine->stop();
    return true;
}
