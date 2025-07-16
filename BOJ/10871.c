#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, x;
	scanf("%d %d", &n, &x);

	int a;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < x)
		{
			printf("%d ", a);
		}
	}



	return 0;
}