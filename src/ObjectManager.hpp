#ifndef OBJECTMANAGER_HPP
#define OBJECTMANAGER_HPP

#include <memory>
#include <vector>
#include <string>
#include <unordered_map>
#include <tuple>

#include "../include/UUIDv4/uuid_v4.h"

template <typename... T>
using tuple_property = std::tuple<T...>;

template <typename T>
using Ptr = std::unique_ptr<T>;

using TupleData = unsigned int; // TODO: make this into tuple attribute mixin type

using ObjectID = UUIDv4::UUID;

using Scene = unsigned int;
using Entity = unsigned int;
using Component = std::tuple<Ptr<PhysicsComponent>, Ptr<GraphicsComponent>, Ptr<InputComponent>, Ptr<AudioComponent>>;

using PhysicsComponent = std::pair<ObjectID, ComponentData>;
using GraphicsComponent = std::pair<ObjectID, ComponentData>;
using InputComponent = std::pair<ObjectID, ComponentData>;
using AudioComponent = std::pair<ObjectID, ComponentData>;

using ComponentDataType = unsigned int;

template <typename T> using ComponentData = tuple_property<T>;

using ComponentAttribute = unsigned int;
using AttributeData = std::pair<PropertyLabel, PropertyData>;
using ComponentAttributeData = std::vector<TupleData>;

using ComponentContainer = std::pair<ComponentID, std::vector<ComponentData>>;

class ObjectManager
{
    public:
        ObjectManager();
        ~ObjectManager();

        bool start();
        void update();
        bool stop();


};

#endif // OBJECTMANAGER_HPP
