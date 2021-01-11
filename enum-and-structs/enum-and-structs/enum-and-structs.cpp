#include <iostream>
#include "Friend.h"
/*
* 1. what's struct != class ? 
* 2. functions in struct = method, член функции
* 3. data - член данни
* 4. constructors
* 5. setters & getters - mutators 
* 6. incapsulation - public,private, (protected)
* 7. Struct Chair		-> Chair c;
* 8. c.setType()
*	 c.print()
*/

Friend& findYoungest(Friend* friends, int n)
{
	Friend *temp = &friends[0];
	for (size_t i = 1; i < 6; i++)
	{
		if (temp->getAge() >= friends[i].getAge()) // <=
		{
			temp = &friends[i];
		}
	}
	return *temp;
}
void females(Friend* friends, int n)
{
	for (size_t i = 1; i < 6; i++)
	{
		if (friends[i].getGender() == female) // <=
		{
			friends[i].print();
		}
	}
}

//----------------------------
void modify(char seq[], bool flag[], int len)
{
	if (len == 0)
	{
		return;
	}
	else if (flag[len - 1] && (seq[len - 1] >= 'a' && seq[len - 1] <= 'z'))
	{
		char helper = seq[len - 1] - 'a';
		seq[len - 1] = 'A' + helper;
	}
	return modify(seq, flag, len - 1);
}
void combine(char* firstname, char* lastname)
{
	char fullname[164] = " ";
	int index;
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		fullname[i] = firstname[i];
		if (firstname[i] == ' ')
		{
			index = i;
			for (int j = 0; lastname[j] != '\0'; j++)
			{
				if (lastname[j] != ' ')
				{
					fullname[index + 1] = lastname[j];
					index++;
				}
			}
		}
	}
	std::cout << fullname << std::endl;
}

double maxHorseMovement(double matrix[50][50], int size)
{
	double maxSum = 0;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			double sum = matrix[i][j];
			if (i - 2 >= 0 && j - 1 >= 0)
			{
				sum += matrix[i - 2][j - 1];
			}
			if (i - 2 >= 0 && j + 1 < size)
			{
				sum += matrix[i - 2][j + 1];
			}
			if (i - 1 >= 0 && j - 2 >= 0)
			{
				sum += matrix[i - 1][j - 2];
			}
			if (i + 1 >= 0 && j - 2 >= 0)
			{
				sum += matrix[i + 1][j - 2];
			}
			if (i + 2 < size && j - 1 >= 0)
			{
				sum += matrix[i + 2][j - 1];
			}
			if (i + 2 < size && j + 1 < size)
			{
				sum += matrix[i + 2][j + 1];
			}
			if (i - 1 >= 0 && j + 2 < size)
			{
				sum += matrix[i - 1][j + 2];
			}
			if (i + 1 < size && j + 2 < size)
			{
				sum += matrix[i + 1][j + 2];
			}
			if (sum > maxSum)
			{
				maxSum = sum;
			}
		}
	}
	return maxSum;
}
int main()
{
	//Friend f; // default c-tor
	////f.print();
	//Friend ivan(male, "Ivan", "George", 34, "plumber");
	////ivan.print();
	////f.input();
	////f.print();

	//Friend friends[6];
	//friends[3].setAge(10);
	//findYoungest(friends, 6).print();
	//friends[4].setGender(female);
	//females(friends, 6);
	//char seq[15] = "Lorem Ipsum";
	//bool flags[15] = { false, true, true, false, true, true, true, false, false, false, false };
	//modify(seq, flags, 11);
	//std::cout << seq << std::endl;

	//char firstname[32] = "Georgi Gosho";
	//char lastname[32] = "Ivanov Goshov";
	//combine(firstname, lastname);
	
	double matrix[50][50];
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	std::cout << maxHorseMovement(matrix, 6);

}
