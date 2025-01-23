#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	this->_type = "cure";
}

Cure::Cure(Cure const &src)
{
	*this = src;
}

Cure::~Cure(void)
{
}

Cure &Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const &Cure::getType() const
{
	return (this->_type);
}

AMateria *Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}