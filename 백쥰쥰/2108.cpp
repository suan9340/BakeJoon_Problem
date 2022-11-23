#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double n, ninput;
double num, overlap, none;
double a, b, c, d;
vector<double> v;
vector<pair<int, int>> numv;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ninput;
		v.push_back(ninput);
	}

	if (n == 1)
	{
		a = b = c = v[0];
		d = 0;

		cout << a << "\n" << b << "\n" << c << "\n" << d;
		return 0;
	}

	sort(v.begin(), v.end());

	// a
	for (int i = 0; i < n; i++)
	{
		a += v[i];
	}
	a /= n;
	a = round(a);


	// b
	if (n == 1 ? (b = v[0]) : (b = v[(n / 2)]));


	// c
	for (int i = 1; i < n; i++)
	{
		if (v[i - 1] == v[i])
		{
			none++;
			num += 1;
		}
		else
		{
			num = 0;
		}

		if (num > overlap)
		{
			overlap = v[i];
		}
	}

	if (none == 0 ? (c = v[1]) : (c = overlap));



	// d
	d = (v[n - 1]) - (v[0]);

	cout << a << "\n" << b << "\n" << c << "\n" << d;

	return 0;
}