#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		this->memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	int i = 0;
	while (i < 4 && this->memory[i])
	{
		this->memory[i] = ref.getMemory(i).clone();
		i++;
	}
	while (i < 4)
	{
		this->memory[i] = NULL;
		i++;
	}
}

MateriaSource::~MateriaSource(void)
{
	int	i = 0;
	while (i < 4)
	{
		delete this->memory[i];
		i++;
	}
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
	if (i < 4)
		this->memory[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = 0;
	while (i < 4 && this->memory[i] && this->memory[i]->getType() != type)
		i++;
	if (i == 4 || !this->memory[i])
	{
		std::cout << type << " materia does not exist" << std::endl;
		return 0;
	}
	std::cout << type << " materia created." << std::endl;
	return this->memory[i]->clone();
}

void	MateriaSource::operator=(const MateriaSource &ref)
{
	int i = 0;

	while (i < 4)
	{
		delete this->memory[i];
		i++;
	}

	i = 0;
	while (i < 4 && this->memory[i])
	{
		this->memory[i] = ref.getMemory(i).clone();
		i++;
	}
	while (i < 4)
	{
		this->memory[i] = NULL;
		i++;
	}
}
