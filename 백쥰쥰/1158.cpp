#include <iostream>
//#include <queue>
//
//// 이거한담에 프린터큐 1966읻디다ㅏㄷ.
//using namespace std;
//
//int n, k;
//queue<int> q;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL); cin.tie(NULL);
//
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++)
//	{
//		q.push(i);
//	}
//
//	cout << "<";
//	while (!q.empty())
//	{
//		for (int i = 1; i < k; i++)
//		{
//			q.push(q.front());
//			q.pop();
//		}
//		cout << q.front();
//		q.pop();
//		if (!q.empty())
//			cout << ", ";
//	}
//
//	cout << ">";
//
//	return 0;
//}