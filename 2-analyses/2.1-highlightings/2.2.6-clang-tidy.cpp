#include <functional>
#include <vector>
#include <iostream>

// Modernize: lambda instead of bind
int add(int x, int y) { return x + y; }

void bind_to_lambda(int num)
{
    int x = 2;
    auto clj = std::bind(add, x, num);
}

//Modernize: use std::move
class my_class
{
public:
    my_class(const std::string& copied,
             const std::string& read_only)
        : copied(copied)
        , read_only(read_only)
    {
    }

private:
    std::string copied;
    const std::string& read_only;
};
