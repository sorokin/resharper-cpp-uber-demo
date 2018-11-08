#include <tuple>
#include <vector>

void f35()
{
    auto t1 = std::make_tuple(5, std::vector<int>{1, 2, 3}, nullptr);

    std::tuple t2(5, std::vector<int>{1, 2, 3}, nullptr);
}

template<class T, class U>
auto add(T t, U u) { return t + u; }

void f35a()
{
    // specify type explicitly
    auto x = add(1, 2);
    auto y = add(1, 2L);
    auto z = add(1, 2.0);
}
