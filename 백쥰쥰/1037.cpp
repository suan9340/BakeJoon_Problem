#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, input;
vector<int> v;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	cout << v[0] * v[v.size() - 1];


	return 0;
}