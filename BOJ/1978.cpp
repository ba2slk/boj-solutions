#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int isPrime[MAX];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	for (int i = 2; i < MAX; i++)
	{
		isPrime[i] = 1;
	}

	for (int i = 2; i < MAX; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * 2; j < MAX; j += i)
			{
				isPrime[j] = 0;
			}
		}
	}

	int cnt = 0;
	int num;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (isPrime[num])
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}