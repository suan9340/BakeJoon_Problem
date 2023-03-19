#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int vn, num;
int n, vv;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
	}
	cin >> vv;

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == vv)
		{
			num++;
		}
	}

	cout << num;
	return 0;
}