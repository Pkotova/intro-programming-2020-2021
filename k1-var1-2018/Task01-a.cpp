#include <iostream>
using namespace std;
/*
а) Трайчо иска да си купи нов лаптоп.
Той е готов да даде от 1000 до 1500 лв. за лаптоп с най-малко 3 USB порта, най-малко 8
GB RAM и SSD диск.
Ако обаче лаптопът няма SSD или има по-малко от 8 GB RAM, той не иска да даде повече
от 800 лв.
Напишете булев израз, който по цена на лаптоп (реално число), брой USB портове
(естествено число), количество RAM (естествено число) и дали има SSD (булева
стойност) определя дали Трайчо ще си купи лаптопа.
*/
int main()
{
	double price;
	int USBports, GBram;
	bool hasSSD = true;
	cout << "Price: ";
	cin >> price;
	
	cout << "USB ports: ";
	cin >> USBports;
	
	cout << "RAM: ";
	cin >> GBram;
	
	cout << "SSD: ";
	cin >> hasSSD;
	
	
	bool goingToBuy1 = price >= 1000 && price <= 1500
		&& USBports >= 3 
		&& GBram >= 8 
		&& hasSSD;

	bool goingToBuy2 = (hasSSD == false
		|| GBram < 8)
		&& price <= 800;
			
	bool result = (goingToBuy1) || (goingToBuy2);
	cout << "Taicho is going to buy the laptop " << boolalpha << result << endl;
}
