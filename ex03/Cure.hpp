#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &ref);
		~Cure(void);

		Cure	*clone() const;
		void	use(ICharacter &target);

		void	operator=(const Cure &ref);
};

#endif
