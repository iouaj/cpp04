#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal &ref);
		~Animal(void);

		const std::string	&getType() const;
		virtual void				makeSound() const;

		void	operator=(const Animal &ref);
};

#endif
