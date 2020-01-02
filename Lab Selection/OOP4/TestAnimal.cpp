// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 

#include <iostream>
#include <string>
#include "Animal.h"
#include "Bird.h"
#include "Fish.h"
#include "Salmon.h"
using namespace std;

int main()
{
	// create one object from each constructor - write code of one object together in one place - print a blank line before printing the next object
	Animal animal;
	cout << "The weight of the animal: " << animal.getWeight() << endl;
	animal.setWeight(10);
	animal.display();
	cout << endl;

	Bird bird;
	cout << "The feather color of the bird: " << bird.getFeatherColor() << endl;
	bird.setFeatherColor("purple");
	bird.display();
	bird.fly();
	cout << endl;

	Fish fish;
	cout << "The scale shape of the fish: " << fish.getScaleShape() << endl;
	fish.setScaleShape("pentagon");
	fish.display();
	fish.swim();
	cout << endl;

	Salmon salmon;
	cout << "The number of eggs of the salmon: " << salmon.getEggNum() << endl;
	salmon.setEggNum(30);
	salmon.display();
	salmon.backStream();
	salmon.swim();
	cout << endl;

	return 0;

	// for each constructor, call as many methods as possible, including methods inherited from any ancestor
	// call all get() methods, place get inside cout statement

	// call all set() methods

	// call display()

	// call all other regular methods
}