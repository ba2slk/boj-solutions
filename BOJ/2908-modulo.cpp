#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b, ar, br;
	cin >> a >> b;

	ar = a % 10 * 100 + (a / 10) % 10 * 10 + a / 100;
	br = b % 10 * 100 + (b / 10) % 10 * 10 + b / 100;

	cout << (ar > br ? ar : br);

	return 0;
}