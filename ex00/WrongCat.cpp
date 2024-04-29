#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "\033[1;32mWrongCat defaut constructor called\033[0m" << std::endl;
	this->type = "cat";
}

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << "\033[1;32mWrongCat copy constructor called\033[0m" << std::endl;
	this->type = ref.getType();
}

WrongCat::~WrongCat(void)
{
	std::cout << "\033[1;31mWrongCat destructor called\033[0m" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong miaou" << std::endl;
}

void	WrongCat::operator=(const WrongCat &ref)
{
	this->type = ref.getType();
}
