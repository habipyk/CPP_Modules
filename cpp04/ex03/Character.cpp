#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)
{
	this->_name = "stranger";
	initInventory(this->_inventory);
}

Character::Character(const std::string name)
{
	this->_name = name;
	initInventory(this->_inventory);
}

Character::Character(Character const &src)
{
	initInventory(this->_inventory);
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (src._inventory[i])
			this->_inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Couldn't equip " << this->_name << ". Inventory is full" << std::endl;
	delete (m);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

void Character::initInventory(AMateria **inventory)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

AMateria *Character::getInventory(unsigned int index) const
{
	if (index >= 0 && index < 4)
		return (this->_inventory[index]);
	return (NULL);
}