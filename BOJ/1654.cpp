#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int k, n; cin >> k >> n;
	for (int i = 0; i < k; i++) {
		 int num; cin >> num;
		v.push_back(num);
	}

	int minLen = *min_element(v.begin(), v.end());

	while (true) {
		long long sum = 0;
		bool flag = false;
		for (int i = 0; i < v.size(); i++) {
			sum += v[i] / minLen;
			if (sum >= n) flag = true;
		}
		if (flag) break;
		minLen--;
		if (minLen == 0) {
			cout << 1;
			return 0;
		}
	}
	cout << minLen;

	return 0;
}