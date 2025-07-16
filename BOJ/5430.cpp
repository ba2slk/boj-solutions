#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;

	deque<int> org;

	string op;
	int num;
	string items;

	while (t--) {
		cin >> op >> num >> items;

		// parsing
		int val = 0;
		for (int i = 1; i + 1 < items.size(); i++) {
			if (items[i] == ',') {
				org.push_back(val);
				val = 0;
			}
			else {
				val = val * 10 + (items[i] - '0');
			}
		}
		if (val != 0) org.push_back(val);

		// 함수 구현
		int iserror = 0;
		int rev = 1;
		for (int i = 0; i < op.size(); i++) {
			if (op[i] == 'R') {
				rev *= -1; // reverse 상태 토글
			}

			else { // 'D'
				if (org.empty()) {
					iserror = 1;
				}

				else {
					if (rev > 0) org.pop_front();
					else org.pop_back();
				}
			}
		}

		if (iserror) {
			cout << "error" << '\n';
		}

		else {
			cout << '[';
			if (rev > 0) {
				for (int i = 0; i < org.size(); i++) {
					cout << org[i];
					if (i + 1 < org.size()) cout << ',';
				}
			}
			else {
				for (int i = org.size() - 1; i >= 0; i--) {
					cout << org[i];
					if (i - 1 >= 0) cout << ',';
				}
			}
			cout << "]\n";
		}
		org.clear(); // 덱 초기화
	}
	return 0;
}