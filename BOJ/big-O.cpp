#include <bits/stdc++.h>
using namespace std;

int func1(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) // O(n)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	return sum;
}

int func2(int arr[], int n) // O(n^2)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == 100)
			{
				return 1;
			}
		}
	}

	return 0;
}

int func2_1(int arr[], int n)// O(n)
{
	return 0;
}

int func3(int n)
{
	for (int i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return 1;
		}
	}
	return 0;
}

int func4(int n) // O(lgN)
{
	int i = 1;
	for (; 2 * i <= n; i *= 2)
		;

	return i;
}

int main()
{

	int n;
	int num;
	cin >> n;

	/*
	int arr[1001];
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[i] = num;
	}
	*/

	//cout << func1(n);
	//cout << func2(arr, n);
	//cout << func2_1(arr, n);
	//cout << func3(n);
	cout << func4(n);

	return 0;
}