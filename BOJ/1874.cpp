#include <bits/stdc++.h>
using namespace std;

vector<char> rslt;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; cin >> n;
	stack<int> st;
	int input;
	int v = 1;
	while(n--)
	{
		cin >> input;
		while (v <= input) {
			st.push(v++);
			rslt.push_back('+');
		}

		if (!st.empty() && st.top() == input) {
			st.pop();
			rslt.push_back('-');
		}

		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < rslt.size(); i++)
	{
		cout << rslt[i] << '\n';
	}

	return 0;
}