#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k; cin >> n >> k;
	queue<int> Q;
	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}

	cout << '<';
	int cnt = 1;
	while (!Q.empty()) {
		if (cnt == k) {
			int tmp = Q.front();
			cout << tmp;
			Q.pop();
			cnt = 1;
			if (!Q.size()) {
				cout << ", ";
			}
		}

		else {
			int tmp = Q.front();
			Q.pop();
			Q.push(tmp);
			cnt++;
		}

	}
	cout << '>';

	return 0;
}