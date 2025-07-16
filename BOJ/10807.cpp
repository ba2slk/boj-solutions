#include <bits/stdc++.h>
using namespace std;

vector<int> num;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	int cnt = 0;
	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		num.push_back(tmp);
	}

	cin >> tmp;

	for (int i = 0; i < n; i++)
	{
		if (tmp == num[i])
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}