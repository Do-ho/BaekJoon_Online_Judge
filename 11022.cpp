#include <stdio.h>

int main()
{
	int case_n;
	scanf("%d", &case_n);

	for (int i = 1; i<=case_n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n",i, a, b, a + b);
	}
}