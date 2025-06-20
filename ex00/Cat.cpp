#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "\033[1;32mCat defaut constructor called\033[0m" << std::endl;
	this->type = "cat";
}

Cat::Cat(const Cat &ref)
{
	std::cout << "\033[1;32mCat copy constructor called\033[0m" << std::endl;
	this->type = ref.getType();
}

Cat::~Cat(void)
{
	std::cout << "\033[1;31mCat destructor called\033[0m" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

void	Cat::operator=(const Cat &ref)
{
	this->type = ref.getType();
}
