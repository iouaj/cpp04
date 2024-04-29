#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &ref);
		virtual	~WrongAnimal(void);

		const std::string	&getType(void) const;
		void	makeSound() const;

		void	operator=(const WrongAnimal &ref);
};

#endif
