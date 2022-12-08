//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int DP[1000001] = { 0 };
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 2; i <= N; i++)
//	{
//		if (i % 3 == 0)
//			DP[i] = 1 + DP[i / 3];
//		else if (i % 2 == 0)
//			DP[i] = 1 + DP[i / 2];
//		else
//			DP[i] = 1 + DP[i - 1];
//	}
//
//	cout << DP[N];
//
//	return 0;
//}