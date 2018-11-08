namespace n
{
    struct foo
    {};

    void swap(foo&, foo&);
}

void swap(int&, int&);
void swap(long&, long&);

template <typename T>
void f119()
{
    T a, b;
    swap(a, b);
}
