#include <iostream>
#include <vector>

using namespace std;

int n, k;
int mi, vi;
vector<pair<int, int>> v;

int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> mi >> vi;
		v.push_back({ mi,vi });
	}
	return 0;
}