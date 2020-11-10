#include <iostream>
using namespace std;

const int MAX_DIGITS = 10;

int main()
{
	//1. въвеждаме и валидираме данни
	//	1.1 Имаме всички естествени числа
	//2. - проверяваме колко цифри има числото
	//3. - запазим цифрите на числото в масив.
	//4. - Обхождаме масива и проверяваме дали всяка цифра на позиция i е равна на сбора от 
	// другите две цифри

	unsigned int  number, tempNumber, digits[MAX_DIGITS], numberOfDigits = 0;
	bool result = true;

	do
	{
		cout << "Enter a number at least 3 digit number: ";
		cin >> number;

	} while (!(cin &&  number > 99));

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
	// 123456 => 654321

	for (size_t i = numberOfDigits - 1; i > 1; i--)
	{
		if (digits[i] != digits[i - 1] + digits[i - 2])
		{
			result = false;
			break;
		}

	}
	cout << boolalpha << result;
}
