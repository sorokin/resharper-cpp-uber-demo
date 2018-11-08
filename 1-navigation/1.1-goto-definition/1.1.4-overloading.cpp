#ifdef __RESHARPER__
#include <type_traits>

namespace
{

struct foo { void run(); };
struct bar { void run(); };
struct baz { void run(); };

template <typename T>
foo f(T, std::enable_if_t<std::is_unsigned_v<T>>* = nullptr);

template <typename T>
bar f(T, std::enable_if_t<std::is_signed_v<T>>* = nullptr);

baz f(int);

void g114()
{
    f(1u).run();
    f(1l).run();
    f(1).run();
}

}

#endif