#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &oth)
{
	*this = oth;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &oth)
{
	type = oth.type;
	std::cout << "WrongCat copy assigment operator called." << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow!" << std::endl;
}
