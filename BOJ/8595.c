#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char word[5000000];

int main()
{
	int n;
	scanf("%d", &n);
	scanf("%s", word);

	int hn = 0;
	long long sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (hn > 0)
		{
			hn *= 10;
		}

		if (word[i] >= '0' && word[i] <= '9')
		{
			hn += word[i] - '0';
		}

		if (word[i + 1] < '0' || word[i + 1] > '9' || word[i + 1] == '\0')
		{
			sum += hn;
			hn = 0;
		}

		//printf("sum:%d hn:%d \n", sum, hn);
	}

	printf("%lld", sum);



	return 0;
}