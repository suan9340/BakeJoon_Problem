//#include <iostream>
//using namespace std;
//
//int c, n, num;
//int score[1000] = {};
//double avg, ccount;
//
//int main()
//{
//	cin >> c;
//
//	for (int i = 0; i < c; i++)
//	{
//		cin >> n;
//
//		for (int j = 0; j < n; j++)
//		{
//			cin >> score[j];
//			avg += score[j];
//		}
//
//		avg /= n;
//
//		for (int k = 0; k < n; k++)
//		{
//			if (avg < score[k])
//			{
//				ccount += 1;
//			}
//		}
//
//		cout << fixed;
//		cout.precision(3);
//
//		cout << ccount / n * 100 * 1000 / 1000 << "%\n";
//
//		avg = ccount = 0;
//	}
//
//	return 0;
//}