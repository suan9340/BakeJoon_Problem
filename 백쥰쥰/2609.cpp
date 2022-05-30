//#include <iostream>
//using namespace std;
//
//int a, b, temp;
//
//void MaxNum(int a, int b);
//int LCM(int a, int b);
//int GDC(int a, int b);
//
//int main()
//{
//	cin >> a >> b;
//	MaxNum(a, b);
//
//	cout << GDC(a, b) << "\n" << LCM(a, b);
//	return 0;
//}
//
//void MaxNum(int a, int b)
//{
//	if (a < b)
//	{
//		a = temp;
//		temp = b;
//		b = a;
//	}
//}
//
//int LCM(int a, int b)
//{
//	return (a * b) / GDC(a, b);
//}
//
//int GDC(int a, int b)
//{
//	if (b == 0)return a;
//	else return GDC(b, a % b);
//}