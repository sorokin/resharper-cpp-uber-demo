#ifdef __RESHARPER__
#include <cstdint>

struct a        { typedef int type; };
struct b : a    { typedef short type; };
struct c : a    {};
struct d : b, c { };

struct va              { typedef int type; };
struct vb : virtual va { typedef short type; };
struct vc : virtual va {};
struct vd : vb, vc     {};

void foo()
{
    d::type a;
    vd::type b;
}

#endif