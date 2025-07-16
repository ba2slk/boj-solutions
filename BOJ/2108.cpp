#include <bits/stdc++.h>
using namespace std;
#define HASH_SIZE 4000
#define ARRAY_SIZE HASH_SIZE * 2 + 1

int arr[500002];
int cnt[ARRAY_SIZE];
int frqArr[ARRAY_SIZE];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		cnt[num + HASH_SIZE]++;
		arr[i] = num;
	}

	sort(arr, arr + n);

	double avg = 0;
	for (int i = 0; i < n; i++) {
		avg += arr[i];
	}
	avg /= n;
	avg = round(avg);

	int mid = arr[(n - 1) / 2];

	int mxcnt = cnt[arr[0] - HASH_SIZE];
	int j = 0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (cnt[i] > mxcnt) {
			mxcnt = cnt[i];
			j = 0;
			frqArr[j] = i - HASH_SIZE;
		}
		else if (cnt[i] == mxcnt) {
			j++;
			frqArr[j] = i - HASH_SIZE;
		}
	}

	int range = arr[n - 1] - arr[0];

	if (avg == -0) cout << 0 << '\n';
	else cout << avg << '\n';
	cout << mid << '\n';
	if (j > 0) cout << frqArr[1] << '\n';
	else cout << frqArr[0] << '\n';
	cout << range << '\n';


	return 0;
}