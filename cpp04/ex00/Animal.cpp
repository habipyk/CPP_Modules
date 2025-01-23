#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &oth)
{
	*this = oth;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}

Animal &Animal::operator=(const Animal &oth)
{
	type = oth.type;
	std::cout << "Animal copy assigment operator called." << std::endl;

	return *this;
}

void Animal::makeSound() const
{
	std::cout << "The Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
