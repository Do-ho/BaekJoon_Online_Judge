#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	gets(a);

	for(int i=1; i<=strlen(a); i++)
	{
		printf("%c", a[i-1]);
		if (a[i] == '\n') break;
		if (i % 10 == 0) printf("\n");
	}
}