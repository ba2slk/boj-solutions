#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int height[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> height[i];
		sum += height[i];
	}

	int flag = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if ( i != j && sum - height[i] - height[j] == 100)
			{
				height[i] = 0;
				height[j] = 0;
				flag = 1;
				break;
			}
		}
		
		if (flag) break;
	}

	sort(height, height + 9);
	for (int i = 2; i < 9; i++)
	{
		cout << height[i] << "\n";
	}

	return 0;
}