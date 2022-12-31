//#include <iostream>
//#include <queue>
//#include <map>
//using namespace std;
//
//priority_queue<int, vector<int>, greater<>>minq;
//priority_queue<int, vector<int>, less<>>maxq;
//map<int, int> m;
//int t, k, n;
//string input;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//		m.clear();
//		cin >> k;
//		for (int j = 0; j < k; j++)
//		{
//			cin >> input >> n;
//
//			if (input == "I")			// n 삽입
//			{
//				minq.push(n);
//				maxq.push(n);
//
//				if (m.count(n) == 0)
//				{
//					m[n] = 1;
//				}
//				else
//				{
//					m[n]++;
//				}
//			}
//			else if (input == "D")		// 값 삭제
//			{
//				if (n == 1)				// 최대값 삭제
//				{
//					while (!maxq.empty() && m[maxq.top()] == 0)
//					{
//						maxq.pop();
//					}
//
//					if (!maxq.empty())
//					{
//						m[maxq.top()]--;
//						maxq.pop();
//					}
//				}
//				else if (n == -1)		// 최소값 삭제
//				{
//					while (!minq.empty() && m[minq.top()] == 0)
//					{
//						minq.pop();
//					}
//
//					if (!minq.empty())
//					{
//						m[minq.top()]--;
//						minq.pop();
//					}
//				}
//			}
//		}
//
//
//		while (!maxq.empty() && m[maxq.top()] == 0)
//		{
//			maxq.pop();
//		}
//
//		while (!minq.empty() && m[minq.top()] == 0)
//		{
//			minq.pop();
//		}
//
//		if (maxq.empty() && minq.empty())
//		{
//			cout << "EMPTY\n";
//		}
//		else
//		{
//			cout << maxq.top() << " " << minq.top() << "\n";
//		}
//	}
//	return 0;
//}