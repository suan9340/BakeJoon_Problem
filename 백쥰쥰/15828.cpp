//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n, num;
//queue<int> q;
//
//int main()
//{
//	cin >> n;
//
//	while (true)
//	{
//		cin >> num;
//
//		if (num == -1)break;
//		if (num > 0)
//		{
//			if (q.size() < n)
//			{
//				q.push(num);
//			}
//		}
//		if (num == 0)
//			q.pop();
//	}
//
//	if (q.empty())
//		cout << "empty" << endl;
//	else
//		while (!q.empty())
//		{
//			cout << q.front() << ' ';
//			q.pop();
//		}
//	return 0;
//}