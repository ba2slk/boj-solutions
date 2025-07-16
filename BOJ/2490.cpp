#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	/*
	int n;
	int x, front, back;

	int m = 3;
	while (m--)
	{
		n = 4;
		front = 0; 
		back = 0;

		while (n--)
		{
			cin >> x;
			if (x == 0) front++;

			else back++;
		}

		if (back == 4)
		{
			cout << 'E' << "\n";
		}

		else
		{
			int ans = front + 64;
			cout << (char)ans <<"\n";
		}
	}
	*/

	int rslt, input;
	string res = "DCBAE";

	for (int i = 0; i < 3; i++)
	{
		rslt = 0;

		for (int j = 0; j < 4; j++)
		{
			cin >> input;
			rslt += input;
		}

		cout << res[rslt] << '\n';
	}

	return 0;
}