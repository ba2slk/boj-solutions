#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int n, m;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0 , 0, -1, 1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	queue <pair< int, int >> Q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int cnt = 0, max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int brdth = 0;
			if (board[i][j] && !vis[i][j]) {
				cnt++;
				pair<int, int> begin;
				begin.X = i; begin.Y = j;
				vis[i][j] = 1; // 처음 방문한 칸을 vis에 추가하는 것을 생각하지 않아서 틀림.
				Q.push(begin);
				brdth++;
				while (!Q.empty()) {
					pair<int, int> cur = Q.front(); Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue;
						vis[nx][ny] = 1;
						Q.push({nx, ny});
						brdth++;
					}
				}
				if (brdth > max) max = brdth;
			}
		}
	}
	
	cout << cnt << '\n' << max;

	return 0;
}