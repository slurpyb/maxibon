#ifndef TYPES_HPP
#define TYPES_HPP

template <template <typename>... Mixins>
class Vector2 : public Mixins<Vector2>...
{
public:
    double x, y;
    Vector2()
        : Mixins<Vector2>()...,
          x(0.0),
          y(0.0)
    {
    }

    Vector2(double x, double y)
        : Mixins<Vector2>()...,
          x(x),
          y(y)
    {
    }
};

template <template <typename>... Mixins>
class Vector3 : public Mixins<Vector3>...
{
public:
    double x, y, z;
    Vector3()
        : Mixins<Vector3>()...,
          x(0.0),
          y(0.0),
          z(0.0)
    {
    }

    Vector3(double x, double y, double z)
        : Mixins<Vector3>()...,
          x(x),
          y(y),
          z(z)
    {
    }
};


#endif // TYPES_HPP
