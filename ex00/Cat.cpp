#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat defaut constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = ref.type;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
