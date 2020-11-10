#include <iostream>
using namespace std;
/*
* 
	     * * * * *
		* *     * *
	   *   *   *   *
	  *     * *     *
	 * * * * * * * * *
 

*/
int main()
{
	int n;
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cout << " ";
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;

	for (size_t i = 1; i <= n - 2; i++)
	{
		for (size_t j = 0; j < n - i ; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (size_t j = 0; j < (i * 2) - 1; j++)
		{
			cout << " ";
		}
		cout << "* ";
		for (size_t j = 0; j < (n - (i + 2)) * 2; j++)
		{
			cout << " ";
		}
		cout << "* ";
		for (size_t j = 0; j < ((i * 2) - 2); j++)
		{
			cout<<" ";
		}
		cout << "* " << endl;
	}
	cout << " ";
	for (size_t i = 0; i < n * 2-1; i++)
	{
		cout << "* ";
	}
}


