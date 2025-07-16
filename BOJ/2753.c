#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n % 4 == 0)
	{
		if ((n % 100 != 0) || (n % 400 == 0))
		{
			printf("1");
		}

		else
		{
			printf("0");
		}
	}

	else
	{
		printf("0");
	}

	return 0;
}