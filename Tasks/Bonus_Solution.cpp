// Bonus_Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//  Task 04

	int year;

	cout << "Check for year: ";
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << "There is a meeting! (Leap year)" << endl;
	else
		cout << "There is NO meeting! (Non-Leap year)" << endl;
	cout << endl;

	//  Task 05
	
	char sign;

	cin >> sign;

	if (sign >= '0' && sign <= '9')
	{
		cout << sign << " is a digit." << endl;
		int intoNumber = sign - '0';
		cout << sign << " + 1 = " << intoNumber + 1 << endl;
	}
	else if (sign >= 'a' && sign <= 'z')
	{
		int asciiDifference = 'a' - 'A';
		cout << sign << " is a lowercase letter." << endl;
		char upperCase = sign - asciiDifference;
		cout << "It transforms into " << upperCase << endl;
	}
	else if (sign >= 'A' && sign <= 'Z')
	{
		int asciiDifference = 'a' - 'A';
		cout << sign << " is an uppercase letter." << endl;
		char lowerCase = sign + asciiDifference;
		cout << "It transforms into " << lowerCase << endl;
	}
	else
		cout << "Special signs can't be transformed." << endl;
}