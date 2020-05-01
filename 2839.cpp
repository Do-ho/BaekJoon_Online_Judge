#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &n);
	if (n >= 6&&n!=7)
	{
		if (n % 5 == 0)
		{
			printf("%d\n", n / 5);
			return 0;
		}
		for (i = n/5; i >= 1; i--)
		{
			if ((n - (5 * i)) % 3 == 0)
			{
				printf("%d", ((n - (5 * i)) / 3) + i);
				return 0;
			}
		}
		if (n % 3 == 0)
		{
			printf("%d\n", n / 3);
			return 0;
		}
	}
	else if (n == 3 || n == 5)
	{
		printf("1");
	}
	else if (n == 7)
	{
		printf("-1");
	}
	else { printf("-1"); }
}