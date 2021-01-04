#include "Cat.h"
#include <iostream>

Cat::Cat()
{
	setAge(1);
	setHeight(40);
	setWeight(3);
	setGender(0);
}

void Cat::setAge(int _age)
{
	this->age = _age;
}

void Cat::setHeight(int _height)
{
	this->height = _height;
}

void Cat::setWeight(int _weight)
{
	this->weight = _weight;
}

void Cat::setGender(bool _gender)
{
	this->gender = _gender;
}

int Cat::getAge()
{
	return this->age;
}

int Cat::getHeight()
{
	return this->height;
}

int Cat::getWeight()
{
	return this->weight;
}

bool Cat::getGender()
{
	return this->gender;
}

void Cat::print()
{
	std::cout << "Age: " << this->age << std::endl;
	std::cout << "Height: " << this->height << std::endl;
	std::cout << "Weight: " << this->weight << std::endl;
	std::cout << "Gender: ";
	(this->gender) ? std::cout << "Male" : std::cout << "Female";
}
