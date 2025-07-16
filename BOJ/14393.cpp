#include <bits/stdc++.h>
using namespace std;

int org_color[4];
int goal_color[4];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string org;
	string goal;

	cin >> org >> goal;
	// r:0 g:1 b:2 y:3
	for (int i = 0; i < 10; i++)
	{
		switch (org[i])
		{
		case 'R':
			org_color[0]++;
			break;
		case 'G':
			org_color[1]++;
			break;
		case 'B':
			org_color[2]++;
			break;
		case 'Y':
			org_color[3]++;
			break;
		}

		switch (goal[i])
		{
		case 'R':
			goal_color[0]++;
			break;
		case 'G':
			goal_color[1]++;
			break;
		case 'B':
			goal_color[2]++;
			break;
		case 'Y':
			goal_color[3]++;
			break;
		}
	}

	int ans = 0;
	for (int i = 0; i < 4; i++)
	{
		int diff = org_color[i] - goal_color[i];
		ans += diff > 0 ? diff : diff * (-1);
	}

	cout << ans / 2;

	return 0;
}