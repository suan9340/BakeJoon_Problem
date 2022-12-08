//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int DP[101][100001];
//int w[101], v[101];
//int n, k;
//
//int main()
//{
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	// n : 아이템 수  /   k : 배낭 용량
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> w[i] >> v[i];
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= k; j++)
//		{
//			if (j - w[i] >= 0)
//			{
//				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - w[i]] + v[i]);
//			}
//			else
//			{
//				DP[i][j] = DP[i - 1][j];
//			}
//		}
//	}
//
//	cout << DP[n][k];
//	return 0;
//}