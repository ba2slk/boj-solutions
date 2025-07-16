#include <bits/stdc++.h>
using namespace std;

void prt(int n) {
	if (n == 0) return;
	cout << n << ' ';
	prt(n-1);
}

int add(int n) {
	if (n == 0) return 0;
	return n + add(n - 1);
}

int ain() {

	prt(10);
	cout << '\n';
	cout << add(10);

	return 0;
}