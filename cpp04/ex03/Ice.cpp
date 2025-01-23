#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	this->_type = "ice";
}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice::~Ice(void)
{
}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

AMateria *Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}