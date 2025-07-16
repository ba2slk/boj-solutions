#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;
int vis1[200]; // 행(인덱스: y좌표)
int vis2[200]; // 왼쪽 아래, 오른쪽 위 대각선
int vis3[200]; // 왼쪽 위, 오른쪽 아래 대각선

void func(int cur) { // cur은 n번째 행.
	if (cur == n) {
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (vis1[i] || vis2[i + cur] || vis3[i - cur + n - 1]) continue;
		vis1[i] = 1;
		vis2[i + cur] = 1;
		vis3[i - cur + n - 1] = 1;
		func(cur + 1);
		vis1[i] = 0;
		vis2[i + cur] = 0;
		vis3[i - cur + n - 1] = 0;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	func(0);
	cout << cnt;
	return 0;
}