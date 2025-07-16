#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
using namespace std;

int board[10][10];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int arr[4];
vector<queue<pair<int, int>>> v(7);
int n, m;

void test() {
	cout << "\n--final board--\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 10) cout << '#' << " ";
			else cout << board[i][j] << " ";
		}
		cout << '\n';
	}
}

int detectAll(pair<int, int> cur) {
	for (int dir = 0; dir < 4; dir++) {
		int detectByDir = 0;
		int nx = cur.first + dx[dir];
		int ny = cur.second + dy[dir];
		while (board[nx][ny] == 0 || (board[nx][ny] <= 5 && board[nx][ny] >= 1)) {
			if (board[nx][ny] != 10 && board[nx][ny] == 0) {
				detectByDir++;
				board[nx][ny] = 10;
			}
			nx += dx[dir];
			ny += dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) break;
			if (board[nx][ny] == -1 || board[nx][ny] == 6) break;
		}
		arr[dir] = detectByDir;
	}
	int totalDetected = accumulate(arr, arr+4, 0);
	return totalDetected;
}

void clearArr() {
	fill(arr, arr + 4, -1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < 10; i++) {
		fill(board[i], board[i] + 10, -1);
	}
	int blindcnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 0) blindcnt++;
			else if (board[i][j] >= 1 && board[i][j] <= 5) {
				v[board[i][j]].push({ i, j });
			}
		}
	}

	int detected = 0;
	for (int i = 5; i > 0; i--) {
		while (!v[i].empty()) {
			auto cur = v[i].front(); v[i].pop();
			switch (i) {
			case 5: 
				detected += detectAll(cur);
				break;
			case 4:
				int tmpTotalDetected = detectAll(cur);
				int* minDir = min_element(arr, arr + 4);
				detected += tmpTotalDetected - *minDir;
				int dir = (minDir - arr) / sizeof(int);
				cout << "!!" << dir;
				break;
			}
		}
	}
	
	test();
	cout << "blindcnt: " << blindcnt << '\n';
	cout << "detected: " << detected << '\n';
	int ans = blindcnt - detected;
	cout << "ans: " << ans;




	return 0;
}