#include <iostream>
#include"Computer.h"
#include "Cat.h"
int main()
{
	Computer c;
	c.setSSD(256);
	c.printComputer();
	std::cout << std::endl;

	Cat cat;
	cat.print();
}
