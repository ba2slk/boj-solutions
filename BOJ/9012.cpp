#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<char> st;
		int isvalid = 1;
		for (int i = 0; i < s.size(); i++) {
			if (st.empty() || (st.top() == '(' && s[i] == '(')) st.push(s[i]);
			else if (st.top() == '(' && s[i] == ')') st.pop();
			else if (st.top() == ')') {
				isvalid = 0;
				break;
			}
		}
		if (!isvalid || !st.empty()) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}