#include <bits/stdc++.h>
using namespace std;

int arr[2]; // 2의 개수, 5의 개수

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp % 2 == 0) { // 2 개수 구하기
			arr[0]++;
			tmp /= 2;
		}
		while (tmp % 5 == 0) { // 5 개수 구하기
			arr[1]++;
			tmp /= 5;
		}
	}

	int cnt = min(arr[0], arr[1]);
	cout << cnt;


	return 0;
}