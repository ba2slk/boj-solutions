#include <bits/stdc++.h>
using namespace std;

int board[200001];
int dist[200001];
int dx[3] = { 1, -1, 2 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	fill(dist, dist + 100001, -1);

	int n, k; cin >> n >> k;
	queue<int> Q;
	Q.push(n);
	dist[n] = 0;
	while (dist[k] == -1) {
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 3; dir++) {
			int nx = -1;
			if (dx[dir] == 2) nx = cur * 2;
			else nx = cur + dx[dir];
			if (nx < 0 || nx >= 100001) continue;
			if (dist[nx] >= 0) continue;
			dist[nx] = dist[cur] + 1;
			Q.push(nx);
		}
	}
	cout << dist[k];

	return 0;
}