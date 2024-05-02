#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "\033[1;32mAbstract Amateria created.\033[0m" << std::endl;
}

AMateria::AMateria(const std::string &type)
{
	std::cout << "\033[1;32mAbstract Amateria created.\033[0m" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &type)
{
	std::cout << "\033[1;32mAbstract Amateria created.\033[0m" << std::endl;
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
	std::cout << this->type << " use something on " << target.getName() << "." << std::endl;
}

void	AMateria::operator=(const AMateria &ref)
{
	this->type = ref.type;
}
