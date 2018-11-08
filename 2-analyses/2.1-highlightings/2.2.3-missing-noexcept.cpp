#include <functional>

struct mystring
{
    mystring(mystring&& other)
        : data(other.data)
        , size(other.size)
        , capacity(other.capacity)
    {
        other.data = nullptr;
        other.size = 0;
        other.capacity = 0;
    }

private:
    char* data;
    size_t size;
    size_t capacity;
};

template <>
struct std::hash<mystring>
{
    size_t operator()(mystring const& val) const // TODO: suggest noexcept in std::hash<>
    {
        return 42;
    }
};
