#pragma once

#include <vector>

struct foo
{
    struct bar
    {
        using mytype = std::vector<int>;

        mytype baz(mytype const&);
    };
};

template <typename X>
struct qux
{
    template <typename Y>
    struct alpha
    {
        using mytype = std::pair<X, Y>;

        template <typename Z>
        mytype bravo(mytype const&);
    };
};
