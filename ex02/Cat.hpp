#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat &ref);
		~Cat(void);

		void	makeSound() const;
		const Brain &getBrain(void) const;

		void	operator=(const Cat &ref);
};

#endif
