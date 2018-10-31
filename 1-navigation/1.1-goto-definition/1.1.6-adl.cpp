#include <iostream>
#include <iomanip>
#include <vector>

namespace lib
{
    struct S
    {
        int value;
    };

    void print(std::ostream& out, std::vector<S> const & vec);
}

namespace app
{
    template<class T>
    void print(std::ostream& out, std::vector<T> const & vec);

    void run()
    {
        std::vector<lib::S> v = {
            { 1 }, { 2 }, { 3 }
        };
        print(std::cout, v);
        (print)(std::cout, v);
    }
}
