#ifdef __RESHARPER__
#include <memory>

struct t152
{
    t152();
    t152(int);
    t152(int, int, int);
};

void g(t152 const&);

void f152()
{
    t152 a;
    t152 b(5, 6, 7);

    g(8);
    g(t152());

    auto p = std::make_unique<t152>(7, 8, 9);
}

#endif