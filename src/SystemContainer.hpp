#ifndef SYSTEMCONTAINER_HPP
#define SYSTEMCONTAINER_HPP

#include <memory>
#include <vector>

class ISystemContainer
{
    public:
        virtual ~ISystemContainer() = 0;
};

template <class T>
class SystemContainer   :   public ISystemContainer
{
    public:
        virtual SystemContainer();

        template<typename... Ts>
        void addSystem(Ts...)
        {

        };

        template<typename U>
        U* getSystem()
        {

        };

    private:
        std::vector<std::unique_ptr<T>>
};

#endif // SYSTEMCONTAINER_HPP
