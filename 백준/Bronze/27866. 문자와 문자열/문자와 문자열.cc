#include <iostream>
#include <vector>
using namespace std;

string input;
int num;

vector<char> v;

int main()
{
	cin >> input;
	cin >> num;


	cout << input[num - 1];

	return 0;
}