#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int r = 31;
	ll M = 1234567891;
	int L; cin >> L;
	string str; cin >> str;
	ll ans = 0;
	for (int i = 0; i < L; i++) {
		ll pow = 1;
		for (int j = 0; j < i; j++) {
			pow *= r;
			pow %= M;
		}
		ans += (str[i] - 96) * pow ;
	}

	ans %= M;

	cout << ans;
	

	return 0;
}