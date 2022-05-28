//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, m, vn, imax, total;
//vector<int> nums;
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> vn;
//		nums.push_back(vn);
//	}
//
//	for (int i = 0; i < n - 2; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			for (int z = j + 1; z < n; z++)
//			{
//				total = nums[i] + nums[j] + nums[z];
//				if (imax <= total && m >= total)
//					imax = total;
//			}
//		}
//	}
//
//	cout << imax;
//	return 0;
//}