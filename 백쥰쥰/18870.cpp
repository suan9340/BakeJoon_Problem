#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;
vector<int> sv;
int  n, low, input;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
		sv.push_back(input);
	}

	sort(sv.begin(), sv.end());
	sv.erase(unique(sv.begin(), sv.end()), sv.end());

	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(sv.begin(), sv.end(), v[i]);
		cout << it - sv.begin() << " ";
	}

	return 0;
}