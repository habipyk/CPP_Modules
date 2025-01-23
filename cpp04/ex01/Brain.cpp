#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &oth)
{
	*this = oth;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed." << std::endl;
}

Brain &Brain::operator=(const Brain &oth)
{

	for (int i = 0; i < 100; i++)
	{
		ideas[i] = oth.ideas[i];
	}

	std::cout << "Brain copy assigment operator called." << std::endl;

	return (*this);
}

const std::string &Brain::getIdea(int idx) const
{
	return ideas[idx];
}