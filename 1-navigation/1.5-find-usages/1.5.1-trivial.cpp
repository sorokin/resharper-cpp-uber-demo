#include <vector>

void foo1(unsigned&);
void foo2(unsigned const&);

unsigned gcd(unsigned a, unsigned b)
{
    while (b != 0)
    {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

void bar()
{
    std::vector<int> vec;
    vec.push_back(5);
    vec.empty();
}

std::vector<int> foo();
void bar(std::vector<bool> const&);

template <typename T>
void baz(std::vector<T> const&);