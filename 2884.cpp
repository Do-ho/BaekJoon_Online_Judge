#include <stdio.h>

int main()
{
	int h, m, sum;
	scanf("%d %d", &h, &m);
	sum = (1440 + (60 * h) + m - 45) % 1440;
	printf("%d %d", sum/60, sum%60);
}