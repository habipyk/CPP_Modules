#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &oth);
	virtual ~Animal();

	Animal &operator=(const Animal &oth);

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
