//#include <iostream>
//#include <vector>
//#include <stack>	
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//string input;
//string boom;
//stack<char> s;
//int num;
//bool isCnt = false;
//
//int main()
//{
//	cin >> input;
//	cin >> boom;
//
//	while (input.find(boom) != std::string::npos)
//	{
//		num = 0;
//		isCnt = false;
//
//		for (int i = 0; i < input.length(); i++)		// ���� stack�� ũ�⸸ŭ �ݺ��Ͽ� ����
//		{
//			if (input[i] == boom[0] && num == 0)		// ��ź ù��° ���ڿ� ����, 0��°���
//			{
//				for (int j = i; j < boom.length(); j++)
//				{
//					if (input[j] != boom[j])			// �� ���ڶ� �ٸ��ٸ� ����ġ
//					{
//						isCnt = false;
//					}
//				}
//
//				if (isCnt)
//				{
//
//				}
//			}
//			else
//			{
//				s.push(input[i]);
//			}
//		}
//	}
//
//
//
//	/*if (input.find(boom) == std::string::npos)
//	{
//		cout << "FRULA\n";
//		return 0;
//	}
//	else
//	{
//		cout << boom.length();
//		return 0;
//	}*/
//
//	return 0;
//}