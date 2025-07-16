#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int cnt = 0;
	while (n--) {
		int valid = 0;
		string str; cin >> str;
		stack<char> st;
		for (auto a : str) {
			if (st.empty()) st.push(a);
			else {
				char top = st.top();
				if (a == top) {
					st.pop();
					valid = 1;
				}
				else st.push(a);
			}
		}
		if (st.empty() && valid) cnt++;
	}

	cout << cnt;

	return 0;
}