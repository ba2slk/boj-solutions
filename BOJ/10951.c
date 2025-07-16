#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a, b;
	while (1)
	{
		int t = scanf("%d %d", &a, &b);
		if (t != 2 ) break;
		printf("%d\n", a + b);
	}

	return 0;
}