#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "\033[1;32mWrongAnimal default constructor called\033[0m" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	std::cout << "\033[1;32mWrongAnimal copy constructor called\033[0m" << std::endl;
	this->type = ref.getType();
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[1;31mWrongAnimal destructor called\033[0m" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	const std::string	&ref = this->type;
	return (ref);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong ?" << std::endl;
}

void	WrongAnimal::operator=(const WrongAnimal &ref)
{
	this->type = ref.getType();
}
