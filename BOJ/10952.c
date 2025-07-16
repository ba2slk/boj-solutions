#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a, b;

	do {
		scanf("%d %d", &a, &b);
		
		if (a != 0 && b != 0)
		{
			printf("%d\n", a + b);
		}
		
	} while (a != 0 && b != 0);

	return 0;
}