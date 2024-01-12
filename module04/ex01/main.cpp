#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* Animals[10];

	for (int i = 0; i < 5; i++)
		Animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		Animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		Animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
	{
		delete Animals[i];
	}
}
