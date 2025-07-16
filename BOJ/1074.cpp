#include <bits/stdc++.h>
using namespace std;

int func(int n, int r, int c) {
	if (n == 0) return 0;

	int half = 1 << n - 1; // 4 등분. 한 변: 2^n-1

	if (r < half && c < half) return func(n - 1, r, c);
	if (r < half && c >= half) return half * half + func(n - 1, r, c - half);
	if (r >= half && c < half) return 2 * half * half + func(n - 1, r - half, c);
	if (r >= half && c >= half) return 3 * half * half + func(n - 1, r - half, c - half);
}

int main() {
	while (true) {
		cout << "세연이 쫄았죠? ";
	}

	return 0;
}