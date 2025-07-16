#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100002

int arr[MAX_SIZE];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k; cin >> n >> k;
	for (int i = 2; i < n; i++) {
		arr[i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i]) {
			for (int j = i; j <= n; j += i) {
				arr[j] = 0;
			}
		}
	}

	return 0;
}