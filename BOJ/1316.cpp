#include <bits/stdc++.h>
using namespace std;

bool alpha[30];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; cin >> t;
	string input;
	int cnt = 0;
	while (t--) {
		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			if (alpha[input[i] - 'a'] > 0) break;
			else alpha[input[i] - 'a']++;
		}
		
	}

	return 0;
}