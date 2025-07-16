#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	queue<int> cards;
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cards.push(i);
	}

	int nextcard;
	while (1) {
		if (cards.size() == 1) {
			cout << cards.front();
			break;
		}

		if (!cards.empty()) {
			cards.pop();
			nextcard = cards.front();
			cards.pop();
			cards.push(nextcard);
		}
	}

	return 0;
}