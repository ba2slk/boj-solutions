#include <bits/stdc++.h>
#define X first
#define Y second
#define MAX 10002
using namespace std;

int dist[MAX][MAX];
queue<pair<int, int>> D;
int dx[5] = { 1, -1, 0, 0, 1 };
int dy[5] = { 0, 0, 1, -1, 1 };
int w, h, n;

void resetDist() {
    for (int i = 1; i <= w; i++) {
        fill(dist[i], dist[i] + h + 1, -1);
    }
}

int bfs(pair<int, int> start, pair<int, int> end) {
    resetDist();
    queue<pair<int, int>> Q;
    Q.push(start);
    dist[start.X][start.Y] = 0;

    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 5; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 1 || nx > w || ny < 1 || ny > h) continue;
            if (dist[nx][ny] >= 0) continue;

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({ nx, ny });

            if (nx == end.X && ny == end.Y) {
                while (!Q.empty()) Q.pop();
                return dist[nx][ny];
            }
        }
    }
    return -1; // should not reach here if the input is valid
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    cin >> w >> h >> n;

    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = { y, x };
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        cnt += bfs(points[i], points[i + 1]);
    }

    cout << cnt;

    return 0;
}
