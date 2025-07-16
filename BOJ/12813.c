#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[100001];
	char b[100001];
	scanf("%s\n%s", a, b);

	char temp[100001];
	strcpy(temp, a);

	int i, j, k;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == '1' &&  b[i] == '1')
		{
			a[i] = '1';
		}

		else
		{
			a[i] = '0';
		}
	}
	printf("%s\n", a);
	strcpy(a, temp);

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == '1' || b[i] == '1')
		{
			a[i] = '1';
		}

		else
		{
			a[i] = '0';
		}
	}
	printf("%s\n", a);
	strcpy(a, temp);

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[i])
		{
			a[i] = '1';
		}

		else
		{
			a[i] = '0';
		}
	}
	printf("%s\n", a);
	strcpy(a, temp);

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == '1')
		{
			a[i] = '0';
		}

		else
		{
			a[i] = '1';
		}
	}
	printf("%s\n", a);
	strcpy(a, temp);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '1')
		{
			b[i] = '0';
		}

		else
		{
			b[i] = '1';
		}
	}
	printf("%s\n", b);

	return 0;
}