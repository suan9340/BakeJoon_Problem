#include <iostream>
#include <algorithm>
using namespace std;

int n;
int wine[10000];
int drink[10000];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> wine[i];
	}

	drink[0] = wine[0];
	drink[1] = wine[0] + wine[1];
	drink[2] = max(drink[1], max(drink[0] + wine[2], wine[1] + wine[2]));


	for (int i = 3; i < n; i++)
	{
		drink[i] = max(drink[i - 1],
			max(drink[i - 2] + wine[i], drink[i - 3] + wine[i - 1] + wine[i]));
	}

	cout << drink[n - 1];

	return 0;
}