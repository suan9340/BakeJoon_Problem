//#include <iostream>
//using namespace std;
//
//int arr[9][9] = {}, maxnum = 0, x, y;
//int main()
//{
//
//	//srand((unsigned int)time(NULL));
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (maxnum < arr[i][j])
//			{
//				maxnum = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//
//	cout << maxnum << endl << x + 1 << " " << y + 1;
//}