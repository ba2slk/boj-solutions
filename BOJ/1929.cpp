#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int prime[MAX];


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n;
	cin >> m >> n;

	for (int i = 2; i <= n; i++)
	{
		prime[i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		if (prime[i])
		{
			for (int j = i * 2; j <= n; j += i)
			{
				prime[j] = 0;
			}
		}
	}
	
	for (int i = m; i <= n; i++)
	{
		if (prime[i])
		{
			cout << i << "\n";
		}
	}

	return 0;
}