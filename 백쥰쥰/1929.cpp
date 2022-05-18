#include <iostream>

#define MAXNUM 1000000
using namespace std;

int arr[MAXNUM + 1];
int m, n;
int main()
{
	cin >> m >> n;

	for (int i = 2; i <= n; i++)
	{
		arr[i] = i;
	}

	return 0;
}