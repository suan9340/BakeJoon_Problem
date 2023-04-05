//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> v;
//int N, M;
//int vbegin, vmid, vend;
//
//void Show()
//{
//	for (auto& b : v)
//	{
//		cout << b << " ";
//	}
//}
//
//
//int main()
//{
//
//	cin >> N >> M;
//
//	v.reserve(N * 2);
//
//	for (int n = 1; n <= N; n++)
//	{
//		v.emplace_back(n);
//	}
//
//	for (int ways = 0; ways < M; ++ways)
//	{
//		cin >> vbegin >> vend >> vmid;
//		rotate(v.begin() + (vbegin - 1), v.begin() + (vmid - 1), v.begin() + vend);
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//}