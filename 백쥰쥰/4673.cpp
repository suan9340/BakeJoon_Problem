//#include <iostream>
//using namespace std;
//
//int d(int _num)
//{
//	int sum = _num;
//
//	while (_num != 0)
//	{
//		sum = sum + (_num % 10);	// 첫째 자리수
//		_num = _num / 10;			// 10을 나누어 첫째 자리수 없애기
//	}
//
//	return sum;
//}
//
//int main()
//{
//	for (int i = 1; i < 10001; i++)
//	{
//		cout << d(i) << "\n";
//	}
//
//	return 0;
//}