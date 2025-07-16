#include <bits/stdc++.h>
using namespace std;

int arr[22];
int n, s;
int cnt = 0;

void func(int cur, int sum) {
	if (cur == n) { // index 범위 초과
		if (sum == s) { // 합이 s와 같으면
			cnt++; // 부분수열 개수++
		}
		return; // 그렇지 않아도 함수는 종료됨.
	}
	func(cur + 1, sum); // sum에 현재 값을 더하지 않음.
	func(cur + 1, sum + arr[cur]); // sum에 현재 값을 더함.
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} // arr 배열에 수열의 각 항을 저장함.
	func(0, 0); // index 0부터 시작, sum = 0;
	if (s == 0) cnt--;
	// 합이 0이어야 하는 경우 -> 재귀함수에서 합이 0인 공집합이 반드시 하나 생기는데, 이 경우를 제외해야 함. 
	cout << cnt;

	return 0;
}