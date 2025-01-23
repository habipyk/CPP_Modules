#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &oth)
{
	*this = oth;
	std::cout << "Dog copy constuctor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &oth)
{
	type = oth.type;
	std::cout << "Dog copy assigment operator called." << std::endl;

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}
