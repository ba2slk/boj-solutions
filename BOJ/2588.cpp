#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	int a, b, c;
	int tmp = m;
	a = n * (m % 10);
	m /= 10;
	b = n * (m % 10);
	m /= 10;
	c = n * m;
	
	cout << a << '\n' << b << '\n' << c << '\n' << n * tmp;
		
	return 0;
}