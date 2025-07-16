#include <bits/stdc++.h>
using namespace std;

int main()
{

	int arr[3];
	int n;

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	int max;
	int maxIndex;

	for (int i = 2; i >= 0; i--)
	{
		max = 0;
		for (int j = 0; j <= i ; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
				maxIndex = j;
			}
		}

		int temp = arr[i];
		arr[i] = max;
		arr[maxIndex] = temp;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}