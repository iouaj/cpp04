#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(const AMateria &ref);
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		std::string	const & getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		void	operator=(const AMateria &ref);
};

#endif
