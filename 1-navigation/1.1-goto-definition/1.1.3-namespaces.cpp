#include <iostream>

namespace b
{
    constexpr auto value1 = "b::value1";
}

namespace c
{
    constexpr auto value2 = "c::value2";
}

namespace x
{
    constexpr auto value1 = "x::value1";
    constexpr auto value2 = "x::value2";

    namespace y
    {
        using b::value1;
        using namespace c;

        void run()
        {
            std::cout << "value1: " << value1 << "\n"
                      << "value2: " << value2 << "\n";
        }
    }
}
