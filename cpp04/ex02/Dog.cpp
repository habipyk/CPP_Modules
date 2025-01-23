#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &oth)
{
	*this = oth;
	std::cout << "Dog copy constuctor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed." << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &oth)
{
	type = oth.type;
	*this->brain = *oth.brain;
	std::cout << "Dog copy assigment operator called." << std::endl;

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (brain);
}
