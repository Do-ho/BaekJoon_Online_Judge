#include <stdio.h>

int main()
{
	while (true)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		printf("%d\n", a + b);
	}
}