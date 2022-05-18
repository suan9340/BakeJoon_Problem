#include <iostream>
//#include<vector>
//#include <queue>
//using namespace std;
//
//int num, inputvalue;
//string sn;
//queue<int> qn;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> num;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> sn;
//		if (sn == "push")
//		{
//			cin >> inputvalue;
//
//			qn.push(inputvalue);
//		}
//		else if (sn == "pop")
//		{
//			if (qn.empty())
//				cout << "-1";
//			else
//			{
//				cout << qn.front();
//				qn.pop();
//			}
//			cout << "\n";
//		}
//		else if (sn == "size")
//		{
//			cout << qn.size();
//			cout << "\n";
//		}
//		else if (sn == "empty")
//		{
//			if (qn.empty())
//				cout << "1";
//			else
//				cout << "0";
//			cout << "\n";
//		}
//		else if (sn == "front")
//		{
//			if (qn.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << qn.front();
//				cout << "\n";
//			}
//		}
//		else if (sn == "back")
//		{
//			if (qn.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << qn.back();
//				cout << "\n";
//			}
//		}
//	}
//	return 0;
//
//}