#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &ref);
		~Ice(void);

		Ice		*clone(void) const;
		void	use(ICharacter &target);

		void	operator=(const Ice &ref);
};

#endif
