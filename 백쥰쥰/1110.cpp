//#include <iostream>
//using namespace std;
//
//int n, cnt, num;
//int a, b, c;
//
//void Count(int target)
//{
//	cnt++;
//	a = target / 10;
//	b = target % 10;
//	c = a + b;
//
//
//	if (c < 10)
//	{
//		target = (b * 10) + c;
//	}
//	else
//	{
//		int z = c % 10;
//		target = (b * 10) + z;
//	}
//
//	num = target;
//}
//
//int main()
//{
//	int a = 0;
//	cin >> n;
//	if (n < 0 || n > 99) return -1;
//
//	num = n;
//
//	do
//	{
//		a++;
//		Count(num);
//	} while (n != num);
//	cout << a;
//
//	return 0;
//}