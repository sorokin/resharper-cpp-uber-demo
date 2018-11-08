#include <cmath>

struct point
{
    point()
        : x(0.f), y(0.f), z(0.f)
    {}

    point(float x, float y, float z)
        : x(x), y(y), z(z)
    {}

    float x;
    float y;
    float z;
};

point operator*(point a, float b)
{
    return point(a.x * b, a.y * b, a.z * b);
}

float norm(point p)
{
    return sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
}

point normalized(point p)
{
    return point(p.x / norm(p),
                 p.y / norm(p),
                 p.z / norm(p));
}
