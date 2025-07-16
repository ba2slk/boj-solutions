#include <iostream>
using namespace std;

int gcd(int x, int y) { // 유클리드 호제법
	while (y != 0) {
		int rem = x % y;
		x = y;
		y = rem;
	}
	return x;
}

int lcm(int x, int y) { // 최소공배수
	return (x * y) / gcd(x, y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b; cin >> a >> b;
	cout << gcd(a, b) << '\n' << lcm(a, b);

	return 0;
}