#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "\033[1;32mAnimal default constructor called\033[0m" << std::endl;
	this->type = "animal";
}

Animal::Animal(const Animal &ref)
{
	std::cout << "\033[1;32mAnimal copy constructor called\033[0m" << std::endl;
	this->type = ref.type;
}

Animal::~Animal(void)
{
	std::cout << "\033[1;31mAnimal destructor called\033[0m" << std::endl;
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
