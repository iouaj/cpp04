#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "animal";
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = ref.type;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "?" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	const std::string	&ref = this->type;
	return (ref);
}

void	Animal::operator=(const Animal &ref)
{
	this->type = ref.getType();
}
