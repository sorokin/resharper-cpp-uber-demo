#ifdef __RESHARPER__

#include <algorithm>
#include <vector>

void f52(std::vector<int> const& v)
{
    auto it = std::find_if(v.begin(), v.end(), [] (int a)
    {
        return a == 5;
    });
}

#endif
