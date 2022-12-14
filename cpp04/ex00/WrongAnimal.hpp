#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& w);

    virtual ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& w);

    std::string getType() const;

	void    makeSound() const;

protected:
    std::string _type;
};

#endif