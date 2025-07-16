#include <bits/stdc++.h>
using namespace std;

vector<int> score(1001);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < n; i++)
	{	
		sum += (double) score[i] / max * 100;
	}

	cout.precision(16);
	cout << sum / (double)n;



	return 0;
}