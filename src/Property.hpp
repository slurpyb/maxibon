#ifndef PROPERTY_HPP
#define PROPERTY_HPP

#include <string>
#include <vector>

// Properties: describing the characteristics of an object.

template<template<typename>... Mixins>
struct Property : public Mixins<Property>...
{

};

template<typename... Mixins>
class PhysicsProperty
{
    private:
    std::vector<Property<Mixins...>> data;
    public:
 // public operations
};

#endif // PROPERTY_HPP
