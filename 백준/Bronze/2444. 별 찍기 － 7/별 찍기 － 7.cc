#include <iostream>
using namespace std;

int num;

int main()
{
	cin >> num;


	for (int i = 1; i < num; i++)
	{
		for (int j = num - i; j > 0; j--)
		{
			cout << " ";
		}

		for (int z = 0; z <= 2 * (i - 1); z++)
		{
			cout << "*";
		}


		cout << "\n";
	}


	for (int i = num; i >= 1; i--)
	{
		for (int o = 0; o < num - i; o++)
		{
			cout << " ";
		}


		for (int j = 0; j <= 2 * (i - 1); j++)
		{
			cout << "*";
		}

		cout << "\n";
	}


	return 0;
}