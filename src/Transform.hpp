#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP

#include <vector>
#include <string>

template<template<typename>... Mixins>
class Point : public Mixins<Point>...
{
    public:
        double x, y;
        Point() : Mixins<Point>()..., x(0.0), y(0.0) { }
        Point(double x, double y) : Mixins<Point>()..., x(x), y(y) { }
};

template<typename T>
class Label
{
public:
    std::string label;
    Label() : label("") { }
};

template <typename X>
struct XAttr
{
    X x;
};


template <typename T>
class Color
{
    public:
        unsigned char red = 0, green = 0, blue = 0;
};

struct Transform    :   Point<Label, Color>
{
    Transform() :   Point() {};

};

void foo()
{
    Transform t;
}
    t.blue = 1;

#endif // TRANSFORM_HPP
