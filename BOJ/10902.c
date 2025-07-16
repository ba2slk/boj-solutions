#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	int t, s;
	int f;

	int time[101];
	int score[101];

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &time[i], &score[i]);
	}

	int maxScore = score[1];
	int maxIndex[101];
	for (int i = 1; i <= n; i++)
	{
		maxIndex[i] = 0;
	}
	maxIndex[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		if (score[i] == maxScore)
		{
			maxIndex[i] = 1;
		}

		else if (score[i] > maxScore)
		{
			maxScore = score[i];
			for (int i = 1; i <= n; i++)
			{
				maxIndex[i] = 0;
			}
			maxIndex[i] = 1;
		}
	}

	int cnt = 0;
	int fast = 9999999;
	int fastIndex = 0;
	for (int i = 1; i <= n; i++)
	{
		if (maxIndex[i] == 1) cnt++;
	}

	if (cnt == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (maxIndex[i] == 1)
			{
				if (score[i] == 0)
				{
					printf("%d", 0);
				}

				else if (score[i] == 1 || score[i] == 4)
				{
					printf("%d", time[i] + (i - 1) * 20);
				}
			}
		}
	}

	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (maxIndex[i] == 1 && time[i] < fast)
			{
				fast = time[i];
				fastIndex = i;
			}
		}

		if (score[fastIndex] == 0)
		{
			printf("%d", 0);
		}

		else if (score[fastIndex] == 1 || score[fastIndex] == 4)
		{
			printf("%d", time[fastIndex] + (fastIndex - 1) * 20);
		}
	}

	

	return 0;
}