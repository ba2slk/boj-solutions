#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string w;
	cin >> w;

	int time = 0;
	/*
	for (int i = 0; i < w.size(); i++)
	{
		if (w[i] >= 'A' && w[i] <= 'C')
		{
			time += 3;
		}

		else if (w[i] >= 'D' && w[i] <= 'F')
		{
			time += 4;
		}

		else if (w[i] >= 'G' && w[i] <= 'I')
		{
			time += 5;
		}

		else if (w[i] >= 'J' && w[i] <= 'L')
		{
			time += 6;
		}

		else if (w[i] >= 'M' && w[i] <= 'O')
		{
			time += 7;
		}

		else if (w[i] >= 'P' && w[i] <= 'S')
		{
			time += 8;
		}

		else if (w[i] >= 'T' && w[i] <= 'V')
		{
			time += 9;
		}

		else if (w[i] >= 'W' && w[i] <= 'Z')
		{
			time += 10;
		}
	}
	*/

	int arr[26] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };

	for (int i = 0; i < w.size(); i++)
	{
		time += arr[w[i] - 'A'] + 1;
	}

	cout << time;

	return 0;
}