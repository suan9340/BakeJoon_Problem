#include <iostream>
#include <vector>
using namespace std;

vector<char> v, v1;
string s;
bool isTrue = false;

int main()
{
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		v.push_back(s[i]);
	}

	for (int i = s.size() - 1; i >= 0; i--)
	{
		v1.push_back(s[i]);
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (v[i] != v1[i])
		{
			cout << "0";
			return 0;
		}
	}

	cout << "1";

	return 0;
}