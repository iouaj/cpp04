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

	int	i = 0;
	while (i < 4)
	{
		delete this->inventory[i];
		i++;
	}

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
	while (i < 4 && inventory[i])
		i++;
	if (i < 4)
		this->inventory[i] = m;
	else
		std::cout << "Inventory full." << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 4)
		this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Invalid materia." << std::endl;
}

void	Character::operator=(const Character &ref)
{
	for(int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = ref.getInventory(i).clone();
	this->name = ref.getName();
}
