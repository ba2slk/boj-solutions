#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	int max, min, x;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (i == 0)
		{
			max = x;
			min = x;
		}

		if (x > max)
		{
			max = x;
		}

		if (x < min)
		{
			min = x;
		}
	}
	printf("%d %d", min, max);

	return 0;
}