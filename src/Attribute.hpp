#ifndef ATTRIBUTE_HPP
#define ATTRIBUTE_HPP

#include <string>

#include "Property.hpp"

// Attributes: additional information about an object.

// template <typename... T>
// using Attribute = Property<T...>;

template <typename... T>
struct Attribute : T... {};


template <typename  XDataType>
struct XAttr
{
    Property<XDataType> x;
};

template <typename  YDataType>
struct YAttr
{
    Property<YDataType> y;
};

template <typename  ZDataType>
struct ZAttr
{
   Property<ZDataType> z;
};


template <typename VectorDataType>
struct Vector3  :   Attribute<XAttr<VectorDataType>, YAttr<VectorDataType>, ZAttr<VectorDataType>>
{

};

template <typename DataType> struct PositionAttribute  :   Property<Vector3<float>>
{};

void foo()
{
    PositionAttribute<float> f;

    f.x = 1.0f;
}


#endif // ATTRIBUTE_HPP
