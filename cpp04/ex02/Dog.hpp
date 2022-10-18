#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& d);

    ~Dog();

    Dog& operator=(const Dog& d);
    Animal& operator=(const Animal& f);

    Brain* getBrain() const;

    virtual void makeSound() const;

private:
    Brain* _brain;
};

#endif