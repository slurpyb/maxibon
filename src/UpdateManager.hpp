#ifndef UPDATEMANAGER_HPP
#define UPDATEMANAGER_HPP

#include <vector>
#include <functional>
#include <unordered_map>
#include <string>
#include <memory>


#include "Manager.hpp"

class Engine;
class UpdateManager :   public Manager, public Observer<UpdateManager>
{
    public:
        UpdateManager(Engine* p_engine);

        bool start();
        bool stop();


    private:
        bool initialize();
        bool destroy();

        template <typename T>
        void addBinding(const std::string& l_name, void(T::*l_func)(), T* l_instance)
        {
            m_bindings.emplace(l_name, std::bind(l_func, l_instance, std::placeholders::_1));
        };

        void addToQueue(const std::string& l_name)
        {
            m_updateQueue.push_back(m_bindings[l_name]);
        };

        std::vector<std::function<void()>> m_updateQueue;
        std::unordered_map<std::string, std::function<void()>> m_bindings;
};

#endif // UPDATEMANAGER_HPP
