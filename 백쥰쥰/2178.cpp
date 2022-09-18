//#include <iostream>
//#include <queue>	
//using namespace std;
//
//int BFS(int v);
//
//#define MAX 100
//
//int n, m, maze[MAX][MAX], visited[MAX][MAX];
//string temp;
//
//int dy[4] = { -1,0,1,0 };
//int dx[4] = { 0,1,0,-1 };
//
//queue < pair<int, int>> q;
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//
//		for (int j = 0; j < m; j++)
//		{
//			maze[i][j] = temp[j] - '0';
//		}
//	}
//
//	BFS(0);
//
//	return 0;
//}
//
//int BFS(int v)
//{
//	visited[0][0] = 1;
//	q.push({ 0,0 });
//
//	while (q.size())
//	{
//		int _y = q.front().first;
//		int _x = q.front().second;
//
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int _ny = _y + dy[i];
//			int _nx = _x + dx[i];
//
//			if (_ny >=0 && _ny < n && _nx >=0 && _nx < m && visited[_ny][_nx] != 0 && maze[_ny][_nx] !=0) continue;
//
//			visited[_ny][_nx] = visited[_ny][_nx] + 1;
//			q.push({ _ny,_nx });
//		}
//
//	}
//
//	cout << visited[n - 1][m - 1];
//	return 0;
//}