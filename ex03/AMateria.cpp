#include "AMateria.hpp"

AMateria::AMateria(const AMateria &type)
{
	this->type = type.getType();
}

AMateria::~AMateria(void)
{

}

std::string	const &AMateria::getType(void) const
{
	std::string const &ref = this->type;
	return (ref);
}

void	AMateria::use(ICharacter& target)
{

}
