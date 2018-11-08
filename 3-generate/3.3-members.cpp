#include <string>
#include <ostream>
#include <boost/functional/hash.hpp>

struct person
{
    person(std::string name, std::string surname, uint32_t const age)
        : name(std::move(name))
        , surname(std::move(surname))
        , age(age)
    {
    }

    person(person const& other)
        : name(other.name)
        , surname(other.surname)
        , age(other.age)
    {
    }

    person(person&& other) noexcept
        : name(std::move(other.name))
        , surname(std::move(other.surname))
        , age(other.age)
    {
    }

    person& operator=(person const& other)
    {
        if (this == &other)
            return *this;
        name = other.name;
        surname = other.surname;
        age = other.age;
        return *this;
    }

    person& operator=(person&& other) noexcept
    {
        if (this == &other)
            return *this;
        name = std::move(other.name);
        surname = std::move(other.surname);
        age = other.age;
        return *this;
    }

    std::string name;
    std::string surname;
    uint32_t age;
};
