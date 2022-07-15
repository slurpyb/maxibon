#ifndef MANAGER_HPP
#define MANAGER_HPP

class Engine;
class Manager
{
    public:
        Manager(Engine* p_engine);
        virtual ~Manager();


        Engine* GetEngine();
        
    protected:
        Engine* m_engine;
};

#endif // MANAGER_HPP
