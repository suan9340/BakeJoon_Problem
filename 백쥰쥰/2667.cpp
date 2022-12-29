//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void DFS(int y, int x);
//
//
//int map[25][25] = { 0, };
//bool visit[25][25];
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int n, total, house;
//string input;
//vector<int> v;
//
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		for (int j = 0; j < n; j++)
//		{
//			map[i][j] = input[j] - '0';
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (map[i][j] == 1 && visit[i][j] == false)
//			{
//				DFS(i, j);
//				total++;
//				v.push_back(house);
//				house = 0;
//			}
//		}
//	}
//
//	sort(v.begin(), v.end());
//
//	cout << total << "\n";
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << "\n";
//	}
//
//
//	return 0;
//}
//
//void DFS(int y, int x)
//{
//	visit[y][x] = true;
//	map[y][x] = house;
//	house++;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int _nx = x + dx[i];
//		int _ny = y + dy[i];
//
//		if (_nx < 0 || _ny < 0 || _nx >= n || _ny >= n)
//		{
//			continue;
//		}
//
//		if (map[_ny][_nx] == 1 && visit[_ny][_nx] == false)
//		{
//			DFS(_ny, _nx);
//		}
//	}
//
//}