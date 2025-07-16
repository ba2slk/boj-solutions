#include <bits/stdc++.h>
using namespace std;

int dx[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
int dy[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
int dz[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };

int arr[3];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 4; i++) {
			int n; cin >> n;
			arr[0] += dx[n];
			arr[1] += dy[n];
			arr[2] += dz[n];
		}
		int cnt = 0;
		for (int i = 0; i < 3; i++) {
			if (arr[i] == 0 || arr[i] == 4) cnt++;
		}
		if (cnt == 1) cout << "YES\n";
		else cout << "NO\n";
		fill(arr, arr + 3, 0);
	}

	return 0;
}