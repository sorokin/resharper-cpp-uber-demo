#include <vector>
#include <ostream>
#include <iostream>
#include <gtest/gtest.h>

struct person
{
    person(std::string name, std::string surname)
        : name(std::move(name))
        , surname(std::move(surname))
    {}


    std::string const& get_name() const { return name; }
    void set_name(std::string name) { this->name = std::move(name); }

    std::string const& get_surname() const { return surname; }
    void set_surname(std::string surname) { this->surname = std::move(surname); }


    friend std::ostream& operator<<(std::ostream& os, person const& obj)
    {
        return os << obj.name << ' ' <<obj.surname;
    }

    std::string name;
    std::string surname;
    uint32_t age = 58;
};

TEST(debugger_demo, step_filters)
{
    person p("Eric", "Adams");

    std::cout << p.get_name() << ' ' << p.get_surname() << std::endl;

    p.set_name("Joey");
    p.set_surname("DiMaio");

    std::cout << p.get_name() << ' ' << p.get_surname() << std::endl;
}
