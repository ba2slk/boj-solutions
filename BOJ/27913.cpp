#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string org = "SciComLove";
	string tmp = "SciComLove";
	int n, q; cin >> n >> q;

	int a, b;
	a = n / 10 - 1;
	b = n % 10;
	for (int i = 0; i < a; i++) {
		org.append(tmp);
	}
	string sub = tmp.substr(0, b);
	if (a == -1) org = sub;
	else org.append(sub);

	int cnt = 0;
	for (int i = 0; i < org.size(); i++) {
		if ('A' <= org[i] && org[i] <= 'Z') cnt++;
	}

	for (int i = 0; i < q; i++) {
		int t; cin >> t;
		if ('A' <= org[t-1] && org[t-1] <= 'Z') {
			org[t - 1] += 32;
			cnt--;
		}
		else {
			org[t - 1] -= 32;
			cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;
}