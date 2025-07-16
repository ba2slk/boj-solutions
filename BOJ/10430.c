#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int r1 = (a + b) % c;
	int r2 = ((a % c) + (b % c)) % c;
	int r3 = (a * b) % c;
	int r4 = ((a % c) * (b % c)) % c;

	printf("%d\n%d\n%d\n%d", r1, r2, r3, r4);

	return 0;
}