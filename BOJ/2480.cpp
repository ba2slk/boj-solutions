#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c && c == a)
	{
		cout << 10000 + a * 1000;
	}

	else if (a == b && a != c)
	{
		cout << 1000 + a * 100;
	}
	
	else if (b == c && b != a)
	{
		cout << 1000 + b * 100;
	}
		
	else if (c == a && c != b)
	{
		cout << 1000 + c * 100;
	}

	else if (a != b && b != c && c != a)
	{
		int max = a > b ? a : b;
		max = max > c ? max : c;

		cout << max * 100;
	}

	return 0;
}