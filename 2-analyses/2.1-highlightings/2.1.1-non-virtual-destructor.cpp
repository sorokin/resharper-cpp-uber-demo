#ifdef __RESHARPER__
#include <memory>
#include <string>

struct base
{
protected:
    ~base() = default;
public:
    virtual void hello();
};

struct derived : base
{
    derived(std::string);
    void hello() override;

private:
    std::string text;
};

void f211()
{
    std::unique_ptr<base> p = std::make_unique<derived>("foobar");
    p->hello();
}

#endif
