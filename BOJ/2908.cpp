#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string a, b;
	cin >> a >> b;

	int flag_a = 0, lag_b = 0;
	int tempa = 0, tempb = 0;

	int digit = 100;
	for (int i = 2; i >= 0; i--)
	{
		tempa += (a[i] - '0') * digit;
		tempb += (b[i] - '0') * digit;
		digit /= 10;
	}

	int rv = tempa > tempb ? tempa : tempb;
	cout << rv;

	return 0;
}