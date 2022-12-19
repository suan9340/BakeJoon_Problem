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
//		for (int i = 0; i < input.length(); i++)		// 현재 stack의 크기만큼 반복하여 돌기
//		{
//			if (input[i] == boom[0] && num == 0)		// 폭탄 첫번째 글자와 같고, 0번째라면
//			{
//				for (int j = i; j < boom.length(); j++)
//				{
//					if (input[j] != boom[j])			// 한 글자라도 다르다면 불일치
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