#include <iostream>
#include <string>
#include <stack>
using namespace std;

string s;

int main()
{
	while (true)
	{
		getline(cin, s);
		stack<char> c;

		if (s[0] == '.') break;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(') c.push('(');
			if (s[i] == '[') c.push('[');

			if (s[i] == ')')
			{
				if (!c.empty() && c.top() == '(')
				{
					c.pop();
				}
				else
				{
					cout << "no\n";
					break;
				}
			}


			if (s[i] == ']')
			{
				if (!c.empty() && c.top() == '[')
				{
					c.pop();
				}
				else
				{
					cout << "no\n";
					break;
				}
			}

			if (c.empty() && i == s.length() - 2)
			{
				cout << "yes\n";
			}
			else if (!c.empty() && i == s.length() - 2)
			{
				cout << "no\n";
			}
		}
	}
	return 0;
}