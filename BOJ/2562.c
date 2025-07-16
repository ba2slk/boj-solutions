#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x, max, idx;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &x);
		if (i == 0)
		{
			max = x;
			idx = i + 1;
		}

		if (x > max)
		{
			max = x;
			idx = i + 1;
		}
	}

	printf("%d\n%d", max, idx);

	return 0;
}