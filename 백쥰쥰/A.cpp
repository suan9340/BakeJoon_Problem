//#include <iostream>	
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, a, cnt, ft;
//vector<int> v;
//
//int main()
//{
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		if (a > 1440)
//		{
//			cout << "-1";
//			return -1;
//		}
//		v.push_back(a);
//	}
//
//	if (v.size() == 1)
//	{
//		cout << v[0];
//		return 0;
//	}
//	sort(v.begin(), v.end(), greater<>());
//
//	while (true)
//	{
//		if (v[0] == 0 && v[1] == 0) break;
//		if (v[0] != 0 && v[1] == 0)
//		{
//			cnt += v[0];
//			v[0] = 0;
//		}
//
//		int n = 0;
//		cnt += v[1];
//
//		n = v[0] - v[1];
//
//		v[0] = n;
//		v[1] = 0;
//
//
//
//		sort(v.begin(), v.end(), greater<>());
//	}
//	cout << cnt;
//	return 0;
//}