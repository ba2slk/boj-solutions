#include <bits/stdc++.h>
using namespace std;


long long mod(long long a, long long b, long long c) {
	if (b == 1) return a % c; // base condition
	long long val = mod(a, b / 2, c);
	val = val * val % c;
	if (b % 2 == 0) return val;
	return val * a % c;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b, c; cin >> a >> b >> c;
	cout << mod(a, b, c);

	return 0;
}