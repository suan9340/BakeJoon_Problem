//#include <iostream>
//using namespace std;
//
//#define MAX 1010
//#define MODULE 10007
//
//int n;
//int DP[MAX];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n;
//
//	DP[1] = 1;
//	DP[2] = 2;
//
//	for (int i = 3; i <= n; i++)
//	{
//		DP[i] = DP[i - 1] + DP[i - 2];
//		DP[i] = DP[i] % MODULE;
//	}
//
//	cout << DP[n] << "\n";
//
//	return 0;
//}