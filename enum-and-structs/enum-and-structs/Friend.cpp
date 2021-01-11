#include "Friend.h"
#include <string.h>
#include <iostream>

Friend::Friend()
{
	setGender(non);
	setName("Unknown");
	setActor("Unknown");
	setAge(16);
	setJob("Unknown");
}

Friend::Friend(gender sex, const char* name, const char* actor, int age, const char* job)
{
	setGender(sex);
	setName(name);
	setActor(actor);
	setAge(age);
	setJob(job);
}

void Friend::setGender(gender sex)
{
	this->sex = sex;
}

gender Friend::getGender()
{
	return this->sex;
}

void Friend::setName(const char* name)
{
	strcpy_s(this->name, 32, name);
	// this->name = name;
}

char* Friend::getName()
{
	return this->name;
}

void Friend::setActor(const char* actor)
{
	strcpy_s(this->actor, 32, actor);
}

char* Friend::getActor()
{
	return this->actor;
}

void Friend::setAge(int age)
{
	this->age = age;
}

int Friend::getAge()
{
	return this->age;
}

void Friend::setJob(const char* job)
{
	strcpy_s(this->job, 32, job);
}

char* Friend::getJob()
{
	return this->job;
}

void Friend::print()
{
	std::cout << "Gender: " << this->sex << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Actor: " << this->actor << std::endl;
	std::cout << "Age: " << this->age << std::endl;
	std::cout << "Job: " << this->job << std::endl;
}

void Friend::input()
{
	bool gender;
	std::cout << "Gender: ";
	std::cin >> gender;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Actor: ";
	std::cin >> actor;
	std::cout << "Age: ";
	std::cin >> age;
	std::cout << "Job: ";
	std::cin >> job;
}
