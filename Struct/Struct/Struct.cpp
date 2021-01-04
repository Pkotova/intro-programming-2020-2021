#include <iostream>
// struct, class 
int k = 0;
/*
* 1. incapsulation
* 2. abstaction
* 3. polimorphism
* 4. inheritance
*/
struct computer 
{
	double price;
	int ssd;
	int ram = 16;
};
struct dog 
{
	bool gender; // 1 male, 0 female;
	int age; 
	double height;
	double weight;

	void bark() {
		std::cout << "bow-bow" << std::endl;
	}
	void drinkWater() {
		std::cout << "drinking.." << std::endl;
	}
	void grow(int newAge) {
		age += newAge;
	}
};
struct book
{
	int pages;
	double price; 
	int code;
};
int main()
{
   // int - range[-2mil ; +2mil], memory
   // int[] - int[i] => range, memory, n
   // char  - ascii code, memory
   // char[] - char[i] ascii code, memory, n - 1, \0

  // computer - price, cpu, ram, ssd, video card, OS, ...
  // dog - color, poroda, gender, fur,

	computer c;
	std::cout << c.ram << std::endl;
	//c.ram = 16; // range
	c.ssd = 512; // memory
	c.price = 1450; 

	computer cc;
	dog d;
	d.age = 10;
	d.gender = 0;
	d.height = 60;
	d.weight = 30;

	int a;
	int b = 5;
	a = b; 

	cc = c;
	std::cout << cc.price << std::endl; // 1450

	book h;
	h.code = 12453;

	dog dog;
	dog.age = 10;
	dog.bark();
	dog.drinkWater();
	dog.grow(5);
	std::cout << dog.age << std::endl;
}
