#include <iostream>
using namespace std;
void CountNum(char _c);

string s;
int total;

int main()
{
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		CountNum(s[i]);
	}

	total += s.length();

	cout << total;


	return 0;
}

void CountNum(char _c)
{
	switch (_c)
	{
	case 'A':
	case 'B':
	case 'C':
		total += 2;
		break;


	case 'D':
	case 'E':
	case 'F':
		total += 3;
		break;


	case 'G':
	case 'H':
	case 'I':
		total += 4;
		break;


	case 'J':
	case 'K':
	case 'L':
		total += 5;
		break;


	case 'M':
	case 'N':
	case 'O':
		total += 6;
		break;


	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		total += 7;
		break;


	case 'T':
	case 'U':
	case 'V':
		total += 8;
		break;

	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		total += 9;
		break;
	}
}