//#include <iostream>
//#include <stack>
//using namespace std;
//
//int n, m, cnt, result = 64;
//string board[51];
//string WB[8] =
//{
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//};
//
//string BB[8] =
//{
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//};
//
//char a;
//
//int WhiteFirst(int a, int b);
//int BlackFirst(int a, int b);
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//		cin >> board[i];
//
//	for (int i = 0; i < n - 7; i++)
//	{
//		for (int j = 0; j < m - 7; j++)
//		{
//			WhiteFirst(j, i);
//			BlackFirst(j, i);
//		}
//	}
//
//	cout << result;
//	return 0;
//}
//
//int WhiteFirst(int a, int b)
//{
//	cnt = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (WB[i][j] != board[b + i][a + j])
//				cnt++;
//		}
//	}
//	if (cnt < result) result = cnt;
//	return cnt;
//}
//
//int BlackFirst(int a, int b)
//{
//	cnt = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (BB[i][j] != board[b + i][a + j])
//				cnt++;
//		}
//	}
//	if (cnt < result) result = cnt;
//	return cnt;
//}