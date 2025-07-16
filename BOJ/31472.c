#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int w;
	scanf("%d", &w);
	
	double x;
	x = sqrt(w / (double)2);

	int ans = 8 * x;

	printf("%d", ans);

	return 0;
}
