//#include <iostream>
//#include <stack>
//using namespace std;
//
//stack<int> s;
//string num;
//char a;
//int  n;
//
//int main()
//{
//	cin >> n;
//
//	for (int j = 0; j < n; j++)
//	{
//		int total = 0;
//
//		while (!s.empty())
//			s.pop();
//
//		cin >> num;
//
//		for (int i = 0; i < num.length(); i++)
//		{
//			a = num[i];
//			if (a == 'O')
//			{
//				total++;
//
//				if (!s.empty())
//					total += s.size();
//
//				s.push(0);
//			}
//			else
//			{
//				while (!s.empty())
//					s.pop();
//			}
//		}
//
//		cout << total << "\n";
//	}
//
//	return 0;
//}