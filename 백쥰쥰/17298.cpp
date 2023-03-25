#include <iostream>
#include <stack>
using namespace std;

int a, as;
stack<int> s;

int main()
{
	cin >> a;

	while (a--)
	{
		cin >> as;
		s.push(as);
	}

	cout << "\n" << s.top();
	return 0;
}