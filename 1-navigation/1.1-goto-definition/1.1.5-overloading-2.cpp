#include <string>
#include <variant>

using namespace std::literals;

namespace
{

struct foo { void run(); };
struct bar { void run(); };
struct baz { void run(); };

template <class... Ts> struct overload : Ts... { using Ts::operator()...; };
template <class... Ts> overload(Ts...)->overload<Ts...>;

void g115()
{
    std::variant<foo, bar, baz> v;
    std::get<0>(v).run();
    visit(overload
    {
        [](foo const&) { return "foo"s; },
        [](bar const&) { return "bar"s; },
        [](baz const&) { return "baz"s; }
    }, v).append("hello");
}

}