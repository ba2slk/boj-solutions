#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[302][302];
int dist[302][302];
int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 }; // 나이트가 이동할 수 있는 방향들
int dy[8] = { 1, -1, 2, -2, 2, -2, 1, -1 };


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	queue<pair<int, int>> Q;
	int t; cin >> t;
	while (t--) {
		int l; cin >> l;
		int sx, sy; cin >> sx >> sy; // 시작 인덱스
		int ex, ey; cin >> ex >> ey; // 도착 인덱스

		for (int i = 0; i < l; i++) { // 배열 초기화
			fill(dist[i], dist[i] + l, -1);
		}

		dist[sx][sy] = 0; // 시작점~시작점 거리 0
		Q.push({ sx, sy }); // 큐에 push
		while (!Q.empty()) { // ❗BFS
			auto cur = Q.front(); Q.pop();
			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
				if (dist[nx][ny] >= 0) continue;
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
		}

		// dist배열에서 도착 칸의 인덱스에 담긴 값을 찾으면 됨.
		/*
		int ans = 0;
		int flag = 0;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < l; j++) {
				if (i == ex && j == ey) {
					ans = dist[i][j];
					flag = 1;
					break;
				}
			}
			if (flag) break;
		}
		*/ 
		cout << dist[ex][ey] << '\n';
	}



	return 0;
}