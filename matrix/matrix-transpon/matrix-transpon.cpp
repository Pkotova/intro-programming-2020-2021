#include <iostream>
using namespace std;
int main()
{
	int matrix[3][5] = { 1,2,3,4,5,2,4,6,8,10,3,6,9,12,14 };
	int Tmatrix[5][3] = { 0 };
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < 3 ; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			Tmatrix[j][i] = matrix[i][j];
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << Tmatrix[i][j]<<" ";
		}
		cout << endl;
	}
}


