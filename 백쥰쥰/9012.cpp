//#include <iostream>
//#include <stack>
//using namespace std;
//
//bool CheckVPS(string _sr);
//
//int num;
//
//int main()
//{
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		string input;
//		cin >> input;
//
//		if (CheckVPS(input)) cout << "YES\n";
//		else cout << "NO\n";
//	}
//
//	return 0;
//}
//
//bool CheckVPS(string _sr)
//{
//	int len = (int)_sr.length();
//	stack<int> sn;
//
//	for (int i = 0; i < len; i++)
//	{
//		char x = _sr[i];
//
//		if (x == '(')
//			sn.push(0);
//		else
//		{
//			if (!sn.empty())
//				sn.pop();
//			else
//				return false;
//		}
//	}
//	return sn.empty();
//}