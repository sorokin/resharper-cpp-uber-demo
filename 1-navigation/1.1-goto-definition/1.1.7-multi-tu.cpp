#ifdef __RESHARPER__

void f(int);
void f(unsigned);

void g()
{
    f(5);
    f(5u);
    f(1LL);
}

// TODO: peek definition

#endif