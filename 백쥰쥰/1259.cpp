//#include <iostream>
//#include <stack>
//#include <queue>
//using namespace std;
//
//queue<char> q;
//stack<char> s;
//stack<string> answer;
//
//string input;
//char c;
//
//
//int main()
//{
//	while (true)
//	{
//		int cnt = 0;
//		cin >> input;
//
//		if (input[0] == '0')
//			return 0;
//
//		for (int i = 0; i < input.size(); i++)
//		{
//			c = input[i];
//			q.push(c);
//			s.push(c);
//		}
//
//		for (int i = 0; i < input.size(); i++)
//		{
//			if (q.front() != s.top())
//			{
//				cnt++;
//			}
//			q.pop(); s.pop();
//		}
//
//		if (cnt == 0)
//			cout << "yes\n";
//		else cout << "no\n";
//	}
//
//	return 0;
//}