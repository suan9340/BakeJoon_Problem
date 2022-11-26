//#include <iostream>
//using namespace std;
//
//int Sum(int _n);
//int n, sum, answer;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 1; i < n; i++)
//	{
//		sum = Sum(i);
//
//		if (sum == n)
//		{
//			answer = i;
//			break;
//		}
//	}
//
//	cout << answer;
//
//	return 0;
//}
//
//int Sum(int _n)
//{
//	int _sum = _n;
//
//	while (_n > 0)
//	{
//		_sum += (_n % 10);
//		_n /= 10;
//	}
//
//	return _sum;
//}