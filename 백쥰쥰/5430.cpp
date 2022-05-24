//#include <iostream>
//#include <algorithm>
//#include <deque>
//#include <string>
//
//// string으로 받은 걸 덱에 넣기
//// RD? 에 따라서 앞으로 뺄지 뒤로 뺄지 연산하고
//// 맨 마지막에 R을 해야하면 Reverse 아니면 그냥 출력 ㄱ
//
//using namespace std;
//
//int t, n;				// t : 테스트개수,  n : 배열에 수 개수
//string strp, strn;		// strp : 수행할 함수, strn : 배열에 들어있는 개수
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> t;
//	while (t--)
//	{
//		cin >> strp;
//		cin >> n;
//		cin >> strn;
//
//		deque<int> dq;
//
//		bool flag = true;
//		bool dir = true;
//
//		string temp = "";
//
//		// string -> deque
//		for (int i = 1; i < strn.size(); i++)
//		{
//			// 콤마나 닫는게 있으면
//			if (strn[i] == ',' || strn[i] == ']')
//			{
//				if (temp != "")
//					dq.push_back(stoi(temp));	// str -> int
//				temp = "";
//			}
//
//			// 숫자일 경우
//			else
//				temp += strn[i];
//		}
//
//		for (int i = 0; i < strp.size(); i++)
//		{
//			// 뒤집기
//			if (strp[i] == 'R')
//				dir = !dir;
//			else if (strp[i] == 'D')
//			{
//				if (dq.empty())
//				{
//					flag = false;
//					break;
//				}
//				else
//				{
//					if (dir) dq.pop_front();
//					else dq.pop_back();
//				}
//			}
//		}
//		if (!flag) cout << "error\n";
//		else
//		{
//			if (!dir) reverse(dq.begin(), dq.end());
//			cout << "[";
//			for (int i = 0; i < dq.size(); i++)
//			{
//				if (i == dq.size() - 1)
//					cout << dq[i];
//				else
//					cout << dq[i] << ",";
//			}
//			cout << "]\n";
//		}
//	}
//	return 0;
//}