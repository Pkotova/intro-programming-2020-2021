#include "Computer.h"
#include<iostream>
Computer::Computer()
{
	setPrice(1000);
	setRam(16);
	setSSD(512);
}

void Computer::setPrice(int _price)
{
	this->price = _price;
}

void Computer::setRam(int _ram)
{
	this->ram = _ram;
}

void Computer::setSSD(int _ssd)
{
	this->ssd = _ssd;
}

int Computer::getPrice()
{
	return this->price;
}

int Computer::getRam()
{
	return this->ram;
}

int Computer::getSSD()
{
	return this->ssd;
}

void Computer::printComputer()
{
	std::cout <<"Price: " <<this->price << std::endl;
	std::cout << "RAM: " << this->ram << std::endl;
	std::cout << "SSD: " << this->ssd << std::endl;
}
