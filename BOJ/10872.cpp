#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	long long rslt = 1;
	for (int i = n; i >= 1; i--)
	{
		rslt *= i;
	}

	cout << rslt;

	return 0;
}