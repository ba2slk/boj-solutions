#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string name;
	string chosen;
	int num;
	int max = 0;

	for (int i = 0; i < 7; i++)
	{
		cin >> name >> num;
		if (num > max)
		{
			chosen = name;
			max = num;
		}
	}

	cout << chosen;

	return 0;
}