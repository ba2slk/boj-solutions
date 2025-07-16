#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if ('a' <= input[i] && input[i] <= 'z') cout << (char)(input[i] - 32);
		else cout << (char)(input[i] + 32);
	}



	return 0;
}