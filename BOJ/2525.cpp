#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int h, m; cin >> h >> m;
	int t; cin >> t;

	int mtmp = (m + t) % 60;
	int htmp = (h + (m + t) / 60) % 24;

	cout << htmp << ' ' << mtmp;

	return 0;
}