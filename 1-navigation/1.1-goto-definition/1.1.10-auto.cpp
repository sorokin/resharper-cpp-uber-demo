#include <vector>
#include <memory>

void f1110()
{
    auto p = std::make_unique<std::vector<int>>();
    auto q = &p;
}
