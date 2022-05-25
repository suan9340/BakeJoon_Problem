//#include <iostream>	
//#include <vector>
//using namespace std;
//
//int n, total, vn;
//vector<int> num;
//int main()
//{
//	for (int i = 0; i < 8; i++)
//	{
//		cin >> vn;
//		num.push_back(vn);
//	}
//
//	if (num[0] == 1)
//	{
//		for (int i = 1; i <= 8; i++)
//		{
//			if (num[i - 1] != i)
//			{
//				n++;
//				break;
//			}
//		}
//
//		if (n == 0)
//		{
//			cout << "ascending";
//			return 0;
//		}
//		else
//		{
//			cout << "mixed";
//			return 0;
//		}
//	}
//	else
//	{
//		total = 8;
//		for (int i = 0; i < 8; i++)
//		{
//			if (num[i] != total)
//			{
//				n++;
//				break;
//			}
//			--total;
//		}
//
//		if (n == 0)
//		{
//			cout << "descending";
//			return 0;
//		}
//		else
//		{
//			cout << "mixed";
//			return 0;
//		}
//	}
//
//	return 0;
//}