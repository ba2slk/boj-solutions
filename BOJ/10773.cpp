#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int k;
	cin >> k;
	long long sum = 0;
	stack<int> s;
	int val;
	while (k--)
	{
		cin >> val;
		if (val)
		{
			s.push(val);
			sum += val;
		}

		else {
			sum -= s.top();
			s.pop();
		}
	}

	cout << sum;

	return 0;
}