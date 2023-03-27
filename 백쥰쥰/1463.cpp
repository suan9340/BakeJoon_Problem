//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int DP[1000001] = { 0 };
//
//// 10 -> 9 -> 3 -> 1 = 3¹ø
//int main()
//{
//	int N;
//	cin >> N;
//
//
//	for (int i = 2; i <= N; i++)
//	{
//		DP[i] = 1 + DP[i - 1];
//
//		if (i % 3 == 0)
//		{
//			DP[i] = min(DP[i], 1 + DP[i / 3]);
//		}
//		if (i % 2 == 0)
//		{
//			DP[i] = min(DP[i], 1 + DP[i / 2]);
//		}
//	}
//
//	cout << DP[N];
//
//	return 0;
//}