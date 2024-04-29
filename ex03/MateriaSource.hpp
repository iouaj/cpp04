#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*(memory[4]);
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &ref);
		~MateriaSource(void);

		const AMateria	&getMemory(int index) const;

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

		void	operator=(const MateriaSource &ref);
};

#endif
