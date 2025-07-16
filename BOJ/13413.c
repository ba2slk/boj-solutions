#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char org[100000];
char aim[100000];

int main()
{
	int t;
	scanf("%d", &t);
	int n;

	int cnt;
	for (int i = 0; i < t; i++)
	{
		cnt = 0;
		scanf("%d\n%s\n%s", &n, org, aim);

		if (org[i] != aim[i])
		{
			if (org[i + 1] != org[i] && aim[i + 1] != aim[i]) // swap
			{
				cnt++;
				i++;
			}

			else
			{
				cnt++; // flip
			}
		}
		printf("%d", cnt);
	}

	return 0;
}