#pragma once

struct base
{
    virtual void foo() = 0;
    virtual void bar() = 0;
    virtual void baz();
};

struct derived : base
{
    derived();

    void foo() override;
    void bar() override;

    // TODO: generate implementation here
};
