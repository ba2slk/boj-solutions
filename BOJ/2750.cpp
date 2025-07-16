#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	string t;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t[0] - '0');
	}

	sort(v, v.size());

	return 0;
}