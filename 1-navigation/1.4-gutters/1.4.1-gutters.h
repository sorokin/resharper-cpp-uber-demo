#pragma once

struct base
{
    static void foo();
    virtual void bar() = 0;
    void baz();
};

struct derived1 : base
{
    void bar() override;
    void baz();
};

struct derived2 : base
{
    void bar() override;
};

template <typename T>
struct eps;

template <>
struct eps<float>
{
    static constexpr float value = 1e-6f;
};

template <>
struct eps<double>
{
    static constexpr double value = 1e-12;
};

inline void f141()
{
    int a = 5;
    {
        int a = 6;
    }
}
