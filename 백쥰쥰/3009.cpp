#include <iostream>
#include <vector>
using namespace std;

int xx1, xx2, xx3;
int yy1, yy2, yy3;

int main()
{
	cin >> xx1 >> yy1;
	cin >> xx2 >> yy2;
	cin >> xx3 >> yy3;

	if (xx1 == xx2)
		cout << xx3 << " ";
	else if (xx1 == xx3)
		cout << xx2 << " ";
	else 
		cout << xx1 << " ";

	if (yy1 == yy2)
		cout << yy3;
	else if (yy1 == yy3)
		cout << yy2;
	else 
		cout << yy1;

	return 0;
}