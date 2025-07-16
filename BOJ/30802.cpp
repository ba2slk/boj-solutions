#include <bits/stdc++.h>
using namespace std;

int arr[6];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	int t, p; cin >> t >> p;

	int tsum = 0;
	for (int i = 0; i < 6; i++) {
		if (arr[i] == 0) continue;
		if (arr[i] % t != 0) tsum += (arr[i] / t) + 1;
		else tsum += arr[i] / t;
	}

	int pgroup = n / p;
	int pone = n % p;

	cout << tsum << '\n';
	cout << pgroup << ' ' << pone;

	return 0;
}