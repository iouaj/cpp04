#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "\033[1;32mDog default constructor called\033[0m" << std::endl;
	this->type = "dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &ref)
{
	std::cout << "\033[1;32mDog copy constructor called\033[0m" << std::endl;
	this->type = ref.type;
	this->brain = new Brain(ref.getBrain());
}

Dog::~Dog(void)
{
	std::cout << "\033[1;31mDog destructor called\033[0m" << std::endl;
	delete	brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf" << std::endl;
}

void	Dog::operator=(const Dog &ref)
{
	this->type = ref.getType();
	delete	brain;
	this->brain = new Brain(ref.getBrain());
}

const Brain &Dog::getBrain(void) const
{
	const Brain &ref = *this->brain;
	return (ref);
}
