#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	queue<int> Q;
	int n; cin >> n;
	string op;
	while (n--) {
		cin >> op;
		if (op == "push") {
			int x; cin >> x;
			Q.push(x);
		}

		else if (op == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << '\n';
				Q.pop();
			}
			else cout << -1 << '\n';
		}

		else if (op == "size") {
			cout << Q.size() << '\n';
		}

		else if (op == "empty") {
			cout << (int)Q.empty() << '\n';
		}

		else if (op == "front") {
			if (!Q.empty()) {
				cout << Q.front() << '\n';
			}
			else cout << -1 << '\n';
		}

		else { // back
			if (!Q.empty()) {
				cout << Q.back() << '\n';
			}
			else cout << -1 << '\n';
		}
	}

	return 0;
}