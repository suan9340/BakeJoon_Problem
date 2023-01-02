//#include <iostream>
//using namespace std;
//
//void DFS(int _y, int _x);
//
//int dy[4] = { -1,0,1,0 };
//int dx[4] = { 0,1,0,-1 };
//int m, n, k, y, x, ret, ny, nx, t;
//int map[51][51];
//bool visited[51][51];
//
//int main()
//{
//	cin >> t;
//
//	while (t--)
//	{
//		fill_n(map[0], 51 * 51, 0);
//		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
//		ret = 0;
//
//		cin >> m >> n >> k;
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x >> y;
//			map[y][x] = 1;
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//
//			}
//		}
//
//		cout << ret << "\n";
//	}
//
//	return 0;
//}
//
//void DFS(int _y, int _x)
//{
//	visited[y][x] = 1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		ny = _y + dy[i];
//		nx = _x + dx[i];
//
//		if (nx >= 0 & ny >= 0 &&)
//	}
//
//	return;
//}