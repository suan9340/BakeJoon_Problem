//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int num;
//vector<string> sv;
//string vn;
//
//bool Compare(string _a, string _b);
//
//int main()
//{
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> vn;
//		if (find(sv.begin(), sv.end(), vn) == sv.end())
//			sv.push_back(vn);
//	}
//	sort(sv.begin(), sv.end(), Compare);
//
//	for (int i = 0; i < sv.size(); i++)
//	{
//		cout << sv[i] << "\n";
//	}
//
//	return 0;
//}
//
//bool Compare(string _a, string _b)
//{
//	if (_a.length() == _b.length())
//		return _a < _b;
//	return _a.length() < _b.length();
//}