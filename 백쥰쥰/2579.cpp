//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int stairnum, staircnt;
//vector<int> vstair;
//vector<int> vdp;
//
//int main()
//{
//	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	cin >> stairnum;
//	vdp.resize(stairnum);
//
//	for (int i = 0; i < stairnum; i++)
//	{
//		cin >> staircnt;
//		vstair.push_back(staircnt);
//	}
//
//	vdp[0] = vstair[0];
//	vdp[1] = max(vstair[1], vstair[0] + vstair[1]);
//	vdp[2] = max(vstair[1] + vstair[2], vstair[0] + vstair[2]);
//
//	for (int i = 3; i < stairnum; i++)
//	{
//		vdp[i] = max(vdp[i - 2] + vstair[i], vdp[i - 3] + vstair[i - 1] + vstair[i]);
//	}
//
//	cout << vdp[stairnum - 1];
//	return 0;
//}