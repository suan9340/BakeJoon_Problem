//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<pair<int, string>> info;
//
//bool compare(pair<int, string> a, pair<int, string> b);
//int n, age;
//string name;
//
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> age;
//		cin >> name;
//		info.push_back({ age,name });
//	}
//
//	stable_sort(info.begin(), info.end(), compare);
//
//	for (int i = 0; i < info.size(); i++)
//	{
//		cout << info[i].first << " " << info[i].second << "\n";
//	}
//
//	return 0;
//}
//
//bool compare(pair<int, string> a, pair<int, string> b)
//{
//	return a.first < b.first;
//}