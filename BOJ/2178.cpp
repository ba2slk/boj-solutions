#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int mz[102][102];
int dist[102][102];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < m; j++) {
			mz[i][j] = input[j] - '0';
		}
	}
	for (int i = 0; i < n; i++) fill(dist[i], dist[i] + m, -1);
	queue<pair<int, int>> Q;
	dist[0][0] = 0;
	Q.push({ 0, 0 });
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop(); 
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (mz[nx][ny] != 1 || dist[nx][ny] >= 0) continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}
	cout << dist[n - 1][m - 1] + 1;

	return 0;
}