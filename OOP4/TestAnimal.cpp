// Jeff Hyle
// COP2272C-02 Computer Programming I
// OOP4
// Time of last successful debugging: 12/3/2019

#include <iostream>
#include <string>
#include "Animal.h"
#include "Bird.h"
#include "Fish.h"
#include "Salmon.h"

int main()
{
	Animal animal;
	std::cout << "Animal|No-argument constructor weight: " << animal.getWeight() << std::endl;
	Animal animals(0);
	animals.setWeight(2);
	std::cout << "Animal-Standard constuctor weight: " << animals.getWeight() << std::endl;
	animal.display();
	std::cout << std::endl;

	Bird bird;
	std::cout << "Bird|No-argument constructor feather color: " << bird.getFeatherColor() << std::endl;
	std::cout << "Bird|No-argument constructor weight: " << bird.getWeight() << std::endl;
	Bird birds("default");
	birds.setFeatherColor("standard");
	std::cout << "Bird-Standard constuctor feather color :" << birds.getFeatherColor() << std::endl;
	Bird birdc("default", 0);
	birdc.setFeatherColor("comprehensive");
	birdc.setWeight(3);
	std::cout << "Bird-Comprehensive constuctor feather color: " << birdc.getFeatherColor() << std::endl;
	std::cout << "Bird-Comprehensive constuctor weight: " << birdc.getWeight() << std::endl;
	bird.display();
	bird.fly();
	std::cout << std::endl;

	Fish fish;
	std::cout << "Fish|No-argument constructor scale shape: " << fish.getScaleShape() << std::endl;
	std::cout << "Fish|No-argument constructor weight: " << fish.getWeight() << std::endl;
	Fish fishs("default");
	fishs.setScaleShape("standard");
	std::cout << "Fish-Standard constructor scale shape: " << fishs.getScaleShape() << std::endl;
	Fish fishc("default", 0);
	fishc.setScaleShape("comprehensive");
	fishc.setWeight(3);
	std::cout << "Fish-Comprehensive constuctor scale shape: " << fishc.getScaleShape() << std::endl;
	std::cout << "Fish-Comprehensive constuctor weight: " << fishc.getWeight() << std::endl;
	fish.display();
	fish.swim();
	std::cout << std::endl;

	Salmon salmon;
	std::cout << "Salmon|No-argument constructor number of eggs: " << salmon.getEggNum() << std::endl;
	std::cout << "Salmon|No-argument constructor weight:" << salmon.getWeight() << std::endl;
	std::cout << "Salmon|No-argument constructor scale shape: " << salmon.getScaleShape() << std::endl;
	Salmon salmons(0);
	salmons.setEggNum(2);
	std::cout << "Salmon-Standard constuctor egg number:" << salmons.getEggNum() << std::endl;
	Salmon salmonc(0, "default", 0);
	salmonc.setEggNum(3);
	salmonc.setScaleShape("comprehensive");
	salmonc.setWeight(3);
	std::cout << "Salmon-Comprehensive constuctor number of eggs: " << salmonc.getEggNum() << std::endl;
	std::cout << "Salmon-Comprehensive constuctor scale shape: " << salmonc.getScaleShape() << std::endl;
	std::cout << "Salmon-Comprehensive constuctor weight: " << salmonc.getWeight() << std::endl;
	salmon.display();
	salmon.backStream();
	salmon.swim();
	std::cout << std::endl;

	return 0;
}