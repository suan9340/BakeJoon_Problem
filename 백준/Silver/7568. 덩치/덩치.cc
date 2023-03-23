#include <iostream>
#include <vector>	
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;

int people_num, weight, height, total = 1;

int main()
{
	cin >> people_num;

	for (int i = 0; i < people_num; i++)
	{
		cin >> weight >> height;
		v.push_back({ weight,height });
	}

	for (int i = 0; i < people_num; i++)
	{
		for (int j = 0; j < people_num; j++)
		{
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				total++;
		}
		cout << total << " ";
		total = 1;
	}
	return 0;
}