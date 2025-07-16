#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) 
		return a.first < b.first;
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	while (n--) {
		int x, y; cin >> x >> y;
		v.push_back({ x, y });
	}

	sort(v.begin(), v.end(), compare);

	for (auto c : v) cout << c.first << ' ' << c.second << '\n';

	return 0;
}