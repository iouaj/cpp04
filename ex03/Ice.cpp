#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(const Ice &ref) : AMateria(ref)
{
	this->type = ref.getType();
}

Ice::~Ice(void)
{

}

Ice	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void	Ice::operator=(const Ice &ref)
{
	this->type = ref.type;
}
