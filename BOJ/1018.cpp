#include <bits/stdc++.h>
using namespace std;

string board[52];

int func(int x, int y) {
	int cnt = 0;
	int cnt2 = 0;
	char start = board[x][y];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char tmp = board[x + i][y + j];
			if (i % 2 == 0 && j % 2 != 0) {
				if (tmp == start) cnt++;
				else cnt2++;
			}

			else if (i % 2 == 0 && j % 2 == 0) {
				if (tmp != start) cnt++;
				else cnt2++;
			}

			else if (i % 2 != 0 && j % 2 != 0) {
				if (tmp != start) cnt++;
				else cnt2++;
			}

			else {
				if (tmp == start) cnt++;
				else cnt2++;
			}
		}
	}

	int ret = min(cnt, cnt2);

	return ret;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	int ans = 100;
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			char cur = board[i][j];
			int tmp = func(i, j);
			if (tmp < ans) ans = tmp;
		}
	}

	cout << ans;

	return 0;
}