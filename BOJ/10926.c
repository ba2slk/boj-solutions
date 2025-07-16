#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s[60];
	scanf("%s", s);
	strcat(s, "??!\0");
	printf("%s", s);

	return 0;
}