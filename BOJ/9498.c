#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int score;
	scanf("%d", &score);

	if (score <= 100 && score >= 90)
	{
		printf("A");
	}

	else if (score <= 89 && score >= 80)
	{
		printf("B");
	}

	else if (score <= 79 && score >= 70)
	{
		printf("C");
	}

	else if (score <= 69 && score >= 60)
	{
		printf("D");
	}

	else
	{
		printf("F");
	}

	return 0;
}