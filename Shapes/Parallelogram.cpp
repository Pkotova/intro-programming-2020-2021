#include <iostream>
//parallelogram
using namespace std;
int main()
{
	int n; 
	cin >> n; 
	bool flag1 = 0;
	int a = 0;

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= n * 2; j++)
		{
			if (i == 1)
			{
				for (size_t k = 0; k < n - i && !flag1; k++)
				{
					cout << " ";
				}
				flag1 = 1;
				cout << "* ";
			}
			else
			{
				if (i == n) cout << "* ";
			}
		}
		if (i > 1 && i < n)
		{
			for (size_t p = 1; p <= n - i; p++)
			{
				cout << " ";
			}
			cout << "*";

			for (size_t p = 1; p <= a; p++)
			{

				cout << " ";
			}
			a++;
			cout << "*";
			for (size_t p = 0; p < n *  3 - 2; p++)
			{
				cout << " ";
			}
			cout << "*";
			for (size_t p = 2; p <= n -i; p++)
			{
				cout << " ";
			}
			cout << "*";
		}
		cout << endl;
	}
}
