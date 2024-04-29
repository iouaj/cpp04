#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "\033[1;32mCat defaut constructor called\033[0m" << std::endl;
	this->type = "cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &ref)
{
	std::cout << "\033[1;32mCat copy constructor called\033[0m" << std::endl;
	this->type = ref.getType();
	this->brain = new Brain (ref.getBrain());
}

Cat::~Cat(void)
{
	std::cout << "\033[1;31mCat destructor called\033[0m" << std::endl;
	delete	brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

void	Cat::operator=(const Cat &ref)
{
	this->type = ref.getType();
	delete	brain;
	this->brain = new Brain(ref.getBrain());
}

const Brain &Cat::getBrain(void) const
{
	const Brain &ref = *this->brain;
	return (ref);
}
