#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &oth)
{
	*this = oth;
	std::cout << "Cat copy constuctor called." << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &oth)
{
	type = oth.type;
	this->brain = new Brain(*oth.brain);
	std::cout << "Cat copy assigment operator called." << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (brain);
}
