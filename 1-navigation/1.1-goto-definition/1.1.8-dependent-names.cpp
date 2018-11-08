#include <vector>

template <typename T>
void foo()
{
    typename T::value_type a;
    typename std::vector<T>::value_type b;
}
