#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	stack<int> s;
	int tmp;
	string op;
	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op == "push") {
			cin >> tmp;
			s.push(tmp);
		}

		else if (!op.compare("pop")) {
			if (s.empty()) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (!op.compare("size")) {
			cout << s.size() << '\n';
		}

		else if (!op.compare("empty")) {
			/*i
			if (s.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
			*/
			cout << (int)s.empty() << '\n';
		}

		else { // top
			if (s.empty()) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
			}
		}
	}

	return 0;
}