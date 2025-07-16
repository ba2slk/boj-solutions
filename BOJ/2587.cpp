#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[5];
	int sum = 0;
	int avg = 0;
	int mid = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	avg = sum / 5;
	sort(arr, arr + 5);
	mid = arr[2];

	cout << avg << '\n' << mid;


	return 0;
}