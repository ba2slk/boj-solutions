#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);

	char num[101];
	scanf("%s", num);

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += num[i] - '0';
	}

	printf("%d", sum);

	return 0;
}