//#include <iostream>
//#include <queue>
//#include <deque>
//using namespace std;
//
//int n, cn;
//int renum;
//deque<int> q;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0, cn = 1; i < n; i++)
//	{
//		q.push_back(cn);
//		cn++;
//	}
//
//	while (true)
//	{
//		if (q.size() <= 1) break;
//		q.pop_front();
//		if (q.size() <= 1) break;
//		renum = q.front();
//		q.pop_front();
//		q.push_back(renum);
//	}
//	
//	cout << q.front();
//	return 0;
//}