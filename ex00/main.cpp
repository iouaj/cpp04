#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[1;96m====== Animal Test ======\033[0m" << std::endl;

	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete	meta;
	delete	j;
	delete	i;

	std::cout << std::endl << "\033[1;96m====== Wrong Animal Test ======\033[0m" << std::endl;

	const WrongAnimal*	wrong = new WrongAnimal();
	const WrongAnimal*	cat = new WrongCat();
	const WrongAnimal*	copy = new WrongAnimal(*cat);

	std::cout << cat->getType() << " " << std::endl;
	std::cout << copy->getType() << " " << std::endl;
	cat->makeSound();
	copy->makeSound();
	wrong->makeSound();

	delete	wrong;
	delete	cat;
	delete	copy;

	return 0;
}
