#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int x, s; cin >> x >> s;
	int flag = 0;
	while (n--) {
		int a, b; cin >> a >> b;
		if (a <= x && b > s) {
			flag = 1;
		}
	}
	if (!flag) cout << "NO";
	else cout << "YES";

	return 0;
}