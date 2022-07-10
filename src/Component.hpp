#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>
#include <functional>
#include <memory>
#include <vector>

enum class AttributeType    :   char
{
    None = 0, Physics = 1
};

struct Attribute 
{

};

template <typename SystemType, typename ComponentType> struct Data
{
    std::vector<
}

template <typename... T> struct Property :  T... {};

template <typename X> struct XAttribute : Attribute
{
    X x;
};

using Position = Property<Physics, XAttribute, YAttribute, ZAttribute>;

struct Transform
{
    Position position;
    Scale scale;
    Rotation rotation;
};

using TransformComponent = PhysicsComponent<Data<Physics, Transform>, Controller<Physics, Transform>>;

#endif // COMPONENT_HPP
