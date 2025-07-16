#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

queue<pair<int, bool>> q;
vector<int> pv;

bool compare(int a, int b) {
	return b < a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n, target; cin >> n >> target;
		for (int i = 0; i < n; i++) {
			int priority; cin >> priority;
			bool isTarget = false;
			if (i == target) isTarget = true;
			q.push({ priority, isTarget });
			pv.push_back(priority);
		}
		sort(pv.begin(), pv.end(), compare);
		int currentP = 0;
		int ans = 0;
		bool isTargetPrinted = false;
		while (!isTargetPrinted) {
			auto cur = q.front();
			if (cur.first == pv[currentP]) {
				if (cur.second == true) {
					isTargetPrinted = true;
				}
				else {
					if (!q.empty())	q.pop();
					currentP++;
				}
				ans++;
			}
			else {
				q.push(cur);
				if (!q.empty()) q.pop();
			}
		}
		cout << ans << '\n';
		while (!q.empty()) q.pop();
		pv.clear();
	}

	return 0;
}