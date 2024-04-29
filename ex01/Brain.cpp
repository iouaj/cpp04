#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\033[1;32mBrain defaut constructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain &ref)
{
	std::cout << "\033[1;32mBrain copy constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "\033[1;31mBrain destructor called\033[0m" << std::endl;
}

void	Brain::operator=(const Brain &ref)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
}
