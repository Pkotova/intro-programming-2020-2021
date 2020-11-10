#include <iostream>
using namespace std;

int main()
{
//1. въвеждане и валидиране на входни данни 
	unsigned int n, k, result = 0;
	do
	{
		cout << "Enter a natural number n > 0: ";
		cin >> n;
	} while (!(cin && n > 0));

	do
	{
		cout << "Enter a natural number k: ";
		cin >> k;
	} while (!(cin && k > 0));

 //2. намираме сбора на делителите 
	for ( n = n + 1; n < 100; n++)
	{
		int sumOfDiv = 0;
		for (size_t j = 2; j <= n / 2; j++)
		{
			if (n % j == 0)
			{
				sumOfDiv += j;
				//sumOfDiv++;
			}
		}
	
		if (sumOfDiv + 1 == k)
		{
			cout << n << endl;
			break;
		}
	}
	
}