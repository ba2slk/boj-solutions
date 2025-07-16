#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, time, feeY = 0, feeM = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> time;
		feeY += (time / 30 + 1) * 10;
		feeM += (time / 60 + 1) * 15;
	}

	if (feeY < feeM) cout << "Y " << feeY;
	else if (feeY == feeM) cout << "Y M " << feeY;
	else cout << "M " << feeM;

	return 0;
}