//#include <iostream>
//using namespace std;
//
//#define MAX 1000000
//
//int arr[MAX + 1]{ 0, };
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//
//	// 초기 배열 설정
//	for (int i = 2; i <= n; i++)
//		arr[i] = i;
//
//	// 2 부터 지정 수 까지 삭제
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (arr[i] == 0)
//			continue;
//
//		for (int j = i * i; j <= n; j += i)
//			arr[j] = 0;
//	}
//
//	// 배열에서 값이 0인거 뺴고다 출력
//	for (int i = m; i <= n; i++)
//	{
//		if (arr[i] != 0)
//			cout << arr[i] << '\n';
//	}
//	return 0;
//}