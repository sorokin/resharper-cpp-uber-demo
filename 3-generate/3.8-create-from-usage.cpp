#include <vector>

struct mytype
{
    mytype(std::vector<int> items)
        : items(std::move(items))
    {}

    int foobar;
    std::vector<int> items;
};