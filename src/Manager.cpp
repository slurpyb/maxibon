#include "Manager.hpp"
#include "Engine.hpp"

Manager::Manager(Engine* p_engine)  :   m_engine(p_engine)
{

};

Manager::~Manager()
{

};

Engine* Manager::GetEngine()
{
    return m_engine;
};