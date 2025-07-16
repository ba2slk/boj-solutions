#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j,v;
	scanf("%d", &n);

	int vote[1000][3];
	int rslt[3] = { 0 };
	int stat[3][3] = {0};

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &v);
			vote[i][j] = v;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			stat[j][vote[i][j] - 1]++;
		}
	}

	int score;
	for (i = 0; i < n; i++)
	{
		score = 3;

		for (j = 0; j < 3; j++)
		{
			rslt[vote[i][j] - 1] += score--;
		}
	}

	int max = rslt[0];
	int maxIndex[3] = { 1, 0, 0 };

	for (i = 1; i < 3; i++)
	{
		if (rslt[i] > max)
		{
			max = rslt[i];
			for (j = 0; j < 3; j++)
			{
				maxIndex[j] = 0;
			}
			maxIndex[i]++;
		}

		if (rslt[i] == max)
		{
			maxIndex[i]++;
		}
	}

	int cnt = 0;

	for (i = 0; i < 3; i++)
	{
		if (maxIndex[i] == 1)
		{
			cnt++; // max 같은 것 개수
		}
	}

	if (cnt == 1) // 하나면 바로 출력
	{
		for (i = 0; i < 3; i++)
		{
			if (maxIndex[i] == 1)
			{
				printf("%d %d", i + 1, rslt[i]);
			}
		}
	}

	else if (cnt > 1) // 2개이상이면 3점 개수 2점 개수 비교
	{
		max = 0;
		cnt = 0;
		int s3[3] = { 0 };
		for (i = 0; i < 3; i++)
		{
			if (maxIndex[i] == 1)
			{
				if (stat[i][2] >= max)
				{
					max = stat[i][2];
					cnt++;
					s3[i]++;
				}
			}
		}

		if (cnt == 1)
		{
			for (i = 0; i < 3; i++)
			{
				if (s3[i] == 1)
				{
					printf("%d %d", i + 1, rslt[i]);
				}
			}		
		}

		else if (cnt > 1)
		{
			max = 0;
			cnt = 0;
			int s2[3] = { 0 };
			for (i = 0; i < 3; i++)
			{
				if (s3[i] == 1)
				{
					if (stat[i][1] >= max)
					{
						max = stat[i][1];
						cnt++;
						s2[i]++;
					}
				}
			}

			if (cnt == 1)
			{
				for (i = 0; i < 3; i++)
				{
					if (s2[i] == 1)
					{
						printf("%d %d", i + 1, rslt[i]);
					}
				}
			}

			else
			{
				for (i = 0; i < 3; i++)
				{
					if (maxIndex[i] == 1)
					{
						printf("%d %d", 0, rslt[i]);
						break;
					}
				}
			}
			
		}
	}
	return 0;
}