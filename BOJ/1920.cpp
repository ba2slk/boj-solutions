#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int m; cin >> m;
	while (m--) {
		int tg; cin >> tg;
		bool flag = false;
		int start = 0;
		int end = n - 1;
		while (start <= end) {
			int mid = (start + end) / 2;
			if (tg == arr[mid]) {
				flag = true;
				break;
			}
			
			else if (tg < arr[mid]) {
				end = mid - 1;
			}

			else {
				start = mid + 1;
			}
		}

		if (flag) cout << "1\n";
		else cout << "0\n";
	}

	return 0;
}