#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int tom[1002][1002];
int vis[1002][1002]; // 익은 토마토, 상자가 없는 곳은 dist 0임.
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> m >> n;
	int cnt = 0;
	queue<pair<int, int>> Q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tom[i][j];
			if (tom[i][j] == 1) {
				Q.push({ i, j });
				cnt++;
			}
			if (tom[i][j] == 0) vis[i][j] = -1;
		}
	}

	if (cnt == n * m) {
		cout << 0;
		return 0;
	}

	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] >= 0) continue;
			vis[nx][ny] = vis[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(vis[i][j], ans);
		}
	}

	cout << ans;


	return 0;
}