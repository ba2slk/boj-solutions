#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n = 7;
	int num, sum = 0, min = 100;
	while (n--)
	{
		cin >> num;
		if (num % 2 != 0) // 홀수면
		{
			sum += num; // 합하고
			if (num < min) // 최솟값인지 확인
			{
				min = num;
			}
		}
	}

	if (!sum) // 홀수가 적어도 한 개 있으면
	{
		cout << -1;

	}

	else // 홀수가 없으면
	{
		cout << sum << '\n' << min;
	}

	return 0;
}