#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502] =
{ {1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} };
bool vis[502][502]; // 방문한 칸 표시.
int n = 7, m = 10; // n: 행, m: 열
int dx[4] = { 1, 0, -1, 0 }; // (x, y)로 하우상좌 순서로 확인할 거임.
int dy[4] = { 0, 1, 0, -1 }; // 어떻게 쓰든 상관은 없음.

int ain() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	queue<pair<int, int>> Q; // bfs를 위해서 좌표가 담긴 pair을 원소로 하는 Q를 만들어 줌.
	vis[0][0] = 1; // 첫 번째 칸에 방문한 것을 명시
	Q.push({ 0, 0 }); // 해당 칸을 큐에 넣음.
	while (!Q.empty()) { // Q가 비면 루프 종료
		pair<int, int> cur = Q.front(); Q.pop(); // front가 방문의 시작점이 됨.
		cout << '(' << cur.X << cur.Y << ") -> ";
		for (int dir = 0; dir < 4; dir++) { // 4 방향을 돌면서 큐에 담을 거임.
			int nx = cur.X + dx[dir]; // 새로운 x, y 좌표
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 인덱스 범위 벗어나지는 않았는지 반드시 먼저 확인해야 함.
			if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 해당 좌표가 1이 아니면(못 가는 곳이면) 무시
			vis[nx][ny] = 1; // 큐에 넣을 때 방문했다고 표시함.
			Q.push({ nx, ny }); // 큐에 새로운 좌표들을 push함.
		}
	}

	return 0;
}