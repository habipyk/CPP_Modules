#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &oth)
{
	*this = oth;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oth)
{
	type = oth.type;
	std::cout << "WrongAnimal copy assigment operator called." << std::endl;

	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
