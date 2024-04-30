#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(const Cure &ref) : AMateria(ref)
{
	this->type = ref.getType();
}

Cure::~Cure(void)
{

}

Cure	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
