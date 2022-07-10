#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include "Message.hpp"

template <typename Self>
class Observer
{
    public:
        ~Observer() 
        {
    
        }

	    void Notify(const Message& l_message)
        {
            static_cast<Self*>(this)->Notify();
        };

        const Self* self() const
        {
            return static_cast<const Self*>(this);
        }
};


#endif // OBSERVER_HPP
