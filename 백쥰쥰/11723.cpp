//#include <iostream>
//#include <string>
//using namespace std;
//
//int n, num, bit;
//string input;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	while (n--)
//	{
//		input.clear();
//		cin >> input;
//		if (input == "add")
//		{
//			cin >> num;
//			bit |= (1 << num);
//		}
//		else if (input == "remove")
//		{
//			cin >> num;
//			bit &= ~(1 << num);
//		}
//		else if (input == "check")
//		{
//			cin >> num;
//			if (bit & (1 << num))
//			{
//				cout << 1 << '\n';
//			}
//			else
//			{
//				cout << 0 << '\n';
//			}
//		}
//		else if (input == "toggle")
//		{
//			cin >> num;
//			bit ^= (1 << num);
//		}
//		else if (input == "all")
//		{
//			bit = (1 << 21) - 1;
//		}
//		else if (input == "empty")
//		{
//			bit = 0;
//		}
//	}
//	return 0;
//}
