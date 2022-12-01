//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int Binar(int _n);
//
//int n, m, num;
//vector<int> v;
//
//int main()
//{
//	cin.tie(NULL); cout.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		v.push_back(num);
//	}
//
//	sort(v.begin(), v.end());
//
//	cin >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> num;
//		cout << Binar(num) << " ";
//	}
//
//	return 0;
//}
//
//int Binar(int _n)
//{
//	int low = 0, mid = 0;
//	int high = n - 1;
//
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//
//		if (v[mid] == _n) return 1;
//		else if (v[mid] > _n) high = mid - 1;
//		else low = mid + 1;
//	}
//
//	return 0;
//}