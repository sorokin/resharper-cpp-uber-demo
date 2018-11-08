#ifdef __RESHARPER__
#include <utility>

struct no_ctor
{
    no_ctor() = delete;
};

int main()
{
    std::pair<int, no_ctor>();
    std::pair<int, no_ctor> p;
}

#endif