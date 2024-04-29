#include "Character.hpp"

Character::Character(void)
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = "default";
}

Character::Character(std::string name)
{
	std::cout << "\033[1;32mCharacter default constructor called\033[0m" << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = name;
}

Character::Character(const Character &ref)
{
	std::cout << "\033[1;32mCharacter copy constructor called\033[0m" << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = ref.getInventory(i).clone();
	this->name = ref.getName();
}

Character::~Character(void)
{
	std::cout << "\033[1;31mCharacter destructor called\033[0m" << std::endl;
}

const AMateria &Character::getInventory(int index) const
{
	const AMateria &ref = *this->inventory[index];
	return (ref);
}

std::string	const &Character::getName(void) const
{
	std::string const &ref = this->name;
	return (ref);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;
	while (inventory[i])
		i++;
	this->inventory[i] = m;
}

void	Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}

void	Character::operator=(const Character &ref)
{
	for(int i = 0; i < 4; i++)
		this->inventory[i] = ref.getInventory(i).clone();
	this->name = ref.getName();
}
