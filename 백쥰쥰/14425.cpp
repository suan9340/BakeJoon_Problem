#include <iostream>
#include <unordered_set>

using namespace std;

int n, m, cnt;
string input;
unordered_set<string> s;

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (s.find(input) != s.end())
		{
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}