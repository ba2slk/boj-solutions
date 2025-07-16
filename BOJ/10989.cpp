#include <bits/stdc++.h>
using namespace std;

int cnt[10002]; // 개수 카운트

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int num; cin >> num;
		cnt[num]++;
	}

	for (int i = 1; i <= 10001; i++) {
		while (cnt[i] != 0) {
			cout << i << '\n';
			cnt[i]--;
		}
	}
	return 0;
}