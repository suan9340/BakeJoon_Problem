//#include <iostream>
//using namespace std;
//
//#define ROAD 0
//#define APPLE 1
//#define SNAKE 2
//
//#define MAX_NUM 100
//
//int n, k, aplea, apleb;
//int a, b;
//int arr[MAX_NUM][MAX_NUM];
//
//int main()
//{
//	cin >> n;
//	cin >> k;
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = ROAD;
//		}
//	}
//
//
//	for (int i = 0; i < k; i++)
//	{
//		cin >> a >> b;
//		arr[b][a] = APPLE;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}