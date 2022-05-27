//#include <iostream>	
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//string s;
//vector<int> v(26);
//int imax, cnt, target;
//
//int main()
//{
//	cin >> s;
//	transform(s.begin(), s.end(), s.begin(), (int(*)(int))toupper);
//
//	for (int i = 0; i < s.size(); i++)
//	{
//		v[s[i] - 'A']++;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (imax < v[i])
//		{
//			imax = v[i];
//			target = i;
//			cnt = 0;
//		}
//		if (imax == v[i])
//			cnt++;
//	}
//
//	if (cnt > 1)
//		cout << "?";
//	else cout << (char)(target + 'A');
//
//
//	return 0;
//}