#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		this->memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	for(int i = 0; i < 4; i++)
		this->memory[i] = ref.getMemory(i).clone();
}

MateriaSource::~MateriaSource(void)
{

}

const AMateria &MateriaSource::getMemory(int index) const
{
	const AMateria &ref = *this->memory[index];
	return (ref);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (this->memory[i])
		i++;
	this->memory[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria *to_clone = NULL;
	int	i = 0;
	while (this->memory[i])
	{
		to_clone = memory[i];
		i++;
	}
	return (to_clone->clone());
}
