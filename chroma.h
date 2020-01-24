#include <string>
#include <memory>
#include <iostream>
#include <regex>

#include "src/utils.h"

namespace chroma
{
class RGB
{
public:
    int r()
    {
        return _r;
    }
    void r(int newR)
    {
        if (newR < 0)
        {
            _r = 0;
        }
        else if (newR > 255)
        {
            _r = 255;
        }
        else
        {
            _r = newR;
        }
    }
    int g()
    {
        return _g;
    }
    void g(int newG)
    {
        if (newG < 0)
        {
            _g = 0;
        }
        else if (newG > 255)
        {
            _g = 255;
        }
        else
        {
            _g = newG;
        }
    }
    int b()
    {
        return _b;
    }
    void b(int newB)
    {
        if (newB < 0)
        {
            _b = 0;
        }
        else if (newB > 255)
        {
            _b = 255;
        }
        else
        {
            _b = newB;
        }
    }

private:
    int _r = 0;
    int _g = 0;
    int _b = 0;
};
class RGBa : public RGB
{
public:
    float a()
    {
        return _a;
    }
    void a(float newA)
    {
        if (newA < 0.f)
        {
            _a = 0;
        }
        else if (newA > 1.f)
        {
            _a = 1;
        }
        else
        {
            _a = newA;
        }
    }

private:
    float _a = 1.f;
};
class Color
{
public:
    Color::Color(std::string inputColor)
    {
        _rgba = parse(inputColor);
    };
    RGB rgb()
    {
        return _rgba;
    }
    RGBa rgba()
    {
        return _rgba;
    }

private:
    RGBa parse(std::string inputColor)
    {
        RGBa color;
        // do something with the input
        return color;
    } 
    RGBa _rgba;
};
} // namespace chroma
