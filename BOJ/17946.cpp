#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n;

	int max_piece;
	int to_give;
	int max_to_eat;

	for (int i = 0; i < n; i++)
	{
		cin >> k;
		to_give = 0;
		max_to_eat = 0;
		max_piece = (2 + ((1 + k) * k)) / 2;
		to_give = ((1 + k) * k) / 2;
		max_to_eat = max_piece - to_give;

		cout << max_to_eat << "\n";
	}

	return 0;
}