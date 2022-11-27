#include <iostream>
#include <queue>	
using namespace std;

void BFS(int x, int y);

int n, m;
int check[101][101];
bool visit[101][101];
char map[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

queue<pair<int, int>> q;

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> map[i];
	}

	BFS(0, 0);
	cout << check[n - 1][m - 1] + 1;

	return 0;
}

void BFS(int x, int y)
{
	visit[x][y] = true;
	q.push({ x,y });

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if (map[nx][ny] == '1' && visit[nx][ny] == false)
				{
					check[nx][ny] = check[x][y] + 1;
					visit[nx][ny] = true;
					q.push({ nx,ny });
				}
			}
		}
	}
}	