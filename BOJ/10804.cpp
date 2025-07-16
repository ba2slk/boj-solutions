#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cards[21];
	for (int i = 1; i <= 20; i++)
	{
		cards[i] = i;
	}

	int a, b;
	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		for (int j = 0; j < (b - a + 1) / 2; j++)
		{
			swap(cards[a + j], cards[b - j]);
		}
	}

	for (int i = 1; i <= 20; i++)
	{
		cout << cards[i] << ' ';
	}



	return 0;
}