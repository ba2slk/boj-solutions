#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);


	string stn;
	while (1) {
		getline(cin, stn);
		if (stn == ".") {
			break;
		}

		stack<char> st;
		int bal = 1;
		for (int i = 0; i < stn.size(); i++) {
			if (stn[i] == '(' || stn[i] == '[') {
				st.push(stn[i]);
			}

			else if (stn[i] == ')' || stn[i] == ']') {
				if (st.empty()) {
					bal = 0;
				}

				else {
					char top = st.top();
					st.pop();
					if ((stn[i] == ')' && top != '(') || (stn[i] == ']' && top != '[')) {
						bal = 0;
						break;
					}
				}
			}
		}
		if (!st.empty()) bal = 0;

		if (bal) cout << "yes\n";
		else cout << "no\n";
	}


	return 0;
}