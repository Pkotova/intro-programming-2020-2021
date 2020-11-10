#include <iostream>
using namespace std;
/*
Да се напише програма, която по въведено 4-цифрено естествено число проверява
дали първата му цифра е нечетна и е най-голяма сред всички цифри.
Пример: 7456 -> да
*/
int main()
{
	int number, firstDigit, secondDigit, thirdDigit, fourthDigit;
	bool result;
	do
	{
		cin >> number;

	} while (!cin || number <= 1000 && number >= 9999);

	firstDigit = number / 1000;
	secondDigit = number / 100 % 10;
	thirdDigit = number / 10 % 10;
	fourthDigit = number % 10;

	result = (firstDigit % 2 != 0);

	if (result)
	{
		if (firstDigit > secondDigit && firstDigit > thirdDigit && firstDigit > fourthDigit)
		{
			cout << "ДА!";
		}
		else
		{
			cout << "НЕ!";
		}
	}
	else
	{
		cout << "НЕ!" << endl;
	}
}
