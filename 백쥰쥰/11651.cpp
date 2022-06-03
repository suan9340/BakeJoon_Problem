//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<pair<int, int>> v;
//int cnt, a, b;
//
//bool Compare(pair<int, int> a, pair<int, int> b);
//
//int main()
//{
//	cin >> cnt;
//
//	for (int i = 0; i < cnt; i++)
//	{
//		cin >> a >> b;
//		v.push_back({ a,b });
//	}
//
//	sort(v.begin(), v.end(), Compare);
//
//	for (int i = 0; i < cnt; i++)
//		cout << v[i].first << " " << v[i].second << "\n";
//
//	return 0;
//}
//
//bool Compare(pair<int, int> a, pair<int, int> b)
//{
//	if (a.second == b.second)
//		return a.first < b.first;
//	else
//		return a.second < b.second;
//}