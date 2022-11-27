#include <iostream>
using namespace std;

int x, n, a, b, total;

int main()
{
	cin >> x;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		total += (a * b);
	}

	if (total == x)
		cout << "Yes";
	else
		cout << "No";	

	return 0;
}