#include <iostream>
#include <cmath>
#include <string>

enum class PointType
{
    cartesian,
    polar
};

struct Point
{
    Point(const float x, const float y, PointType type = PointType::cartesian) : x(x), y(y) {}
    float x, y;
};

struct PointFactory
{
    static Point NewCartesian(float x, float y)
    {
        return {x, y};
    }

    static Point NewPolar(float r, float theta)
    {
        return {r * cos(theta), r * sin(theta)};
    }
};

int main()
{
    auto p = PointFactory::NewPolar(5, M_PI_4);
    std::cout << "Point = " << p.x << ", " << p.y << std::endl;
    return 0;
}
