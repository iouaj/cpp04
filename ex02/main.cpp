#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[1;96m====== Animal Test ======\033[0m" << std::endl;

	const Animal	*(array[10]);

	for (int i = 0; i < 5; i++)
		array[i] = new Dog();
	std::cout << std::endl;

	for (int i = 5; i < 10; i++)
		array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete array[i];

	// Animal animal = new Animal();

	// delete animal;
	return 0;
}
