//#include <iostream>
//#include <vector>	
//#include <queue>
//using namespace std;
//int BFS(int _n);
//
//int num, com;
//int x, y, cnt;
//bool visit[10000];
//vector<int> v[101];
//queue<int> q;
//
//int main()
//{
//	cin >> num >> com;
//
//	for (int i = 0; i < com; i++)
//	{
//		cin >> x >> y;
//		v[x].push_back(y);
//		v[y].push_back(x);
//	}
//
//	cout << BFS(1);
//
//
//	return 0;
//}
//
//int BFS(int _n)
//{
//	q.push(_n);
//	visit[_n] = true;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//
//		for (int i = 0; i < v[x].size(); i++)
//		{
//			int y = v[x][i];
//			if (visit[y] == false)
//			{
//				cnt++;
//				q.push(y);
//				visit[y] = true;
//			}
//		}
//
//	}
//	return cnt;
//}
