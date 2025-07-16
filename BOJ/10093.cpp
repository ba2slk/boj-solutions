#include <bits/stdc++.h>
using namespace std;

long long arr[100001];


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);

	int cnt = 0;
	for (long long i = a + 1; i < b; i++)
	{
		arr[cnt++] = i;
	}

	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}