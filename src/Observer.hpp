#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include "Message.hpp"

class Observer
{
    public:
        Observer();
        virtual ~Observer();
        virtual void Notify(const Message& l_message) = 0;
};

#endif // OBSERVER_HPP
