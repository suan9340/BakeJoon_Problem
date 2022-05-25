#include <iostream>	
using namespace std;

string s;
int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] += 32;
	}

	cout << s;
	return 0;
}