#include <stdio.h>

int main()
{
	int size;
	scanf("%d\n", &size);
	char a;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		a = getchar();
		sum += (a-48);
	}
	printf("%d", sum);
}