#include <iostream>
using namespace std;
int main()
{

	int people;
	double discount = 0;
	do
	{
		cout << "Enter number of people: ";
		cin >> people;

	} while (!(cin && people > 0));

	if (people % 7 == 0)
	{
		discount = 0.5;
	}
	else 
	{
		if (people >= 5 && people <= 10)
		{
			discount = 0.05;
		}
		else if (people >= 11 && people <= 40)
		{
			discount = 0.2;

		}
		else if (people > 40)
		{
			discount = 0.33;
		}
	}
	
	cout << "Discount is: " << discount * 100 << " % " << endl;

}

