//#include<iostream>
//#include<queue>
//#include<string.h>
//
//using namespace std;
//
//struct cmp 
//{
//	bool operator()(int a, int b)
//	{
//		if (abs(a) == abs(b))
//		{
//			if (a > b)
//			{
//				return a > b;
//			}
//			else return b < a;
//		}
//		return abs(a) > abs(b);
//	}
//};
//
//int main()
//{
//	int n;
//	priority_queue <int, vector<int>, cmp> pq;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int x;
//		cin >> x;
//		if (x == 0)
//		{
//			if (pq.empty())
//			{
//				cout << 0 << endl;
//			}
//			else
//			{
//				cout << pq.top() << endl;
//				pq.pop();
//			}
//
//		}
//		else
//		{
//			pq.push(x);
//		}
//
//
//	}
//}