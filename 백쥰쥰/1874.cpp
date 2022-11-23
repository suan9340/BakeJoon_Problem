//#include <iostream>	
//#include <stack>
//#include <vector>
//using namespace std;
//
//int n, input, num = 1;
//stack<int> s;
//vector<char> c;
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//
//		if (!s.empty() && s.top() == input)
//		{
//			s.pop();
//			c.push_back('-');
//		}
//		else if (num <= input)
//		{
//			while (num <= input)
//			{
//				s.push(num++);
//				c.push_back('+');
//			}
//
//			s.pop();
//			c.push_back('-');
//		}
//		else if (!s.empty() && s.top() > input)
//		{
//			cout << "NO";
//			return 0;
//		}
//	}
//
//	for (auto a : c)
//	{
//		cout << a << "\n";
//	}
//	return 0;
//}