//#include <iostream>
//#include <algorithm>
//#include <deque>
//#include <string>
//
//// string���� ���� �� ���� �ֱ�
//// RD? �� ���� ������ ���� �ڷ� ���� �����ϰ�
//// �� �������� R�� �ؾ��ϸ� Reverse �ƴϸ� �׳� ��� ��
//
//using namespace std;
//
//int t, n;				// t : �׽�Ʈ����,  n : �迭�� �� ����
//string strp, strn;		// strp : ������ �Լ�, strn : �迭�� ����ִ� ����
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
//			// �޸��� �ݴ°� ������
//			if (strn[i] == ',' || strn[i] == ']')
//			{
//				if (temp != "")
//					dq.push_back(stoi(temp));	// str -> int
//				temp = "";
//			}
//
//			// ������ ���
//			else
//				temp += strn[i];
//		}
//
//		for (int i = 0; i < strp.size(); i++)
//		{
//			// ������
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