#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &ref);
		~Dog(void);

		void	makeSound() const;

		void	operator=(const Dog &ref);
};

#endif
