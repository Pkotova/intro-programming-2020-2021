#pragma once
struct Computer
{
private:
	int price;
	int ram;
	int ssd;
public:
//	type 1: constructors;
	Computer(); // dafult constructor
//  type 2: mutators;
	void setPrice(int _price);
	void setRam(int _ram);
	void setSSD(int _ssd);

	int getPrice();
	int getRam();
	int getSSD();
//  type 3: any others
	void printComputer();
};

