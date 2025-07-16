#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[1002][1002];
int fire[1002][1002];
int hoon[1002][1002];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int r, c; cin >> r >> c;

	queue<pair<int, int>> FQ;
	queue<pair<int, int>> JQ;

	string input;
	for (int i = 0; i < r; i++) {
		cin >> input;
		for (int j = 0; j < c; j++) {
			board[i][j] = input[j];

			if (board[i][j] == 'F') {
				hoon[i][j] = -1;
				FQ.push({ i, j });
			}

			else if (board[i][j] == '.') {
				fire[i][j] = -1;
				hoon[i][j] = -1;
			}

			else if (board[i][j] == 'J') {
				fire[i][j] = -1;
				JQ.push({ i, j });
			}
		}
	}

	while (!FQ.empty()) {
		auto cur = FQ.front(); FQ.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (fire[nx][ny] >= 0) continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			FQ.push({ nx, ny });
		}
	}

	while (!JQ.empty()) {
		auto cur = JQ.front(); JQ.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) { // 범위를 벗어남 == 탈출
				cout << hoon[cur.X][cur.Y] + 1;
				return 0;
			}
			if (hoon[nx][ny] >= 0) continue; // 벽이거나 이미 거리를 아는 경우
			if (fire[nx][ny] >= 0 && fire[nx][ny] <= hoon[cur.X][cur.Y] + 1) continue;
			// -> 문제의 핵심. 일단 불의 전파 시간을 구하는 BFS를 돌린 다음. 해당 결과를 기준으로
			// 지훈이의 이동 시간에 대한 BFS를 같이 돌림. 불의 전파시간이 0이상이라는 거는 길이 뚫려있다는
			// 의미이고, 지훈이가 현재 있는 칸(cur)을 기준으로 상하좌우의 칸에 불이 전파되는 시간이랑
			// 지훈이가 처음부터 다음 칸까지 이동하는 시간을 비교해서 후자가 더 작으면 지나갈 수 있음.
			hoon[nx][ny] = hoon[cur.X][cur.Y] + 1;
			JQ.push({ nx, ny });
		}
	}
	cout << "IMPOSSIBLE";

	return 0;
}