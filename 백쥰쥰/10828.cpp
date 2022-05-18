//#include <iostream>
//#include <stack>
//using namespace std;
//
//stack<int> s;
//int num, sn;
//string input;
//
//int main()
//{
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> input;
//
//		if (input == "push")
//		{
//			cin >> sn;
//			s.push(sn);
//		}
//		else if (input == "pop")
//		{
//			if (s.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << s.top() << "\n";
//				s.pop();
//			}
//		}
//		else if (input == "size")
//		{
//			cout << s.size() << "\n";
//		}
//		else if (input == "empty")
//		{
//			if (s.empty())
//				cout << "1\n";
//			else
//				cout << "0\n";
//		}
//		else if (input == "top")
//		{
//			if (s.empty())
//				cout << "-1\n";
//			else
//				cout << s.top() << "\n";
//		}
//		else
//			return -1;
//	}
//	return 0;
//}