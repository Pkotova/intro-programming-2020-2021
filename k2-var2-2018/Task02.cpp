#include <iostream>
using namespace std;
const int MAX_DIGITS = 10;
int main()
{
	unsigned int digits[MAX_DIGITS] = { 0 }, numberOfDigits = 0, number, tempNumber;
	bool result = true;

	do
	{
		cout << "Enter a number at least 3 digit number: ";
		cin >> number;

	} while (!(cin && number > 0));

	tempNumber = number;

	while (number)
	{
		number /= 10;
		++numberOfDigits;
	}

	for (size_t i = 0; i < numberOfDigits; i++)
	{
		digits[i] = tempNumber % 10;
		tempNumber /= 10;
	}

	for (size_t i = 0; i < numberOfDigits; i++)
	{
		if (i % 2 == 0)
		{
			if (digits[i] <= digits[i + 1])
			{
				result = false;
				break;
			}
		}
	}

	cout << boolalpha << result << endl;
}
