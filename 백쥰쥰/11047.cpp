//#include <iostream>	
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, k, input, cnt;
//vector<int> v;
//
//int main()
//{
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		v.push_back(input);
//	}
//
//	sort(v.begin(), v.end(), greater<>());
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		while (k - v[i] >= 0)
//		{
//			cnt++;
//			k -= v[i];
//		}
//	}
//
//	cout << cnt;
//
//	return 0;
//}